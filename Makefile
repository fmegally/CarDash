ODIR = ./build
IDIR = ./include
SDIR = ./src

CC = g++
CFLAGS = -Wall -I$(IDIR)
LIBS = -lm
OBJF = main.o uart.o message.o ringbuffer.o gpio.o chksum.o timer.o
OBJ = $(patsubst %,$(ODIR)/%, $(OBJF))
TARGET = main

$(ODIR)/$(TARGET).bin: $(OBJ)
	$(CC) -o $@ $(OBJ) -mmcu=$(MCU) $(CFLAGS)

$(ODIR)/%.o: $(SDIR)/%.c
	$(CC) -c -o $@ $< -mmcu=$(MCU) $(CFLAGS)

.PHONY:clean
clean:
	echo "Removing build files .."
	@bash -c 'rm $(ODIR)/{*.o,*.bin} && echo "Clean complete !"'
