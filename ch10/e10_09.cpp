#include <iostream>
#include <set>
#include <vector>
#include <functional>
using namespace std;
int main(){
        int mynumbers[] =        { 8, 9, 7, 6, 4, 1 };
        vector<int> v(mynumbers, mynumbers+6);
        multiset<int> s1(v.begin(),v.end());
        multiset<int, greater_equal<int> > s2(v.begin(), v.end());//LINE I
        s2.insert(3);//LINE II
        for(multiset<int, greater<int> >::iterator i=s2.begin();i!= s2.end(); i++)
                cout<<*i<<", ";
        cout<<endl;
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 9, 8, 7, 6, 4, 1,
compilation error in LINE II
program outputs: 9, 8, 7, 6, 4, 3, 1,
compilation error in LINE I
runtime error at LINE I
program outputs: 8, 9, 7, 6, 4, 1, 3,
*/
