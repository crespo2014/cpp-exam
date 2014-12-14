#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
static void printer(int i)
{
  cout << i << ", ";
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v1(mynumbers, mynumbers + 7);
  copy(mynumbers, mynumbers + 7, v1.end());    //LINE I
  for_each(v1.begin(), v1.end(), printer);    //LINE II
  return 0;
}
/*
 Select correct answer (single choice)
 program outputs: 3, 9, 0, 2, 1, 4,
 program outputs: 3, 9, 0, 2, 1, 4, 5,
 runtime error at LINE II
 runtime error at LINE I
 compilation error in LINE II
 compilation error in LINE I
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 */
