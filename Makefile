CXX=g++
CXXFLAGS:=-std=c++11 -Wall
SOURCES:=${wildcard *.cpp}
HEADERS:=${wildcard *.h}

.PHONY: all clean

all: hw06
hw06: ${SOURCES} ${HEADERS}
	$(CXX) -o hw06 ${SOURCES} $(CXXFLAGS)

clean:
	rm -f hw06
