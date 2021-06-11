#ifndef _SEVEN_SEGMENT_H
#define _SEVEN_SEGMENT_H

#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>

class SevenSegment : public Fl_Group {
	public:
		SevenSegment(int X, int Y, const char *label = 0);
		~SevenSegment();
		void setValue(double value);
		void setDisplayBackground(Fl_Color c);
		void setDisplayTextColor(Fl_Color c);
		void setLabelBackground(Fl_Color c);
		void setLabelTextColor(Fl_Color c);
	private:
		Fl_Box *display;
		Fl_Box *label;
};
#endif
