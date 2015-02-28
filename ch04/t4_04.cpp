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
  deque<int> d1(mynumbers, mynumbers + 7);
  vector<int> v1(d1.rbegin(), d1.rend());
  swap_ranges(v1.begin(), v1.end(), d1.begin());    //LINE I
  sort(d1.begin(), d1.end());    //LINE II
  for_each(d1.begin(), d1.end(), printer);
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}
/*
 Select
 correct answer(single choice) program outputs: 0, 1, 2, 3, 4, 5, 9, 3, 9, 0, 2, 1, 4, 5,
 compilation error in LINE I
 program outputs: 0, 1, 2, 3, 4, 5, 3, 0, 2, 1, 4, 5,
 runtime error at LINE I
 runtime error at LINE II
 program outputs: 5, 4, 1, 2, 0, 9, 3, 0, 1, 2, 3, 4, 5, 9,
 compilation error in LINE II
 program outputs: 5, 4, 1, 2, 0, 9, 0, 1, 2, 3, 4, 5,

 */
