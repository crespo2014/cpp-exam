#You are running Make with -k or --keep-going
#You are running Make with -i or --ignore-errors

cpp_files := $(wildcard *.cpp) $(wildcard e8/*.cpp)
cpp_out := $(cpp_files:%.cpp=%.out)

out_dir := build

$(out_dir) : 
	mkdir "$@"

%.out : %.cpp | $(out_dir)
	g++ -g -o "$(out_dir)/$@" "$<"
	
e7_files := $(wildcard e7*.cpp)
e7_out := $(e7_files:%.cpp=%.out)

e7 : $(e7_out)

all : $(cpp_out) 

clean : 
	rm -f *.out $(out_dir)/*.out
