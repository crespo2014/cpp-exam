#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;

//Which changes introduced independently will allow the code to compile and display “zero, one, nine,”? Choose all that apply.

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
    //LINE I
    bool operator <(const A & b) const
       {
       return a < b.a;
       }
  };
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };
    multimap<A, string> m;
    for (int i = 0; i < 7; i++)
      m.insert(pair<A, string>(A(mynumbers[i]), words[i]));
    m.erase(m.lower_bound(2), m.upper_bound(5));
    m.erase(m.lower_bound(2), m.upper_bound(5));
    multimap<A, string>::iterator i = m.begin();                //LINE II
    for (; i != m.end(); i++)
      cout << i->second << ", ";
    cout << endl;
    return 0;
  }
  /*
   Select correct answer(single choice)
   code compiles and executes successfully
   bool operator < (const A & b) const
   { return b.a<a;}inserted at LINE I
   multimap<A, string>::iterator i = m.end();
   inserted at LINE II
   bool operator <(const A & b) const
   {
   return a < b.a;
   }
   inserted at LINE I
   */
