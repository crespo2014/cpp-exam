#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
#include <map>
using namespace std;

// Which changes, introduced independently, will allow the code to compile and display "zero, one, two, five, nine, "? Choose all that apply

class A
{
  int a;
public:
  A(int a) :
      a(a)
  {
  }
  int getA() const
  {
    return a;
  }
  bool operator <(const A & b) const
  {
    return a < b.a;
  }                //LINE I
};

int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };
  map<A, string> m;
  for (int i = 0; i < 7; i++)
  {
    m.insert(pair<A, string>(A(mynumbers[i]), words[i]));
  }
  m.erase(m.lower_bound(3), m.upper_bound(4));                //LINE II
  map<A, string>::iterator i = m.begin();
  for (; i != m.end(); i++)
    cout << i->second << ", ";
  return 0;
}
/*
 Select correct answers(multiple choice)
 change LINE II to m.erase(m.lower_bound(3), m.upper_bound(4));
 code compiles and executes successfully with expected result
 change LINE II to m.erase(m.lower_bound(3), m.upper_bound(5));
 code compiles and executes successfully but results are other than expected
 change code at LINE I to bool operator < (const A & b) const
 { return b.a<a;}
 */
