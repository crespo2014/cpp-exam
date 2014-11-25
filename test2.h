/*
 * test2.h
 *
 *  Created on: 20 Nov 2014
 *      Author: lester
 */

#ifndef TEST2_H_
#define TEST2_H_

#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;

class s2t01
{
public:
  static int main()
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
};

class s2t02
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    set<int> s1(v.begin(), v.end());
    s1.insert(v.begin(), v.end());
    s1.insert(10);
    s1.erase(s1.lower_bound(4), s1.upper_bound(6));
    s1.insert(v.begin(), v.end());
    for (set<int>::iterator i = s1.begin(); i != s1.end(); i++)
      cout << *i << ", ";
    return 0;
  }

  /*
   Select correct answers (multiple choice)
   size of s1 set is 8
   size of s1 set is 7
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 0, 1, 2, 3, 4, 5, 9, 10,
   program outputs: 0, 1, 2, 3, 4, 5, 10,
   */
};

class s2t03
{
public:
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

  static int main()
  {
    A mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<A> v(mynumbers, mynumbers + 7);
//    set<A> s1(v.begin(), v.end());    //LINE I
//    s1.insert(v.begin(), v.end());
//    s1.erase(s1.lower_bound(3), s1.upper_bound(6));
//    for (set<A>::iterator i = s1.begin(); i != s1.end(); i++)
//    {
//      cout << i->getA() << " ";
//    }
//    cout << endl;
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
};

class s2t04
{
public:
  s2t04()
  {
    main();
  }

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 4 };
    list<int> v(mynumbers, mynumbers + 7);    //LINE I
    set<int> s1(v.begin(), v.end());
    if (s1.count(4) == 2)
    {
      s1.erase(4);
    }
    for (set<int>::iterator i = s1.begin(); i != s1.end(); i++)
    {
      cout << *i << ", ";
    }
    return 0;
  }
  /*
   Select correct answer (single choice)
   program outputs: 0, 1, 2, 3, 5, 9,
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 0, 1, 2, 3, 5, 9, 4
   program outputs: 0, 1, 2, 3, 4, 5, 9, 4
   compilation error in LINE I
   */
};

class s2t05
{
public:

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    set<int> s1(v.begin(), v.end());
    s1.insert(v.begin(), v.end());
    s1.insert(v.begin(), v.end());    //LINE I
    set<int>::iterator found = s1.find(9);
    for (; found != s1.end(); ++found)
      cout << *found << ", ";
    return 0;
  }

  /*
   Select correct answer (single choice)
   program outputs: 3, 9, 0, 2, 1, 4, 5
   the exception will be thrown at line LINE I
   program outputs: 9,
   code will not compile
   program outputs: 9, 0, 2, 1, 4, 5
   */
};

class s2t06
{
public:
  template<class T>
  static void print(T start, T end)
  {
    while (start != end)
    {
      std::cout << *start << ", ";
      start++;
    }
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    set<int> s(v.begin(), v.end());
//    for (int i = 10; i > 0; i++)
//    {
////      int x = s.top();    //LINE I
////      s.pop();                 //LINE II
//      //     v.push_back(i + x);                 //LINE III
//    }
    print(v.begin(), v.end());
    print(s.begin(), s.end());
    cout << endl;
    return 0;
  }

  /*

   The output will be
   Select correct answers (multiple choice)
   *  compilation error in LINE II
   *  compilation error in LINE I
   *  compilation error in LINE III
   0, 1, 2, 3, 4, 5, 9, 9, 5, 4, 3, 2, 1, 0, 0, 1, 2, 3, 4, 5, 9,
   0, 1, 2, 3, 4, 5, 9, 9, 5, 4, 3, 2, 1, 0, 1, 2, 3, 4, 5, 9,
   0, 1, 2, 3, 4, 5, 9, 0, 1, 2, 3, 4, 5, 9,
   */};

class s2t07
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    set<int> s(v.begin(), v.end());
    s.insert(v.begin(), v.end());
    v.push_back(5);
    s.insert(8);
    pair<set<int>::iterator, set<int>::iterator> range;
    range = s.equal_range(5);                 //LINE I
    cout << *range.first << ", " << *range.second << endl;
    return 0;
  }
  /*
   The output will be
   Select correct answer(single choice)
   8, 5
   4 5
   2 5
   5, 8
   compilation error in LINE I
   */};

class s2t08
{
public:
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
   */};

class s2t09
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    set<int> s1(mynumbers, mynumbers + 7);
    multiset<int> s2(s1.begin(), s1.end());
    s2.insert(s1.begin(), s1.end());
    s2.erase(s2.lower_bound(1), s2.upper_bound(4));                 //LINE I
    for (multiset<int>::iterator i = s2.begin(); i != s2.end(); i++)
    {
      cout << *i << ", ";
    }
    return 0;
  }
  /*
   The output will be
   Select correct answer(single choice)
   0, 1, 4, 5, 9,
   0, 1, 2, 3, 4, 5, 9,
   0, 1, 4, 5, 9, 0, 1, 4, 5, 9,
   0, 0, 5, 5, 9, 9,
   the exception will be thrown at line LINE I
   0, 5, 9,
   */};
