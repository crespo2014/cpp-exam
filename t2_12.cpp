#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;

static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 7 };
    multiset<int> s1(mynumbers, mynumbers + 7);        //LINE I
    s1.insert(s1.find(3), 6);                                 //LINE II
    for (multiset<int>::iterator i = s1.begin(); i != s1.end(); i++)
      cout << *i << ", ";
    return 0;
  }
  /*

   Select correct answer(single choice)
   compilation error in LINE II
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 0, 1, 2, 3, 4, 5, 6, 9,
   program outputs: 0, 1, 2, 3, 6, 4, 5, 9,
   the exception will be thrown at line LINE I
   program outputs: 0, 1, 2, 3, 4, 5, 6, 7, 9,
   */
