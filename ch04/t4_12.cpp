#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

static void printer(int i)
{
  cout << i << ", ";
}
static bool classifier(int v)
{
  return v - 3 > 0;
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v1(mynumbers, mynumbers + 7);
  set<int> s1(mynumbers, mynumbers + 7);
  replace(v1.begin(), v1.end(), classifier, 7);    //LINE I
  for_each(v1.begin(), v1.end(), printer);    //LINE II
  return 0;
}
/*
 Select
 correct answer(single choice) program outputs: 0, 1, 2, 3, 7, 7, 7,
 program outputs: 3, 7, 0, 2, 1, 7, 7,
 runtime error at LINE I
 compilation error in LINE II
 program outputs: 7, 7, 0, 2, 1, 7, 7,
 compilation error in LINE I
 runtime error at LINE II

 */
