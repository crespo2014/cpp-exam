#include <vector>
#include <set>
#include <iostream>
#include <functional>
#include <algorithm>
#include <cctype>
using namespace std;

static void printer(int i)
{
  cout << i << ", ";
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v1(mynumbers, mynumbers + 7);
  sort(v1.begin(), v1.end(), greater<int>());    //LINE I
  for_each(v1.begin(), v1.end(), printer);    //LINE II
  return 0;
}
/*
 Select correct answer (single choice)
 program outputs: 3, 9, 0, 2, 1, 4, 5,
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 compilation error in LINE II
 program outputs: 9, 5, 4, 3, 2, 1, 0,
 you can't call sort function on v1 vector
 runtime error at LINE I
 compilation error in LINE I
 */

