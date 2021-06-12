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

void GaugeCluster::_GaugeCluster()
{
  int i, nFonts;
  int ssfont = 0;

  this->box(FL_FLAT_BOX);
  this->color(0x15151500);
  this->selection_color(0x30303000);
  this->labeltype(FL_NO_LABEL);

  this->labelfont(0);
  this->labelsize(14);
  this->labelcolor(FL_FOREGROUND_COLOR);
  this->align(Fl_Align(FL_ALIGN_TOP));
  this->when(FL_WHEN_RELEASE);



  oil_temp = new SevenSegment(640,10,"Oil\nTemp");
  oil_temp->setValue(000.0);
  oil_temp->setDisplayBackground(0x15151500);
  oil_temp->setDisplayTextColor(0x36f58000);
  oil_temp->setLabelBackground(0x15151500);
  oil_temp->setLabelTextColor(0xF0F0F000);

  oil_pres = new SevenSegment(640,60,"Oil\nPress.");
  oil_pres->setValue(23.5);
  oil_pres->setDisplayBackground(0x15151500);
  oil_pres->setDisplayTextColor(0x36f58000);
  oil_pres->setLabelBackground(0x15151500);
  oil_pres->setLabelTextColor(0xF0F0F000);

  cool_temp = new SevenSegment(640,110,"Coolant\nTemp");
  cool_temp->setValue(23.5);
  cool_temp->setDisplayBackground(0x15151500);
  cool_temp->setDisplayTextColor(0x36f58000);
  cool_temp->setLabelBackground(0x15151500);
  cool_temp->setLabelTextColor(0xF0F0F000);

  fuel_pres = new SevenSegment(640,160,"Fuel\nPress.");
  fuel_pres->setValue(23.5);
  fuel_pres->setDisplayBackground(0x15151500);
  fuel_pres->setDisplayTextColor(0x36f58000);
  fuel_pres->setLabelBackground(0x15151500);
  fuel_pres->setLabelTextColor(0xF0F0F000);

  imap = new SevenSegment(640,210,"IMAP");
  imap->setValue(23.5);
  imap->setDisplayBackground(0x15151500);
  imap->setDisplayTextColor(0x36f58000);
  imap->setLabelBackground(0x15151500);
  imap->setLabelTextColor(0xF0F0F000);
  g1 = new Gauge(5,5,300,0,8,1);
  g2 = new Gauge(320,5,300,0,200,20);
  bar1 = new Bar(5,300,140,15,0,120,0.5);
  end();
}

GaugeCluster::~GaugeCluster()
{
	delete oil_temp;
	delete oil_pres;
	delete cool_temp;
	delete fuel_pres;
	delete imap;
	delete g1;
	delete g2;
	return ;
}

