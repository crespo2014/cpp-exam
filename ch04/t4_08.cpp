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
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}
/*
 Select
 correct answer(single choice) runtime error at
 LINE IIcompilation error in
 LINE Iprogram outputs: 6, 18, 0, 4, 2, 8, 10,
 compilation error in LINE II
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 program outputs: 0, 2, 4, 6, 8, 10, 18,
 runtime error at LINE I

 */
