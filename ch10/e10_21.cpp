
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void print(int v) {
        cout<<v<<", ";
}
struct Sequence {
        int start;
        Sequence(int start):start(start){}
        int operator()() {
                return start++;//LINE I
        }
};
int main() {
        vector<int> v1(5);
        generate_n(v1.begin(), 5, Sequence(5));//LINE II
        for_each(v1.begin(), v1.end(), print);
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 5, 5, 5, 5, 5,
program outputs: 5, 6, 7, 8, 9,
compilation error in LINE II
compilation error in LINE I
program outputs: 1, 2, 3, 4, 5,
runtime error at LINE II
*/
