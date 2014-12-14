#You are running Make with -k or --keep-going
#You are running Make with -i or --ignore-errors

cpp_files := $(wildcard *.cpp)
cpp_out := $(cpp_files:%.cpp=%.out)

out_dir := build

$(out_dir) : 
	mkdir "$@"

%.out : %.cpp | $(out_dir)
	g++ -o "$(out_dir)/$@" "$<"

all : $(cpp_out) 

clean : 
	rm -f *.out $(out_dir)/*.out
