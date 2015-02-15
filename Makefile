#You are running Make with -k or --keep-going
#You are running Make with -i or --ignore-errors

out_dir := build

cpp_files := $(wildcard *.cpp) $(wildcard e8/*.cpp) $(wildcard e9/*.cpp) $(wildcard cpp-final/*.cpp)
#cpp_files := $(patsubst */,,$(cpp_files))
cpp_out := $(addprefix $(out_dir)/,$(cpp_files:%.cpp=%.out))


$(out_dir) : 
	mkdir "$@"

$(out_dir)/%.out : %.cpp | $(out_dir)
	g++ -g -o "$@" "$<"
	
e7_files := $(wildcard e7*.cpp)
e7_out := $(e7_files:%.cpp=%.out)

e7 : $(e7_out)
e9 : $(patsubst %.cpp,%.out,$(addprefix $(out_dir)/,$(wildcard e9/*.cpp)))

all : $(cpp_out) 

clean : 
	rm -f *.out $(out_dir)/*.out
