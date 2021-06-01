#include "GaugeCluster.h"

GaugeCluster::GaugeCluster(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _GaugeCluster();
}

GaugeCluster::GaugeCluster(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _GaugeCluster();
}

GaugeCluster::GaugeCluster()
  : Fl_Double_Window(0, 0, 800, 800, "Gauge Test") {
  clear_flag(16);
  _GaugeCluster();
}

void GaugeCluster::_GaugeCluster() {
  int i, nFonts;
  int ssfont = 0;

  nFonts = Fl::set_fonts("*");
  for (i = 0; i < nFonts; i++)
  {
	const char* face_name = Fl::get_font_name((Fl_Font)i);
	printf("%s\n",face_name);
	if (!strcmp(face_name,"Seven Segment")) {ssfont = i; break;}
  }		
    
  this->box(FL_FLAT_BOX);
  this->color(0x15151500);
  this->selection_color(0x30303000);
  this->labeltype(FL_NO_LABEL);
  this->labelfont(0);
  this->labelsize(14);
  this->labelcolor(FL_FOREGROUND_COLOR);
  this->align(Fl_Align(FL_ALIGN_TOP));
  this->when(FL_WHEN_RELEASE);
  g1 = new Gauge(30,20,360,0,8000);
  oil_temp = new SevenSegment(420,10,"Oil Temp");
  oil_temp->setValue(123.543);
  oil_temp->setLabelBackground(0x15151500);
  oil_temp->setLabelTextColor(0xFFFFFF00);
  clear_border();
  end();
}
