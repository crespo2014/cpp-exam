// What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: 255 127<enter>?
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
using namespace std;
void printer(int i) {
        cout << setw(4) << i << ", ";
}
int main ()
{
        string s;
        getline(cin, s);
        stringstream input(s);//LINE I
        vector<int> v1;
        int i;
        do
        {
                input >> hex >> i;
                v1.push_back(i);//LINE II
        }
        while (!input.fail());
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
compilation error in LINE II
runtime error at LINE II
program outputs: 255, 127,
program outputs: ff, 7f, 7f,
program runs forever without output
program outputs: 597, 295,
program outputs: 255, 127, 127,
program outputs: 597, 295, 295,
compilation error in LINE I
*/
