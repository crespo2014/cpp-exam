//Which sentences are 100% true about the code below (multiple choice) when control reaches return:
#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>

using namespace std;
int main()
{
  int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  vector<int> v1(tab, tab + 10);
  vector<int> v2(v1.size(), 0);
  try
  {
    for (unsigned i = 0; i <= v1.size(); ++i)
    {
      int tmp = v1[i];                                // LINE I
      v1[i] = v1.at(v1.size() - i);                // LINE        II
      v1.at(i) = tmp;                                        // LINE III
      cout << v1[i] << " ";
    }
  } catch (...)
  {
    cout << "Exception!" << endl;
  }
  return 0;
}
/*
Select correct answer (single choice)
program will run and print output: Exception!
the exception will be thrown at line LINE III
program will run and print output: 10 9 8 7 6 5 4 3 2 1 Exception!
this program will not compile,
the exception will be thrown at line LINE I
*/
