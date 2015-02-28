
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
struct sequence {
        int val,inc;
public:
        sequence(int s, int i):val(s),inc(i){}
        operator int() const{//LINE I
                int r = val;
                return r;
        }
};
int main() {
        vector<int> v1(5);
        fill(v1.begin(), v1.end(), sequence(2,4));//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
runtime error at LINE II
program outputs: 2, 2, 2, 2, 2,
compilation error in LINE I
program outputs: 2, 4, 2, 4, 2,
program outputs: 2, 3, 4, 2, 3,
*/
