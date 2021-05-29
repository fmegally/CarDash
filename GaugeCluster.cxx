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
  int ssfont;

  nFonts = Fl::set_fonts("*");
  for (i = 0; i < nFonts; i++)
  {
	const char* face_name = Fl::get_font_name((Fl_Font)i);
	printf("%s\n",face_name);
	if (!strcmp(face_name,"Seven Segment")) {ssfont = i; break;}
  }		
    
  this->box(FL_FLAT_BOX);
  this->color(FL_BACKGROUND_COLOR);
  this->selection_color(FL_BACKGROUND_COLOR);
  this->labeltype(FL_NO_LABEL);
  this->labelfont(0);
  this->labelsize(14);
  this->labelcolor(FL_FOREGROUND_COLOR);
  this->align(Fl_Align(FL_ALIGN_TOP));
  this->when(FL_WHEN_RELEASE);
  g1 = new Gauge(0,400,400,0,8000);
  oil_temp = new Fl_Value_Output(10,10,100,30);
  oil_temp->align(FL_ALIGN_BOTTOM);
  oil_temp->format("%5.1f");
  oil_temp->color(0x00000000);
  oil_temp->textcolor(0x00FF0000);
  oil_temp->textfont(ssfont);
  oil_temp->textsize(30);
  oil_temp->value(178.8);
  oil_temp->label("Oil Temp");
  clear_border();
  end();
}
