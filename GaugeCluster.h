#include "Gauge.h"

class GaugeCluster : public Fl_Window {
  void _GaugeCluster();
public:
  GaugeCluster(int X, int Y, int W, int H, const char *L = 0);
  GaugeCluster(int W, int H, const char *L = 0);
  GaugeCluster();
  Gauge* g1; 
  Gauge* g2;
};
