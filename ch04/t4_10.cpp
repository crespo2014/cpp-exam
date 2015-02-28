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
  vector<int> v1(mynumbers, mynumbers + 7);
  set<int> s1(mynumbers, mynumbers + 7);
  replace(v1.begin(), v1.end(), 9, 3);    //LINE I
  for_each(v1.begin(), v1.end(), printer);    //LINE II
  return 0;
}
/*
 Select
 correct answers(multiple choice) program outputs: 3, 3, 0, 2, 1, 4, 5,
 compilation error in LINE I
 runtime error at LINE I
 runtime error at LINE II
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 program outputs: 9, 3, 0, 2, 1, 4, 5,
 compilation error in LINE II
 you can't call replace function on s1 set

 */
