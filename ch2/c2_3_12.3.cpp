#include <map>
#include <iostream>
#include <functional>

using namespace std;

template<class T> void print(T start, T end) {
        while (start != end) {
                std::cout<< start->first<<":"<<start->second<<" "; start++;
        }
    }

template<class T, class U> void fillMap(map<T, T> & m, U start, U end)
{
    for( ; start!= end; ++start)
    {
        m.insert(pair<T,T>(*start, *start));
    }
}

int main()
{
    int t[]={16, 10, 8, 40, 6, 15, 3, 9, 7, 2};
    map<int,int > m1;
    fillMap(m1, t,t+10);
    print(m1.begin(), m1.end()); cout<<endl<<endl;

    cout<<"Removing element from a certain position (iterator):\n";
    map<int, int>::iterator it = m1.find(15);
    m1.erase(it);
    print(m1.begin(), m1.end()); cout<<endl<<endl;

    cout<<"Removing certain value (9) from the map:\n";
    m1.erase(9);
    print(m1.begin(), m1.end()); cout<<endl<<endl;

    cout<<"Removing range of iterators:\n";
    m1.erase(m1.find(10), m1.end());
    print(m1.begin(), m1.end()); cout<<endl<<endl;

    cout<<"Removing all the elements from the map\n";
    m1.clear();
    cout<<"M1 size: "<<m1.size()<<endl;
    return 0;
}
/*
Console output:
2:2 3:3 6:6 7:7 8:8 9:9 10:10 15:15 16:16 40:40

Removing element from a certain position (iterator):
2:2 3:3 6:6 7:7 8:8 9:9 10:10 16:16 40:40

Removing certain value (9) from the map:
2:2 3:3 6:6 7:7 8:8 10:10 16:16 40:40

Removing range of iterators:
2:2 3:3 6:6 7:7 8:8

Removing all the elements from the map
M1 size: 0
*/
