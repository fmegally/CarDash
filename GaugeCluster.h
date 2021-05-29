#include "Gauge.h"
#include <FL/Fl_Double_Window.H>

class GaugeCluster : public Fl_Double_Window {
  void _GaugeCluster();
public:
  GaugeCluster(int X, int Y, int W, int H, const char *L = 0);
  GaugeCluster(int W, int H, const char *L = 0);
  GaugeCluster();
  Gauge* g1; 
};
