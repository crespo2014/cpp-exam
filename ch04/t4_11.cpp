#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <deque>
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
  replace_if(v1.begin(), v1.end(), classifier, 7);    //LINE I
  for_each(v1.begin(), v1.end(), printer);    //LINE II
  return 0;
}
/*
 Select
 correct answers(multiple choice) compilation error in
 LINE Iprogram outputs: 7, 7, 0, 2, 1, 7, 7,
 program outputs: 0, 1, 2, 3, 7, 7, 7,
 program outputs: 3, 7, 0, 2, 1, 7, 7,
 runtime error at LINE II
 runtime error at LINE I
 you can't call replace function with classifier function as 3rd parameter
 compilation error in LINE II

 */
