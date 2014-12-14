#include <vector>
#include <set>
#include <iostream>
#include <functional>
#include <algorithm>
#include <cctype>
using namespace std;

static void printer(double i)
{
  cout << i << ", ";
}
static bool Compare(double a, double b)
{
  return int(a) < int(b);
}
int main()
{
  double mynumbers[] = { 3.33, 9.19, 0.22, 2.12, 1.14, 4.45, 5.55 };
  vector<double> v1(mynumbers, mynumbers + 7);
  stable_sort(v1.begin(), v1.end(), Compare);    //LINE I
  remove(v1.begin(), v1.end(), 2.12);    //LINE II
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}
/*

 Select correct answers (multiple choice)
 program outputs: 0.22, 1.14, 2.22, 3.33, 4.45, 5.55, 9.19,
 program outputs: 0.22, 1.14, 3.33, 4.45, 5.55, 9.19,
 size of v1 vector is 6
 program outputs: 0.22, 1.14, 3.33, 4.45, 5.55, 9.19, 9.19,
 compilation error in LINE II
 size of v1 vector is 7
 compilation error in LINE I

 */
