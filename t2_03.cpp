#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;
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
};

int main()
{
  A mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<A> v(mynumbers, mynumbers + 7);
  set<A> s1(v.begin(), v.end());    //LINE I
  s1.insert(v.begin(), v.end());
  s1.erase(s1.lower_bound(3), s1.upper_bound(6));
  for (set<A>::iterator i = s1.begin(); i != s1.end(); i++)
  {
    cout << i->getA() << " ";
  }
  cout << endl;
  return 0;
}

/*
 Select correct answer (single choice)
 code compiles and executes successfully
 compilation fails because there is not bool operator < defined in class A
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 program outputs: 3, 9, 0, 2, 1, 4, 5,
 * the exception will be thrown at line LINE I because there is not bool operator < defined in class A
 */
