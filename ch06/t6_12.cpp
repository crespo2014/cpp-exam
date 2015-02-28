// What will happen when you attempt to compile and run the following code?

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
  vector<int> v1(7);
  sort(mynumbers2, mynumbers2 + 3);
  sort(mynumbers1, mynumbers1 + 3);
  set_difference(mynumbers1, mynumbers1 + 3, mynumbers2, mynumbers2 + 3, v1.begin());
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}

/*
 Select correct answer (single choice)
 runtime error at LINE I
 compilation error in LINE II
 program outputs: 0, 3, 9, 0, 0, 0,
 program outputs: 0, 0, 0, 0, 0, 0, 0,
 runtime error at LINE II
 program outputs: 0, 3, 9,
 program outputs: 0, 3, 9, 0, 0, 0, 0,
 */
