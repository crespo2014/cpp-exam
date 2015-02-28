
#include <iostream>
#include <set>
#include <vector>
using namespace std;
template<class T> void print(T start, T end) {
        while (start != end) {
                std::cout << *start << ", "; start++;
        }
}
int main(){
        int mynumbers[] =        { 8, 9, 7, 6};
        vector<int> v(mynumbers, mynumbers+4);
        multiset<int> s1(mynumbers, mynumbers+4);
        for(int i=4; i>0; i--  ) {
                double x=*(s1.begin());//LINE I
                v.push_back(i+x);  //LINE II
        }
        print(v.begin(), v.end()); cout<<endl;
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 8, 9, 7, 6, 10,
compilation error in LINE II
compilation error in LINE I
program outputs: 8, 9, 7, 6, 10, 9, 8, 7
program outputs: 8, 9, 7, 6, 12, 12, 9, 7
runtime error at LINE II
runtime error at LINE I
*/
