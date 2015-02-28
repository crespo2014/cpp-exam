//What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i)
{
  cout << i << ", ";
}
int main()
{
  int mynumbers1[] = { 3, 9, 0, 2 };
  int mynumbers2[] = { 6, 1, 4, 5 };
  vector<int> v1(14);
  vector<int> v2(34);
  sort(mynumbers2, mynumbers2 + 4);
  sort(mynumbers1, mynumbers1 + 4);
  copy(mynumbers1, mynumbers1 + 4, v1.begin());
  copy(mynumbers2, mynumbers2 + 4, v1.begin() + 5);    //LINE I
  merge(v1.begin(), v1.end(), v1.begin(), v1.end(), v2.begin());    //LINE II
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}

/*
 Select correct answer (single choice)
 program outputs: 0, 1, 2, 3, 4, 5, 6, 9,
 program outputs: 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 9,
 compilation error in LINE II
 compilation error in LINE I
 program outputs: 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 9,
 runtime error at LINE II
 program outputs: 0, 0, 0, 1, 2, 3, 4, 5, 6, 9,
 */
