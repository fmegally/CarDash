CC = g++
CFLAGS = -Wall 
LIBS = -lm
OBJ = main.o Gauge.o GaugeCluster.o SevenSegment.o util.o Bar.o
TARGET = main.out

FLTK_LDFLAGS = `fltk-config --ldflags`
FLTK_CXXFLAGS = `fltk-config --cxxflags`

$(TARGET):$(OBJ)
	$(CC) -o $@ $(OBJ) $(FLTK_LDFLAGS)

%.o:%.cxx
	$(CC) -c -o $@ $< $(CXXFLAGS)

.PHONY:clean
clean:
	echo "Removing build files .."
	@bash -c 'rm {*.o,*.out} && echo "Clean complete !"'
