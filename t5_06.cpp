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
  sort(d1.begin(), d1.end());
  d1.push_back(3);    //LINE I
  pair<deque<int>::iterator, deque<int>::iterator> result = equal_range(d1.begin(), d1.end(), 3);    //LINE II
  for_each(result.first, result.second, printer);
  return 0;
}

/*
 Select correct answer (single choice)
 compilation error in LINE II
 compilation error in LINE I
 program outputs: 3, 3,
 program outputs: 3,
 runtime error at LINE II
 runtime error at LINE I

 */
