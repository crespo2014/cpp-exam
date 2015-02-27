#include <map>
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
    int t[]={2, 10, 9, 40, 6, 15, 3, 9, 7, 2};
    multimap<int,int > m1;
    fillMap(m1, t,t+10);
    print(m1.begin(), m1.end()); cout<<endl<<endl;

    cout<<"Removing element from a certain position - iterator of element 15:\n";
    multimap<int, int>::iterator it = m1.find(15);
    m1.erase(it);
    print(m1.begin(), m1.end()); cout<<endl<<endl;

    cout<<"Removing certain value (9) from the multimap:\n";
    m1.erase(9);
    print(m1.begin(), m1.end()); cout<<endl<<endl;

    cout<<"Removing range of iterators - starting with element 10 to the end:\n";
    m1.erase(m1.find(10), m1.end());
    print(m1.begin(), m1.end()); cout<<endl<<endl;

    cout<<"Removing all the elements from the multi map\n";
    m1.clear();
    cout<<"M1 size: "<<m1.size()<<endl;
    return 0;
}
/*
Console output:
2:2 2:2 3:3 6:6 7:7 9:9 9:9 10:10 15:15 40:40

Removing element from a certain position - iterator of element 15:
2:2 2:2 3:3 6:6 7:7 9:9 9:9 10:10 40:40

Removing certain value (9) from the multimap:
2:2 2:2 3:3 6:6 7:7 10:10 40:40

Removing range of iterators - starting with element 10 to the end:
2:2 2:2 3:3 6:6 7:7

Removing all the elements from the multimap
M1 size: 0
*/
