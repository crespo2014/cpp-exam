#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;

int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v(mynumbers, mynumbers + 7);
  set<int> set1(v.begin(), v.end());
  set<int, greater<int> > set2(v.begin(), v.end());    //LINE I
  for (set<int, int>::iterator i = set2.begin(); i != set2.end(); i++)
    cout << *i << " ";
  for (set<int>::iterator i = set1.begin(); i != set1.end(); i++)
    cout << *i << ", ";
  cout << endl;
  return 0;
}
/*
 *
 Select correct answers (multiple choice)
 program outputs: 9 5 4 3 2 1 0, 1, 2, 3, 4, 5, 9,
 program outputs: 0 0 1 2 3 4 5 9, 1, 2, 3, 4, 5, 9,
 code compiles and executes successfully
 compilation fails due to error in line 1
 program outputs: 9 5 4 3 2 1 0 0, 1, 2, 3, 4, 5, 9,
 */
