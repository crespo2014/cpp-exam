#include <vector>
#include <set>
#include <iostream>
#include <functional>
#include <algorithm>
#include <cctype>
using namespace std;

void printer(int i)
{
  cout << i << ", ";
}
static bool Compare(int _Left, int _Right)
{
  return _Left < _Right;
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v1(mynumbers, mynumbers + 7);
  remove(v1.begin(), v1.end(), 1);    //LINE I
  sort(v1.begin(), v1.end(), Compare);    //LINE II
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}

/*
 Select correct answers (multiple choice)
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 size of v1 vector is 6
 compilation error in LINE I
 size of v1 vector is 7
 compilation error in LINE II
 program outputs: 0, 2, 3, 4, 5, 9,
 program outputs: 0, 2, 3, 4, 5, 5, 9,

 */
