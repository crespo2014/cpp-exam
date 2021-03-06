// What will happen when you attempt to compile and run the following code assuming that file input.txt contains following sequence: t r e?
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <fstream>
using namespace std;
void printer(char c) {
        cout << setw(2) << c << ", ";
}
int main ()
{
        ifstream inputfile("input.txt");
        vector<char> v1;
        char c;
        do
        {
                inputfile>>c;//LINE I
                v1.push_back(c);
        }
        while (inputfile.good());//LINE II
        inputfile.close();
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

/*
Select correct answer (single choice)
program outputs: t, r, e,
program outputs:t, r, e, e,
runtime error at LINE I
compilation error in LINE II
program runs forever without output
compilation error in LINE I
program outputs:t, r, e,
program outputs: t, r, e, e,
*/
