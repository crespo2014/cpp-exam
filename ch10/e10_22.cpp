
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;
void print(int v)
{
        cout<<v<<", ";
}
struct Sequence {
        int start;
        Sequence(int start):start(start){}
        int operator()() { return start++; }
};
bool predicate(int v) { return v%3==0; }
int main() {
        vector<int> v1(5);
        generate_n(v1.begin(), 5, Sequence(5));//LINE I
        remove_if(v1.begin(), v1.end(), predicate);//LINE II
        for_each(v1.begin(), v1.end(), print);
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 5, 7, 8, 8, 9,
program outputs: 1, 3, 4, 4, 5,
compilation error in LINE I
runtime error at LINE II
compilation error in LINE II
program outputs: 1, 2, 4, 5,
*/
