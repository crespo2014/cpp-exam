#include <vector>
#include <set>
#include <iostream>
#include <functional>
#include <algorithm>
#include <cctype>
#include <deque>
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
  sort(d1.begin(), d1.end());
  d1.push_back(6);
  deque<int>::iterator it = upper_bound(d1.begin(), d1.end(), 3);    //LINE I
  for_each(it, d1.end(), printer);    //LINE II
  return 0;
}

/*
 Select correct answer (single choice)
 program outputs: 4, 5, 6, 9,
 program outputs: 4, 5, 9,
 runtime error at LINE I
 program outputs: 4, 5, 9, 6,
 compilation error in LINE I
 program outputs: 4, 5, 6,
 compilation error in LINE II
 runtime error at LINE II

 */
