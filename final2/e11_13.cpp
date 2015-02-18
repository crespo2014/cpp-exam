

What will happen when you attempt to compile and run the following code?

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class A {
        int a;
public:
        A(int a) :    a(a) {}
        int getA() const { return a; }    void setA(int a) { this->a = a; }
        bool operator==(const A & b) const { return a == b.a; }
};
bool compare(const A & a, const A & b) { return a == b; }
int main () {
        int mynumbers[] =  { 3, 9, 9, 9, 0, 2, 5 };
        vector<A> v (mynumbers, mynumbers + 7);
        vector<A>::iterator it = v.begin();
        while ( (it = adjacent_find (it, v.end(), compare)) != v.end()) {//LINE I
                cout<<it-v.begin()<<", ";it++;//LINE II
        }
        cout<< endl;
        return 0;
}


Select correct answer (single choice)
runtime error at LINE I
compilation error in LINE II
program outputs: 2, 3,
program outputs: 3, 4,
program outputs: 1, 2,
compilation error in LINE I
