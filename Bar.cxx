#include <FL/fl_draw.H>
#include <cmath>
#include <iostream>
#include "Bar.h"

Bar::Bar(int X, int Y, int W, int H, double lower, double upper, double r)
	: Fl_Group(X,Y,W,H) {
		this->box(FL_FLAT_BOX);
		this->labeltype(FL_NO_LABEL);
		this->when(FL_WHEN_RELEASE);
		this->nBars = 32;
		this->lowerLimit = lower;
		this->upperLimit = upper;
		this->borderSize = -1;
		this->borderColor = 0x00000000;
		this->barH = H;
		this->barW = W;
		this->padding = 0;
		this->value = 120;
		this->bw = floor((W - 2*padding)/(nBars + nBars*r - r));
		this->dw = floor(bw * (1 + r));
//		rangeBoundaries[0] = 0.0;
//		rangeBoundaries[1] = 0.7;
//		rangeBoundaries[2] = 0.9;

//		rangeColors[0] = 0x36f58000;
//		rangeColors[1] = 0xf8b45400;
//		rangeColors[2] = 0xe5665900;
		
		return;
}

void Bar::draw()
{
	int i;

	for(i=0;i< floor((value/upperLimit) * nBars);i++)
	{
		double t = i*dw / barW;
		Fl_Color curr_color;

		if(t <= rangeBoundaries[1])
		{
			curr_color = rangeColors[0];
		} else if (t > rangeBoundaries[1] && t <= rangeBoundaries[2])
		{
			curr_color = rangeColors[1];
		} else if (t > rangeBoundaries[2])
		{
			curr_color = rangeColors[2];
		}

		fl_rectf(x() + (i * dw),y(),bw,barH,curr_color);
	};

	if (borderSize > 0)
	{
		fl_color(0xE0E0E000);
		fl_line_style(FL_SOLID,borderSize);
		fl_rect(x(),y(),barW,barH);
	}

	fl_line_style(0);
}



		


