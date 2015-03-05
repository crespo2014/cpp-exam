#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

static void printer(int i)
{
  cout << i << ", ";
}
static int multiply(int a)
{
  return a * 2;    //LINE I
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v1(mynumbers, mynumbers + 7);
  set<int> s1(mynumbers, mynumbers + 7);
  transform(s1.begin(), s1.end(), v1.begin(), multiply);    //LINE II
  for_each(s1.begin(), s1.end(), printer);
  return 0;
}
/*
 Select
 correct answer(single choice) program outputs: 0, 1, 2, 3, 4, 5, 9,
 compilation error in LINE I
 program outputs: 3, 9, 0, 2, 1, 4, 5,
 compilation error in LINE II
 runtime error at LINE I
 program outputs: 0, 1, 2, 3, 4, 5,
 runtime error at LINE II

 */
