TARGET=main
CC=g++
RM=rm -rf 
SRC=$(wildcard *.cc)
OBJECT=$(patsubst %.cc, %.o, $(SRC))
CXXFLAGS= -O2 -g -std=c++20
LDFLAGS=-pthread

all: $(TARGET)

$(TARGET): $(OBJECT)
	@$(CC) $^ -o $@ $(LDFLAGS)

%.o: %.cc
	@$(CC)  $< -c  -o $@ $(CXXFLAGS)

.PHONY: clean

clean:
	@$(RM) $(OBJECT) $(TARGET)
