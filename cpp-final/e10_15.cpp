// What will happen when you attempt to compile and run the following code? Choose all that apply.

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
class Pocket {
        int a;
public:
        Pocket(int a) :    a(a) {}
        int getA() const { return a; }
        void setA(int a) { this->a = a; }
        bool operator < (const Pocket & b) const  { return a<b.a;}
};
class Founder {
public:
        Pocket val;
        Founder(Pocket & v):val(v){}
        bool operator() (Pocket & v) {return (v.getA() == val.getA());}
};
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        vector<Pocket> v1(mynumbers, mynumbers + 6);//LINE I
        set<Pocket> s1(mynumbers, mynumbers + 6);
        Pocket a(6);
        Founder fonderA(a);
        if (find_if(v1.begin(), v1.end(), fonderA) !=v1.end()) //LINE II
                cout<<"Found!, ";
        else
                cout<<"Not found!, ";
        Pocket b(5);
        Founder founderB(b);
        if (find_if(v1.begin(), v1.end(), founderB) !=v1.end()) //LINE III
                cout<<"Found!";
        else
                cout<<"Not found!";
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE III
program outputs: Found!, Found!
program outputs: Not found!, Found!
compilation error in LINE II
program outputs: Found!, Not found!
compilation error in LINE I
runtime error at LINE I
*/
