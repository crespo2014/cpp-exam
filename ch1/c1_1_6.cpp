#include <vector>
#include <iostream>
using namespace std;

int main()
{
       vector <int> v(10);
       for(unsigned i = 0; i < v.size(); ++i)
       {
               v[i] = i;
       }
       for(unsigned i = 0; i < v.size(); ++i)
       {
               cout<<v[i]<< " ";
       }
       cout<<endl;

       cout<<v.size()<<endl;
       v.push_back(100);
       cout<<v.size()<<endl;
       v.pop_back();
       cout<<v.size()<<endl;
       return 0;
}
/*
Output of the program:
0 1 2 3 4 5 6 7 8 9
10
11
10
*/

