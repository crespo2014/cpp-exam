#include <iostream>
#include <set>
#include <list>

using namespace std;

int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 5 };
  list<int> v(mynumbers, mynumbers + 7);        //LINE I
  multiset<int> s1(v.begin(), v.end());
  if (s1.count(5) == 1)        //LINE II
    s1.erase(5);
  for (multiset<int>::iterator i = s1.begin(); i != s1.end(); i++)
    cout << *i << ", ";
  return 0;
}
/*
 Select correct answer(single choice)
 program outputs: 0, 1, 2, 3, 4, 5, 5, 9,
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 program outputs: 0, 1, 2, 3, 4, 9,
 compilation error in LINE II
 the exception will be thrown at line LINE I
 */
