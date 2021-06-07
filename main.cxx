#include <stdio.h>
#include <Fl/Fl.H>
#include <unistd.h>

#include "Gauge.h"
#include "GaugeCluster.h"

using namespace std;

int main(int argc, char* arv[])
{
	GaugeCluster mm(0,0,800,400);
	mm.show();
	mm.g1->value = 0;
	int i = 0;
	while ( i < 8000 )
	{
		mm.g1->value =((double) i)/1000.0;
		i += 1;
		mm.redraw();
		Fl::wait();
	}
	
	return 0;
}

