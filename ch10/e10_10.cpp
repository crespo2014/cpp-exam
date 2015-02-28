
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
        int mynumbers[] =        { 8, 9, 7, 6, 4, 1, 6 };
        multiset<int> s1(mynumbers, mynumbers+6);//LINE I
        s1.insert(s1.find(9), 5);                                 //LINE II
        for(multiset<int>::iterator i=s1.begin();i!= s1.end(); i++)
                cout<<*i<<", ";
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 1, 4, 5, 6, 7, 8, 9,
compilation error in LINE I
program outputs: 1, 4, 5, 6, 6, 7, 8, 9,
program outputs: 1, 4, 5, 6, 7, 8,
runtime error at LINE I
compilation error in LINE II
*/
