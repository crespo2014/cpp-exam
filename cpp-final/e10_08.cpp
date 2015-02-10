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
        int mynumbers[] =        { 8, 6, 4, 1 };
        vector<int> v(mynumbers, mynumbers+6);
        set<int> s(v.begin(),v.end());
        for(int i=4; i>0; i  ) {
                int x = *(s.begin()); //LINE I
                s.pop();                 //LINE II
                v.push_back(i+x);
        }
        print(v.begin(), v.end()); print(s.begin(), s.end());cout<<endl;
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 8, 6, 4, 1, 1, 4, 6, 8
program outputs: 8, 6, 4, 1,
program outputs: 8, 6, 4, 1, 8, 6, 4, 1,
compilation error in LINE I
compilation error in LINE II
runtime error at LINE I
*/
