
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
        int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        vector<int> v1(mynumbers, mynumbers + 7);
        fstream outfile("output.txt", ios::trunc|ios::out);
        int i ;
        while (outfile.good());//LINE I
        {
                outfile>>i;//LINE II
                v1.push_back(i);
        }
        outfile.close();
        for_each(v1.begin(), v1.end(), printer);
        outfile.close();   outfile.open("output.txt");
        return 0;
}


//Type correct answer
