#include "GaugeCluster.h"

GaugeCluster::GaugeCluster(int X, int Y, int W, int H, const char *L)
  : Fl_Window(X, Y, W, H, L) {
  _GaugeCluster();
}

GaugeCluster::GaugeCluster(int W, int H, const char *L)
  : Fl_Window(0, 0, W, H, L) {
  clear_flag(16);
  _GaugeCluster();
}

GaugeCluster::GaugeCluster()
  : Fl_Window(0, 0, 800, 800, "Gauge Test") {
  clear_flag(16);
  _GaugeCluster();
}

void GaugeCluster::_GaugeCluster() {
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
  printf("%d,%d\n",g1->x(),g1->y());
  g2 = new Gauge(0,0,400,0,7000);
  clear_border();
  end();
}
