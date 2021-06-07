#ifndef _BAR_H
#define _BAR_H

#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>

class Bar : public Fl_Group {
	public:
		Bar(int X, int Y, int W, int H, double lower, double upper, int n = 16, double r = 0.5);
		double value;
	protected:
		void draw();
	private:
		double padding;
		double bw;
		double dw;
		Fl_Box *bar;
};

#endif
