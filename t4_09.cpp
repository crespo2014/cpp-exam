#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

static void printer(int i)
{
  cout << i << ", ";
}
static int add(int a, int b)
{
  return a + b;
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v1(mynumbers, mynumbers + 7);
  set<int> s1(mynumbers, mynumbers + 7);
  deque<int> d1;
  transform(s1.begin(), s1.end(), v1.begin(), d1.begin(), add);    //LINE I
  for_each(d1.begin(), d1.end(), printer);    //LINE II
  return 0;
}
/*
 Select
 correct answer(single choice) runtime error at
 LINE IIprogram outputs: 0, 1, 2, 3, 4, 5, 9,
 compilation error in LINE I
 compilation error in LINE II
 program outputs: 3, 10, 2, 5, 5, 9, 14,
 program outputs: 3, 9, 0, 2, 1, 4, 5,
 runtime error at LINE I

 */
