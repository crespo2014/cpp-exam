
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
template<typename T> ostream & print(const T & start, const T & end)
{
        T tmp = start;
        for(; tmp != end; ++tmp)
        {
                cout<< *tmp ;
        }
        return cout;
}
class A
{
public:
        int a;
public:
        A(int a):a(a) {}
};
void fill (const int table[], unsigned size, vector<A*> & v)
{
        for(unsigned i = 0; i < size; ++i)
        {
                v.push_back(new A(table[i]));                        //LINE I
        }
}
ostream & operator<<(ostream & c, const A & o)
{
        c << o.a << ", ";
        return c;
}
int main()
{
        int tab[]={8, 7, 6, 4, 2, 1};
        vector<A*> v1;
        fill(tab, 6, v1);
        vector<A*>::iterator it;
        list<A> l1;
        for(it = v1.begin(); it != v1.end(); ++it)
        {
                l1.push_front(**it);
        }
        print(l1.begin(), l1.end())<<endl;
        return 0;                //LINE II
}

/*
Select correct answer (single choice)
program outputs: 8, 7, 6, 4, 2, 1
runtime error at LINE I
compilation error in LINE II
compilation error in LINE I
program outputs: 8, 1,
program outputs: 1, 2, 4, 6, 7, 8,
*/
