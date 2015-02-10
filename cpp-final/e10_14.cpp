
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>
using namespace std;
class A {
        int a;
public:
        A(int a):a(a) {}
        int getA() const { return a;} void setA(int a){ this->a = a;}
        bool operator < ( const A & b) const { return a<b.a;}
};
struct myprinter { void operator() (const A & a) {cout << a.getA() << ", ";} };
struct doubler
{
        void operator() (A a) { a.setA(a.getA()*2) ;}//LINE I
};
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        vector<A> v1(mynumbers, mynumbers + 6);
        set<A> s1(mynumbers, mynumbers + 6);
        for_each(v1.begin(), v1.end(), doubler()); for_each(v1.begin(), v1.end(), myprinter());//LINE II
        for_each(s1.begin(), s1.end(), doubler()); for_each(s1.begin(), s1.end(), myprinter());//LINE III
        return 0;
}
 /*
Select correct answer (single choice)
program outputs: 16, 18, 14, 12, 8, 2, 4, 16, 24, 28, 32, 36,
compilation error in LINE III
runtime error at LINE I
compilation error in LINE I
compilation error in LINE II
program outputs: 16, 18, 14, 12, 8, 2, 2, 8, 12, 14, 16, 18,
program outputs: 8, 9, 7, 6, 4, 1, 1, 4, 6, 7, 8, 9,
*/
