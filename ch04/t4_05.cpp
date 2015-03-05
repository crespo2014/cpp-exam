#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

static void printer(int i)
{
  cout << i << ", ";
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  set<int> s1(mynumbers, mynumbers + 7);
  vector<int> v1(s1.rbegin(), s1.rend());
  swap_ranges(v1.begin(), s1.end(), v1.begin());    //LINE I
  swap_ranges(s1.begin(), v1.end(), s1.begin());    //LINE II
  for_each(s1.begin(), s1.end(), printer);
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}
/*
 Select
 correct answers(multiple choice) program outputs: 0, 1, 2, 3, 4, 5, 9, 9, 5, 4, 3, 2, 1, 0,
 program outputs: 0, 1, 2, 3, 4, 5, 9, 0, 1, 2, 3, 4, 5, 9,
 compilation error in LINE II
 runtime error at LINE II
 runtime error at LINE I
 program outputs: 9, 5, 4, 3, 2, 1, 0, 9, 5, 4, 3, 2, 1, 0,
 compilation error in LINE I

 */
