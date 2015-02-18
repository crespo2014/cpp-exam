

//What will happen when you attempt to compile and run the following code?

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <fstream>
using namespace std;
void printer(int i) {
        cout << setw(2) << i << ", ";
}
int main ()
{
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        vector<int> v1(mynumbers, mynumbers + 6);
        fstream outfile("output.txt", ios::trunc|ios::out);
        int i=0 ;
        while (i>1);//LINE I
        {
                outfile>>i;//LINE II
                i = v1[0];
                v1.pop_back();
        }
        outfile.close();
        for_each(v1.begin(), v1.end(), printer);
        outfile.close();   outfile.open("output.txt");
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 8, 9, 7, 6, 4, 1,
program runs forever without output
compilation error in LINE II
compilation error in LINE I
program outputs: 8, 9, 7, 6, 4,
program outputs: 4, 6, 7, 8, 9,
runtime error at LINE I
*/
