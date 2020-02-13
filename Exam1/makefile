CC = g++
FLAGS = -std=c++17
FLAGS += -Wall

LINK = $(CC) $(FLAGS) -o
COMPILE = $(CC) $(FLAGS) -c

math : math.cc power.o factorial.o
	$(LINK) $@ $<

power.o : power.cc power.h
	$(COMPILE) $<

factorial.o : factorial.cc factorial.h
	$(COMPILE) $<

clean:
	rm *.o math
