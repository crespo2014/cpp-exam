#include <map>
#include <string>
#include <iostream>
#include <functional>

using namespace std;

template<class T> void print(T start, T end) {
        while (start != end) {
                std::cout<< start->first<<":"<<start->second<<" "; start++;
        }
    }

template<class T, class U> void fillMap(multimap<T, T> & m, U start, U end)
{
    for( ; start!= end; ++start)
    {
        m.insert(pair<T,T>(*start, *start));
    }
}

int main()
{
    int t[]={4, 10, 8, 4, 5, 6, 3, 9, 7, 2, 4, 6, 2};
    multimap<int, int> m1;
    fillMap(m1, t,t+13);
    cout<<"m1: ";     print(m1.begin(), m1.end());cout<<endl;
    cout<<"Finding range of keys[4,6]:\n";
    multimap<int, int>::iterator it1 = m1.lower_bound(4);
    multimap<int, int>::iterator it2 = m1.upper_bound(6);
    print(it1,it2); cout<<endl<<endl;
    cout<<"Finding single value range using equal_bounds\n";
    pair<multimap<int, int>::iterator, multimap<int, int>::iterator> p = m1.equal_range(4);
    print(p.first, p.second); cout<<endl;
    return 0;
}
/*
Console output:
m1: 2:2 2:2 3:3 4:4 4:4 4:4 5:5 6:6 6:6 7:7 8:8 9:9 10:10
Finding range of keys[4,6]:
4:4 4:4 4:4 5:5 6:6 6:6

Finding single value range using equal_bounds
4:4 4:4 4:4
*/
