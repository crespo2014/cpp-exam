

//What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int Mul(int & _Left)
{ return 2*_Left;}
int main() {
        int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        vector<int> v1(mynumbers, mynumbers + 7);
        vector<int> v2(7);
        transform(v1.begin(), v1.end(), v2.begin(), ptr_fun(Mul));//LINE I
        vector<int>::iterator it = find_if(v2.begin(), v2.end(), bind2nd(equal_to<int>(),7));//LINE II
        cout<<*it<<endl;//LINE III
        return 0;
}
 
/*
Select correct answer (single choice)
runtime error at LINE III
program outputs: 0
runtime error at LINE II
program outputs: 6
program outputs: 3
compilation error in LINE I
*/
