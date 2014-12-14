#You are running Make with -k or --keep-going
#You are running Make with -i or --ignore-errors

cpp_files := $(wildcard *.cpp)
cpp_out := $(cpp_files:%.cpp=%.out)

%.out : %.cpp
	g++ -o "$@" "$<"

all : $(cpp_out) 
