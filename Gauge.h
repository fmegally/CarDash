// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef Gauge_h
#define Gauge_h
#include <FL/Fl.H>
#include <FL/Fl_Widget.H>
#include <vector>

class Gauge : public Fl_Widget {
public:
  Gauge(int x, int y, int size, double lower, double upper);
  void setLabel(const char *lbl);
  void enableMajorLabels(void);
  void disableMajorLabels(void);
  double value;
protected:
  void draw();
private:
  int XCent, YCent;
  int needlePivotSize;
  char *label;

  int size;
  int padding;
  double maxLabelRadius;
  double majorTickRadius;
  double minorTickRadius;
  double baseTickRadius;
  double needleRadius;
  double radius;
  double angStart, angEnd;
  double valueMin, valueMax;
  double *subRange;

  std::vector<double> majorTicks;
  std::vector<double> minorTicks;

  bool labelMajorTicks;

  Fl_Color backgroundColor;
  Fl_Color majorTickColor;
  Fl_Color minorTickColor;
  Fl_Color needleColor;
  Fl_Color labelColor;
};

#endif
