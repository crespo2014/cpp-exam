#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

static void printer(int i)
{
  cout << i << ", ";
}
static void multiply(int a)
{
  a * 2;    //LINE I
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v1(mynumbers, mynumbers + 7);
  for_each(v1.begin(), v1.end(), multiply);
  iter_swap(v1.begin(), mynumbers + 6);    //LINE II
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}
/*
 Select
 correct answer(single choice) program outputs: 3, 9, 0, 2, 1, 4, 5,
 runtime error at LINE II
 program outputs: 5, 9, 0, 2, 1, 4, 5,
 compilation error in LINE I
 program outputs: 5, 9, 0, 2, 1, 4, 3,
 compilation error in LINE II
 runtime error at LINE I

 */
