#include "Gauge.h"
#include "Bar.h"
#include <string.h>
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Value_Output.H>
#include "SevenSegment.h"

class GaugeCluster : public Fl_Double_Window {
  void _GaugeCluster();
public:
  GaugeCluster(int X, int Y, int W, int H, const char *L = 0);
  GaugeCluster(int W, int H, const char *L = 0);
  GaugeCluster();
  ~GaugeCluster();
  Gauge* g1; 
  Gauge* g2;
  SevenSegment* oil_temp;
  SevenSegment* oil_pres;
  SevenSegment* cool_temp;
  SevenSegment* fuel_pres;
  SevenSegment* imap;
  Bar* bar1;
  
};
