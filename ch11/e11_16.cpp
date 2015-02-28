

//What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
template<class T>struct Out {
        ostream  & out;
        Out(ostream & o): out(o){}
        void operator()(const T & val ) {
                out<<val<<", ";
        }
};
struct Sequence {
        int start;
        Sequence(int start):start(start){}
        int operator()()
        {
                return start++ % 7;
        }
};
int main() {
        vector<int> v1(5);
        generate(v1.rbegin(), v1.rend(), Sequence(8));//LINE I
        rotate(v1.begin(),v1.begin() + 1, v1.end() );//LINE II
        for_each(v1.begin(), v1.end(), Out<int>(cout) );
        return 0;
}

/*
Select correct answer (single choice)
runtime error at LINE I
compilation error in LINE II
compilation error in LINE I
program outputs: 4, 3, 2, 1, 5, 6
program outputs: 4, 3, 2, 1, 5,
program outputs: 5, 4, 3, 2, 6,
*/
