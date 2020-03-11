TARGET=d10

CSRC=$(TARGET).c
CSRC+=

COBJ=$(CSRC:.c=.o)

CC=gcc
CFLAGS=-Wall 
LDFLAGS=-lm

$(TARGET).out: $(COBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

$(COBJ):%.o:%.c
	$(CC) $(CFLAGS) -c $<

run:
	./$(TARGET).out

clean:
	rm *.o *.out

.PHONY: run clean














