#include <stdio.h>
#include <FL/Fl.H>
#include <unistd.h>

#include "Gauge.h"
#include "GaugeCluster.h"

using namespace std;

int main(int argc, char* arv[])
{
	GaugeCluster *mm;
	mm = new GaugeCluster(0,0,800,400);
	mm->show();
	mm->g1->value = 0;
	
	int i = 0;

	while ( i < 8000 )
	{
		mm->g1->value =((double) i)/1000.0;
		mm->g2->value =((double) i)/40;
		mm->bar1->value = ((double) i)/((double) 8000) *120.0;
		i += 1;
		mm->redraw();
		usleep(1);
		Fl::check();
	}
	
	return 0;
}

