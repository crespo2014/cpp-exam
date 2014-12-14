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
    multimap<int, string> m;
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
      stringstream s;
      s << *i << *i;
      m.insert(pair<int, string>(*i, s.str()));
    }
    for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++)
    {
      cout << i->first << ", ";                //LINE I
    }
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 00, 11, 22, 33, 44, 55,
   compilation error in LINE I
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 00, 11, 22, 33, 44, 55, 99,
   program outputs: 11, 22, 33, 44, 55, 99,
   */
