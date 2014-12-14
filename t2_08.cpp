#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;

 static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    multiset<int> s1(v.begin(), v.end());
    multiset<int, greater_equal<int> > s2(v.begin(), v.end());                 //LINE I
    s2.insert(9);                 //LINE II
    for (multiset<int>::iterator i = s1.begin(); i != s1.end(); i++)
      cout << *i << ", ";
    for (multiset<int, greater<int> >::iterator i = s2.begin(); i != s2.end(); i++)
      cout << *i << ", ";
    cout << endl;
    return 0;
  }
  /*
   The output will be
   Select correct answer(single choice)
   compilation error in LINE I
   0, 1, 2, 3, 4, 5, 9, 9, 5, 4, 3, 2, 1, 0, 9,
   0, 1, 2, 3, 4, 5, 9, 9, 5, 4, 3, 2, 1, 0,
   the exception will be thrown at line LINE II
   */
