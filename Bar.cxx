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
		this->borderSize = -1;
		this->borderColor = 0x00000000;
		this->barH = H;
		this->barW = W;
		this->padding = 0;
		this->value = 0;
		this->bw = floor((W - 2*padding)/(nBars + nBars*r - r));
		this->dw = floor(bw * (1 + r));
		return;
}

void Bar::draw()
{

	int i;
	for(i=0;i*dw < barW;i++)
	{
		fl_rectf(x() + (i * dw),y(),bw,barH,0x00FF0000);
	};

	if (borderSize > 0)
	{
		fl_color(0xE0E0E000);
		fl_line_style(FL_SOLID,borderSize);
		fl_rect(x(),y(),barW,barH);
	}
}



		


