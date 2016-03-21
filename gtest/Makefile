CC=g++
#CFLAGS=-c -Wall `pkg-config --cflags gtest`
CFLAGS=-c -Wall -I./
#LDFLAGS= `pkg-config --libs --cflags gtest`
LDFLAGS=-lgtest -lpthread
SOURCES=add.cpp tests.cpp
OBJECTS=$(SOURCES:.cpp=.o)
	EXECUTABLE=gtest_hello_world.bin

all: $(SOURCES) $(EXECUTABLE)
	    
$(EXECUTABLE): $(OBJECTS) 
	    $(CC) $(OBJECTS) $(LDFLAGS) -o $@

.cpp.o:
	    $(CC) $(CFLAGS) $< -o $@