class s2t10
{
public:
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
    operator int() const
    {
      return a;
    }
    bool operator <(const A & b) const
    {
      return b.a < a;
    }    //LINE I
  };

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    set<A> s(mynumbers, mynumbers + 7);                        //LINE II
    multiset<A> s1(s.begin(), s.end());        //LINE III
    s1.insert(s.begin(), s.end());
   // s1.erase(s1.lower_bound(2), s1.upper_bound(5));        //LINE IV
    multiset<A>::iterator i = s1.begin();
    for (; i != s1.end(); i++)
    {
      cout << i->getA() << ", ";
    }
    cout << endl;
    return 0;
  }
  /*
   The output will be
   Select correct answer(single choice)
   compilation error in LINE I
   compilation error in LINE II
   the exception will be thrown at line LINE I
   the exception will be thrown at line LINE III
   0, 1, 9
 *  the exception will be thrown at line LINE IV
   0, 0, 1, 1, 9, 9
   */};

class s2t11
{
public:
  static int main()
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
   */};

class s2t12
{
public:
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
   */};

class s2t13
{
public:
  template<class T>
  static void print(T start, T end)
  {
    while (start != end)
    {
      std::cout << *start << ", ";
      start++;
    }
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 7 };
    vector<int> v(mynumbers, mynumbers + 7);
    multiset<int> s1(mynumbers, mynumbers + 7);
//    for (int i = 9; i > 0; i)
//    {
//      //double x = s1.pop();                                 //LINE I
//      //v.push_back(i + x);    //LINE II
//    }
    print(v.begin(), v.end());
    cout << endl;
    return 0;
  }
  /*
   Select correct answer(single choice)
   * compilation error in LINE I
   program outputs: 3, 9, 0, 2, 1, 4, 5, 12, 14, 4, 5, 3, 5, 5,
   the exception will be thrown at line LINE II
   program outputs: 3, 9, 0, 2, 1, 4, 5, 7, 12, 16, 5, 6, 4, 6, 6, 7,
   * compilation error in LINE II
   the exception will be thrown at line LINE I, because of too many calls to pop method
   */
};

class s2t14
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 7 };
    vector<int> v(mynumbers, mynumbers + 7);
    multiset<int> s1(v.begin(), v.end());
    s1.insert(v.begin(), v.end());
    s1.insert(v.begin(), v.end());    //LINE I
    pair<multiset<int>::iterator, multiset<int>::iterator> range;
    range = s1.equal_range(5);
    while (range.first != range.second)
    {
      cout << *range.first << ", ";
      range.first++;
    }
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 5, 7, 9,
   program outputs: 5,
   program outputs: 5, 5, 5,
   compilation error in LINE I
   program outputs: 5, 5,
   program outputs: 5, 5, 9, 9,
   */};

class s2t15
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 8 };
    vector<int> v(mynumbers, mynumbers + 7);
    map<int, string> m;
    for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
      {
      //cout << *i << ", ";    //LINE I
      }
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 0, 1, 2, 3, 4, 5, 8, 9,
   program outputs: 0 , 1 , 2 , 3 , 4 , 5 , 9 ,
   program outputs: 3, 9, 0, 2, 1, 4, 5, 8,
   *compilation error in LINE I
   empty output
   the exception will be thrown at line LINE I
   */};

class s2t16
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };
    map<int, string> m;
//    for (int i = 0; i < 9; i++)
//      m.insert(pair<int, string>(mynumbers[i], words[i]));    //LINE I
    m[0] = "ten";                                                                                           //LINE II
    m.insert(pair<int, string>(1, "eleven"));                //LINE III
    for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
      cout << i->second << ", ";
    return 0;
  }
  /*
   Select correct answer(single choice)
   compilation error in LINE II
   program outputs: zero, one, two, three, four, five, nine, ten, eleven
   program outputs: ten, one, two, three, four, five, nine, eleven
   program outputs: three, nine, zero, two, one, four, five,
   program outputs: three, nine, zero, two, one, four,
   the exception will be thrown at line LINE I
   the exception will be thrown at line LINE III
   program outputs: zero, one, two, three, four, five, nine,
   */};

class s2t17
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };
    map<int, string> m;
    for (int i = 0; i < 7; i++)
      m.insert(pair<int, string>(mynumbers[i], words[i]));                //LINE I
    if (m[10] == "ten")                //LINE II
      cout << "tenth element";
    for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
      cout << i->second << ", ";
    cout << m.size();                //LINE III
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: one, two, three, four, five, nine, , 7
   compilation error in LINE I
   compilation error in LINE III
   the exception will be thrown at line LINE II
   program outputs: zero, one, two, three, four, five, nine, , 8
   program outputs: zero, one, two, three, four, five, nine, , 7
   */};

class s2t18
{
public:
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

  static int main()
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
   */};

