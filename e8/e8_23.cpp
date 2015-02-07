// What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: 7 8 9<enter>?
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main ()
{
        vector<int> v1;
        int i;
        do
        {
                cin >> i;
                v1.push_back(i);//LINE I
        }
        while (i != 9 && !cin.bad());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
compilation error in LINE I
program outputs: 7, 8,
program runs forever without output
program outputs: 7, 8, 9, 9,
runtime error at LINE II
program outputs: 7, 8, 9,
*/
