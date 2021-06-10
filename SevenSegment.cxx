#include <string.h>
#include <iostream>
#include <stdio.h>
#include "SevenSegment.h"


static
Fl_Font getFontNumber(const char *fontName)
{
	int i, nFonts;
	int resultFont = 0;

	nFonts = Fl::set_fonts("*");
	for(i = 0; i < nFonts; i++){
		const char *tempName = Fl::get_font_name((Fl_Font)i);
		if(!strcmp(tempName, fontName)) {resultFont = i; break;}
	}
	
	return resultFont;
}

SevenSegment::SevenSegment(int X, int Y, const char *L)
	: Fl_Group(X,Y,140,60)
{
	const Fl_Font sseg = getFontNumber("DSEG7 Classic Mini");

	box(FL_BORDER_FRAME);
	color(0xFFB00000);

	label = new Fl_Box(X+1,Y+1,60,50,L);
	display = new Fl_Box(X+60,Y,80,50,"000");

	std::cout << sseg << std::endl;
	display->labelfont(FL_COURIER);

	display->box(FL_BORDER_FRAME);
	display->color(0xFFFFFF00);
	display->labelcolor(0xFF000000);
	display->label("000");
	display->labelsize(32);
	display->align(FL_ALIGN_RIGHT | FL_ALIGN_INSIDE);

	label->box(FL_FLAT_BOX);
	label->color(FL_BACKGROUND_COLOR);
	label->align(FL_ALIGN_LEFT | FL_ALIGN_INSIDE);
	label->labelsize(12);
	end();
}

void SevenSegment::setDisplayBackground(Fl_Color c)
{
	display->color(c);
	return;
}

void SevenSegment::setDisplayTextColor(Fl_Color c)
{
	display->labelcolor(c);
	return;
}

void SevenSegment::setLabelBackground(Fl_Color c)
{
	label->color(c);
	return;
}

void SevenSegment::setLabelTextColor(Fl_Color c)
{
	label->labelcolor(c);
	return;
}

void SevenSegment::setValue (double value)
{
	char buffer[24];
	sprintf(buffer,"%5.1f",value);
	display->copy_label(buffer);

	return;
}
