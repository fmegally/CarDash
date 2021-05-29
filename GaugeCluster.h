#include "Gauge.h"
#include <string.h>
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Value_Output.H>

class GaugeCluster : public Fl_Double_Window {
  void _GaugeCluster();
public:
  GaugeCluster(int X, int Y, int W, int H, const char *L = 0);
  GaugeCluster(int W, int H, const char *L = 0);
  GaugeCluster();
  Gauge* g1; 
  Fl_Value_Output* oil_temp;
  
};
