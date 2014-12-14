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
  vector<int> v1(7, 1);
  fill(v1.begin() + 3, v1.end() - 1, 8);    //LINE I
  fill_n(v1.begin() + 4, 5, 7);    //LINE II
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}
/*
 Select
 correct answer(single choice) runtime error at
 LINE IIruntime error at
 LINE Iprogram outputs: 1, 1, 1, 8, 7, 7, 1,
 program outputs: 1, 1, 1, 8, 7, 7, 7,
 program outputs: 1, 1, 1, 8, 2, 7, 2,
 compilation error in LINE II
 compilation error in LINE I

 */
