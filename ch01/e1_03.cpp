//Which sentences are 100% true about the code below (multiple choice) when control reaches return:
#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>

using namespace std;
int main()
{
  vector<int> v1(10, -1);
  vector<int> v2;
  v2.reserve(10);
  for (unsigned i = 0; i < 10; i++)
  {
    v2.push_back(i);
  }
  return 0;
}
/*
Select correct answers (multiple choice)
both vectors v1 and v2 have the same capacity
code will not compile
value returned by size() is the same for vectors v1 and v2
size of vector v2 less than 20
*/
