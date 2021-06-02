#include <string.h>
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
	: Fl_Group(X,Y,120,80)
{
	display = new Fl_Box(X,Y,120,45,"120.6");
	label = new Fl_Box(X,Y + 45,120,35,L);

	display->box(FL_FLAT_BOX);
	display->color(0x00000000);
	display->labelcolor(0xFF000000);
	display->label("12.4");
	display->labelsize(30);
	const Fl_Font sseg = getFontNumber("DSEG7 Classic Mini");
	display->labelfont(sseg);
	display->align(FL_ALIGN_RIGHT | FL_ALIGN_INSIDE);

	label->box(FL_FLAT_BOX);
	label->color(FL_BACKGROUND_COLOR);
	label->align(FL_ALIGN_CENTER | FL_ALIGN_INSIDE);
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
	sprintf(buffer,"%.1f",value);
	printf("%s\n",buffer);
	display->copy_label(buffer);

	return;
}
