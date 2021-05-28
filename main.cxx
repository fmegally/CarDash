#include <stdio.h>

#include <Fl/Fl.H>
#include "Gauge.h"
#include <unistd.h>

using namespace std;

int main(int argc, char* arv[])
{
	UserInterface mm(0,0,800,800);
	mm.show();
	mm.g1->value = 0;
//	mm.g2->value = 4000;
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

