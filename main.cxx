#include <stdio.h>
#include <Fl/Fl.H>
#include <unistd.h>

#include "Gauge.h"
#include "GaugeCluster.h"

using namespace std;

int main(int argc, char* arv[])
{
	GaugeCluster mm(0,0,800,800);
	mm.show();
	mm.g1->value = 0;
	int i = 0;
	while ( i < 7000 )
	{
		mm.g1->value = i;
		i += 1;
		mm.redraw();
		Fl::wait();
	}
	
	return 0;
}

