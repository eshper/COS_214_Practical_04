CC = g++

CFLAGS = -Wall -g


SRCS := $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=.o)

MAIN = program

all: $(MAIN)
	
$(MAIN): $(OBJS) 
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

.cpp.o:
	$(CC) $(CFLAGS) -c $<  -o $@
	
run: $(MAIN)
	./$(MAIN)

clean:
	$(RM) *.o *~ $(MAIN)