#include <FL/fl_draw.H>
#include <cmath>
#include <iostream>
#include "Bar.h"

Bar::Bar(int X, int Y, int W, int H, double lower, double upper, int n, double r)
	: Fl_Group(X,Y,W,H) {
		this->box(FL_FLAT_BOX);
		this->labeltype(FL_NO_LABEL);
		this->when(FL_WHEN_RELEASE);

		this->padding = 0;
		this->value = 0;
		this->bw = (W - 2*padding)/(n + n*r - r);
		this->dw = bw * (1 + r);
		return;
}

void Bar::draw()
{
	int i;


