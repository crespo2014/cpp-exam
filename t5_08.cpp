#include <vector>
#include <set>
#include <iostream>
#include <functional>
#include <algorithm>
#include <cctype>
using namespace std;

static
void printer(int i)
{
  cout << i << ", ";
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  deque<int> d1(mynumbers, mynumbers + 7);
  set<int> s1(mynumbers, mynumbers + 7);
  cout << binary_search(s1.begin(), s1.end(), 1) << ", "    //LINE I
      << binary_search(d1.begin(), d1.end(), 6) << endl;    //LINE II
  return 0;
}

/*
 Select correct answer (single choice)
 compilation error in LINE II
 runtime error at LINE II
 runtime error at LINE I
 program outputs: 1, 1,
 program outputs: 1, 0,
 program outputs: 0, 0,
 compilation error in LINE I

 */
