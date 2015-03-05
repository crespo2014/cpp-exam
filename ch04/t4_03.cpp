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
  set<int> s1(mynumbers, mynumbers + 7);
  vector<int> v1(s1.rbegin(), s1.rend());
  swap(s1, v1);    //LINE I
  for_each(v1.begin(), v1.end(), printer);    //LINE II
  return 0;
}
/*
 Select
 correct answer(single choice) runtime error at
 LINE Icompilation error in
 LINE Iruntime error at
 LINE IIcompilation error in
 LINE IIprogram outputs: 3, 9, 0, 2, 1, 4, 5,
 program outputs: 3, 9, 0, 2, 1, 4,
 program outputs: 0, 1, 2, 3, 4, 5,
 program outputs: 0, 1, 2, 3, 4, 5, 9,

 */
