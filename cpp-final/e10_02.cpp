#include <deque>
#include <iostream>
using namespace std;
template<typename T> ostream & print(T & start, T & end)
{
        for(; start != end; ++start)
                cout<< *start<< " ";
        return cout;
}
int main()
{
        int tab[]={8, 7, 6, 4, 2, 1};
        deque<int> d1(tab, tab+6);
        deque<int> d2;
        deque<int>::iterator it;
        for(it = d1.begin(); it != d1.end(); ++it)
        {
                d2.push_back(d1[d1.end()-it-1]);        //LINE I
        }
        print(d2.rbegin(), d2.rend()) << endl;        //LINE II
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 8, 7, 6, 4, 2, 1
runtime error at LINE I
compilation error in LINE II
program outputs: 1, 8,
program outputs: 1, 2, 4, 6, 7, 8,
compilation error in LINE I
*/
