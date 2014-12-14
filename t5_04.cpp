#include <vector>
#include <set>
#include <iostream>
#include <functional>
#include <algorithm>
#include <cctype>
using namespace std;

static
void printer(int i)
{
  cout << i << ", ";
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  deque<int> d1(mynumbers, mynumbers + 7);
  deque<int>::iterator it = lower_bound(d1.begin(), d1.end(), 3);
  d1.push_back(6);    //LINE I
  for_each(it, d1.end(), printer);    //LINE II
  return 0;
}
/*

 Select correct answer (single choice)
 program outputs: 4, 5, 6,
 compilation error in LINE II
 program outputs: 4, 5,
 compilation error in LINE I
 runtime error at LINE I
 runtime error at LINE II

 */
