
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(double i) {
        cout << i << ", ";
}
bool Compare(double a, double b) { return int(a)<int(b);}
int main() {
        double mynumbers[] = { 1.11, 3.13, 2.12, 5.15, 6.16};
        vector<double> v1(mynumbers, mynumbers + 5);
        stable_sort(v1.begin(), v1.end(), Compare);//LINE I
        remove(v1.begin(), v1.end(), 5.15);//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

/*
Select correct answers (multiple choice)
program outputs: 1.11, 3.13, 2.12, 6.16,
size of v1 vector is 5 ;;;;
size of v1 vector is 6
compilation error in LINE II
compilation error in LINE I
program outputs: 1.11, 3.13, 2.12, 6.16, 6.16,
program outputs: 1.11, 3.13, 2.12, 6.16, 6.16,
*/
