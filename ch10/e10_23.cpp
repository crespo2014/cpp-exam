
#include <vector>
#include <iostream>
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
                return 2*(start++ % 3);
        }
};
int main() {
        vector<int> v1(3);
        vector<int> v2(3);
        generate(v1.begin(), v1.end(), Sequence(5));//LINE I
        sort(v1.rbegin(), v1.rend());
        unique_copy(v1.begin(),v1.end(), v2.begin());//LINE II
        for_each(v1.begin(), v1.end(), Out<int>(cout) );
        for_each(v2.begin(), v2.end(), Out<int>(cout) );
        return 0;
}

/*
Select correct answers (multiple choice)
compilation error in LINE II
program outputs: 1, 2, 4, 1, 2, 4,
compilation error in LINE I
you can call unique_copy function on these vectors (v1, v2)
program outputs: 4, 2, 0, 4, 2, 0,
program outputs: 4, 2, 0, 0, 2, 4,
*/
