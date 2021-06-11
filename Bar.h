#ifndef _BAR_H
#define _BAR_H

#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>

class Bar : public Fl_Group {
	public:
		Bar(int X, int Y, int W, int H, double lower, double upper, double r = 0.5);
		double value;
	protected:
		void draw();
	private:
		int borderSize;
		Fl_Color borderColor;
		int nBars;
		int barH, barW;
		double padding;
		double bw;
		double dw;
		double rangeBoundaries[3] = {0.0, 0.7, 0.9};
		Fl_Color rangeColors[3]  = {0x36f58000, 0xf8b45400, 0xe5665900};
		Fl_Box *bar;
};

#endif