class s2t19
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 5 };
    string words[] = { "three", "nine", "zero", "two", "one", "four", "five", "five" };
    map<int, string> m;
    for (int i = 0; i < 8; i++)
    {
      m.insert(pair<int, string>(mynumbers[i], words[i]));
    }
    if (m.count(5) == 2) m.erase(2);
    for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
    {
      cout << i->first << ", ";
    }
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 0, 1, 3, 4, 5, 9,
   program outputs: 0, 1, 3, 4, 5, 5, 9,
   program outputs: zero, one, two, three, four, five, nine
   program outputs: zero, one, three, four, five, nine
   program outputs: 0, 1, 2, 3, 4, 5, 5, 9,
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   */};

class s2t20
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };

    map<int, string> m;
    for (int i = 0; i < 10; i++)
    {
      //m.push_back(pair<int, string>(mynumbers[i], words[i]));                //LINE I
    }

    for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)                //LINE II
      cout << i->first << ", ";
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 3, 9, 0, 2, 1, 4, 5,
   the exception will be thrown at line LINE I
   compilation error in LINE II because of redeclaration of i variable
   compilation error in LINE I
   */};

class s2t21
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 3, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    map<int, string> m;
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
      stringstream s;
      s << *i;
      m.insert(pair<int, string>(*i, s.str()));
    }
    pair<map<int, string>::iterator, map<int, string>::iterator> range;
    range = m.equal_range(3);
    map<int, string>::iterator i = range.first;                //LINE 1
    for (; i != range.second; i++)
    {
      cout << i->first << ", ";
    }
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 3, 3, 4, 5, 9,
   compilation error in LINE I
   program outputs: 4, 5, 9,
   program outputs: 3, 4, 5, 9,
   program outputs: 3, 3,
   program outputs: 3,
   */};

class s2t22
{
public:
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
   */};

class s2t23
{
public:
  static int main()
  {

    int mynumbers[] = { 3, 9, 0, 2, 1 };
    string words[] = { "three", "nine", "zero", "two", "one" };
    multimap<int, string> m;
    for (int i = 0; i < 4; i++)
    {
      m.insert(pair<int, string>(mynumbers[i], words[i]));
      m.insert(pair<int, string>(mynumbers[i], words[i]));
    }
   // m[0] = "ten";                //LINE I
    for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++)
      cout << i->second << ", ";
    return 0;
  }
  /*
   Select correct answer(single choice)
   zero, zero, two, two, three, three, nine, nine,
   ten, zero, two, two, three, three, nine, nine,
   ten, ten, two, two, three, three, nine, nine
 *  compilation error in LINE I
   zero, zero, two, two, three, three, nine, nine, ten, ten
   **/};

class s2t24
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };
    multimap<int, string> m;
    for (int i = 0; i < 7; i++)
      m.insert(pair<int, string>(mynumbers[i], words[i]));
    if (m.find(0)->second == "zero")                //LINE I
      cout << "found expected ";
    for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++)
      cout << i->second << ", ";
    cout << m.size();
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: found expected zero, one, two, three, four, five, nine, 7
   program outputs: zero, one, two, three, four, five, nine, 8
   compilation error in LINE I
   the exception will be thrown at line LINE I
   program outputs: found expected zero, one, two, three, four, five, nine, 8
   */};

class s2t25
{
public:
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
   */};

class s2t26
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 5 };
    string words[] = { "three", "nine", "zero", "two", "one", "four", "five", "fiveandhalf" };
    multimap<int, string> m;
    for (int i = 0; i < 8; i++)
      m.insert(pair<int, string>(mynumbers[i], words[i]));
    if (m.count(5) == 1) m.erase(2);
    for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++)
      cout << i->first << ", ";
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 0, 1, 3, 4, 5, 5, 9,
   program outputs: 0, 1, 2, 3, 4, 5,
   program outputs: 0, 1, 2, 3, 4, 5, 5, 9,
   program outputs: 0, 1, 3, 4, 5, 9,
   */};

class s2t27
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };
    multimap<int, string> m;
    for (int i = 0; i < 3; i++)
    {
      //m.push_back(pair<int, string>(mynumbers[i], words[i]));    //LINE I
    }

    for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++)
      cout << i->first << " ";    //LINE II
    return 0;
  }
  /*
   Select correct answer(single choice)
   the exception will be thrown at line LINE II
   compilation error in LINE I
   program outputs: 0, 1, 2, 3,
   the exception will be thrown at line LINE I
   compilation error in LINE II
   program outputs: 0, 1, 2,
   */};

class s2t28
{
public:
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    multimap<int, string> m;
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
      stringstream s;
      s << *i << *i << *i;
      m.insert(pair<int, string>(*i, s.str()));    //LINE I
    }
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> range;    //LINE II
    range = m.equal_range(4);
    for (multimap<int, string>::iterator i = range.first; i != range.second; i++)
    {
      cout << i->first << ", ";
    }
    return 0;
  }
  /*
   The output will be:
   Select correct answer (single choice)
   5, 9
   4, 5, 9
   4,
   the exception will be thrown at line LINE II
   the exception will be thrown at line LINE I
   */};

#endif /* TEST2_H_ */
