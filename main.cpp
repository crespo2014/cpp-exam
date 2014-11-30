/*
 * main.cpp
 *
 *  Created on: 17 Nov 2014
 *      Author: lester
 */

#include <vector>
#include <deque>
#include <list>
#include <stdio.h>
#include <ostream>
#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;

#include "test2.h"
#include "test3.h"
#include "test4.h"
class t11
{
public:
  t11()
  {
    std::vector<int> v1;                // LINE I
    v1.push_back(10);                        // LINE II
    std::cout << v1.front() << ":" << v1.back() << std::endl;                // LINE III
  }
};

class t12
{
public:
  t12()
  {
    main();
  }
  int main()
  {
    vector<int> v1(4, 3);
    v1.push_back(4);
//    for (vector<int>::iterator i = v1.rbegin(); i != v1.rend(); ++i)
//    {
//      cout << *i << " ";
//    }
    cout << endl;
    return 0;
  }
};

class t13
{
public:
  t13()
  {
    main();
  }
  int main()
  {
    vector<int> v1(10, -1);
    vector<int> v2;
    v2.reserve(10);
    for (unsigned i = 0; i < 10; i++)
    {
      v2.push_back(i);
    }
    return 0;
  }
};

class t14
{
public:
  t14()
  {
    main();
  }
  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v1(tab, tab + 10);
    vector<int> v2(v1.size(), 0);
    try
    {
      for (unsigned i = 0; i <= v1.size(); ++i)
      {
        int tmp = v1[i];                                // LINE I
        v1[i] = v1.at(v1.size() - i);                // LINE        II
        v1.at(i) = tmp;                                        // LINE III
        cout << v1[i] << " ";
      }
    } catch (...)
    {
      cout << "Exception!" << endl;
    }

    return 0;
  }

};

class t15
{
public:
  t15()
  {
    main();
  }
  template<typename T> ostream & print(T start, const T & end)
  {
    for (; start != end; ++start)
    {
      cout << *start << " ";
    }
    return cout;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    deque<int> d1(tab, tab + 10);
    deque<int> d2;
    deque<int>::iterator it;
    for (it = d1.begin(); it != d1.end(); ++it)
    {
      d2.push_back(d1[d1.end() - it - 1]);        //LINE I
    }
    print(d2.rbegin(), d2.rend()) << endl;        //LINE II
    return 0;
  }
};

class t16
{
public:
  t16()
  {
    main();
  }
  template<typename T> ostream & print(T & start, T & end)
  {
    for (; start != end; ++start)
    {
      cout << *start << " ";
    }
    return cout;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    deque<int> d1(tab, tab + 10);

    deque<int>::const_iterator it = d1.begin() + 3;
//    d1.erase(it, it + 1);
//    print(d1.begin(), d1.end());
    d1.clear();
    cout << d1.size() << endl;
    return 0;
  }
};

class t17
{
public:
  t17()
  {
    main();
  }
  template<typename T> ostream & print(const T & start, const T & end)
  {
    T tmp = start;
    for (; tmp != end; ++tmp)
    {
      cout << *tmp << " ";
    }
    return cout;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    deque<int> d1(tab, tab + 10);
    deque<int> d2;

    while (!d1.empty())
    {
      d2.push_front(d1.back());                //        LINE I
      d1.pop_front();                                        //        LINE II
    }
    print(d2.begin(), d2.end()) << ": " << d2.size() << endl;
    return 0;
  }
};

class t18
{
public:
  t18()
  {
    main();
  }
  template<typename T> ostream & print(const T & start, const T & end)
  {
    T tmp = start;
    for (; tmp != end; ++tmp)
    {
      cout << *tmp << " ";
    }
    return cout;
  }
  class A
  {
  public:
    int a;
  public:
    A(int a) :
        a(a)
    {
    }
    A(const A & a)
    {
    }
  };

  friend ostream & operator<<(ostream & c, const A & o)
  {
    c << o.a;
    return c;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list<A> l1(tab, tab + 10);
    deque<A> d1;
    list<A>::iterator it;
    for (it = l1.begin(); it != l1.end(); ++it)
    {
      //d1.insert(d1.begin(), it[0]);
    }
    print(d1.begin(), d1.end()) << endl;
    return 0;
  }
};

class t19
{
public:
  t19()
  {
    main();
  }
  template<typename T> ostream & print(const T & start, const T & end)
  {
    T tmp = start;
    for (; tmp != end; ++tmp)
    {
      cout << *tmp << " ";
    }
    return cout;
  }
  class A
  {
  public:
    int a;
  public:
    A(int a) :
        a(a)
    {
    }
    A(const A & a)
    {
    }
  };

  friend ostream & operator<<(ostream & c, const A & o)
  {
    c << o.a;
    return c;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list<A> l1(tab, tab + 10);
    deque<A> d1;
    list<A>::iterator it;

    for (it = l1.begin(); it != l1.end(); ++it)
    {
      //d1.insert(d1.begin(), it[0]);
    }
    print(d1.begin(), d1.end()) << endl;
    return 0;
  }

};

class t110
{
public:
  t110()
  {
    main();
  }
  template<typename T> ostream & print(T & start, T & end)
  {
    for (; start != end; ++start)
    {
      cout << *start << " ";
    }
    return cout;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list<int> l1(tab, tab + 10);
    list<int> l2;
    list<int>::iterator it;
    for (it = l1.begin(); it != l1.end(); ++it)
    {
      //l2.push_back(l1[l1.end() - it - 1]);        //LINE I
    }
    //print(l2.begin(), l2.end()) << endl;        //LINE II
    return 0;
  }
};
class t111
{
public:
  t111()
  {
    main();
  }
  template<typename T> ostream & print(T & start, T & end)
  {
    for (; start != end; ++start)
    {
      cout << *start << " ";
    }
    return cout;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list<int> l1(tab, tab + 10);

    // list<int>::const_iterator it = l1.begin() + 3;        //LINE I
    //l1.erase(it, advance(it, 1));                                        //LINE II
    //print(l1.begin(), l1.end());
    l1.clear();                                                                                //LINE III
    cout << l1.size() << endl;
    return 0;
  }
};
class t112
{
public:
  t112()
  {
    main();
  }
  template<typename T> ostream & print(const T & start, const T & end)
  {
    T tmp = start;
    for (; tmp != end; ++tmp)
    {
      cout << *tmp << " ";
    }
    return cout;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list<int> l1(tab, tab + 10);
    list<int> l2;
    l2.resize(10);

    while (!l1.empty())
    {

      l2.insert(l2.end(), l1.front());
      l1.pop_front();
    }
    print(l2.begin(), l2.end()) << ": " << l2.size() << endl;
    return 0;
  }
};
class t113
{
public:
  t113()
  {
    main();
  }
  template<typename T> ostream & print(const T & start, const T & end)
  {
    T tmp = start;
    for (; tmp != end; ++tmp)
    {
      cout << *tmp << " ";
    }
    return cout;
  }
  class A
  {
  public:
    int a;
  public:
    A(int a) :
        a(a)
    {
    }
  };

  friend ostream & operator<<(ostream & c, const A & o)
  {
    c << o.a;
    return c;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list<A> l1(tab, tab + 10);
    list<A> l2;
    list<A>::iterator it;
    for (it = l1.begin(); it != l1.end(); ++it)
    {
      //l2.push_front(it);
    }
    print(l2.begin(), l2.end()) << endl;
    return 0;
  }
};
class t114
{
public:
  t114()
  {
    main();
  }
  template<typename T> ostream & print(const T & start, const T & end)
  {
    T tmp = start;
    for (; tmp != end; ++tmp)
    {
      cout << *tmp << " ";
    }
    return cout;
  }
  class A
  {
  public:
    int a;
  public:
    A(int a) :
        a(a)
    {
    }
  };

  void fill(const int table[], unsigned size, vector<A*> & v)
  {
    for (unsigned i = 0; i < size; ++i)
    {
      v.push_back(new A(table[i]));                        //LINE I
    }
  }

  friend ostream & operator<<(ostream & c, const A & o)
  {
    c << o.a;
    return c;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<A*> v1;
    fill(tab, 10, v1);

    vector<A*>::iterator it;
    list<A> l1;
    for (it = v1.begin(); it != v1.end(); ++it)
    {
      l1.push_front(**it);
    }
    print(l1.begin(), l1.end()) << endl;
    return 0;                //LINE I
  }

};
class t115
{
public:
  t115()
  {
    main();
  }
  int main()
  {
    int t[] = { 3, 5, 1, 4, 2 };
    vector<int> v(t, t + 5);
    priority_queue<int> q(v.begin(), v.end());
    cout << q.top() << " ";
    q.push(0);
    cout << q.top() << endl;
    return 0;
  }

};
class t116
{
public:
  t116()
  {
    main();
  }
  int main()
  {
    int t[] = { 1, 5, 3, 4, 2 };
    deque<int> d(t, t + 5);
    queue<int> q(d);
    cout << q.front() << " " << q.back() << " ";
    q.pop();
    cout << q.front() << " " << q.back() << endl;
    return 0;
  }
};
class t117
{
public:
  t117()
  {
    main();
  }
  int main()
  {
    int t[] = { 1, 5, 3, 4, 2 };
    deque<int> d(t, t + 5);
    stack<int> s(d);
    cout << s.top() << " ";
    d.push_front(6);
    cout << s.top() << endl;
    return 0;
  }

};
class t118
{
public:
  t118()
  {
    main();
  }
  template<typename T> ostream & print(T & start, T & end)
  {
    for (; start != end; ++start)
    {
      cout << *start << " ";
    }
    return cout;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v1(tab, tab + 10);
    vector<int> v2;
    vector<int>::iterator it;
    for (it = v1.begin(); it != v1.end(); ++it)
    {
      v2.push_back(v1[v1.end() - it - 1]);        //LINE I
    }
    // print(v2.rbegin(), v2.rend()) << endl;        //LINE II
    return 0;
  }

};
class t119
{
public:
  t119()
  {
    main();
  }
  template<typename T> ostream & print(T & start, T & end)
  {
    for (; start != end; ++start)
    {
      cout << *start << " ";
    }
    return cout;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v1(tab, tab + 10);

    vector<int>::const_iterator it = v1.begin() + 3;
    // v1.erase(it, it + 1);
    //print(v1.begin(), v1.end());
    v1.empty();
    cout << v1.size() << endl;
    return 0;
  }

};
class t120
{
public:
  t120()
  {
    main();
  }
  template<typename T> ostream & print(const T & start, const T & end)
  {
    T tmp = start;
    for (; tmp != end; ++tmp)
    {
      cout << *tmp << " ";
    }
    return cout;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v1(tab, tab + 10);
    vector<int> v2;
    v2.reserve(10);

    //while (!v1.empty())
    {
      //v2.insert(v2.begin(), v1.pop_back());
    }
    print(v2.rbegin(), v2.rend()) << ": " << v2.size() << endl;
    return 0;
  }
};
class t121
{
public:
  t121()
  {
    main();
  }
  template<typename T> ostream & print(const T & start, const T & end)
  {
    T tmp = start;
    for (; tmp != end; ++tmp)
    {
      //cout << *tmp << " ";                        //LINE II
    }
    return cout;
  }
  class A
  {
  public:
    int a;
  public:
    A(int a) :
        a(a)
    {
    }
  };

  friend ostream & operator<<(const A & o, ostream & c)
  {
    c << o.a;
    return c;
  }

  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<A> v1(tab, tab + 10);                //LINE I
    v1.insert(v1.end(), A(0));
    print(v1.begin(), v1.end()) << endl;
    return 0;
  }

};
class t122
{
public:
  t122()
  {
    main();
  }
  template<typename T> ostream & print(const T & start, const T & end)
  {
    T tmp = start;
    for (; tmp != end; ++tmp)
    {
      cout << *tmp << " ";
    }
    return cout;
  }
  class A
  {
  public:
    int a;
  public:
    A(int a) :
        a(a)
    {
    }
  };

  friend ostream & operator<<(ostream & c, const A & o)
  {
    c << o.a;
    return c;
  }

  void fill(const int table[], unsigned size, vector<A*> & v)
  {
    for (unsigned i = 0; i < size; ++i)
    {
      v.push_back(new A(table[i]));                        //LINE I
    }
  }

  static void del(A * p)
  {
    delete p;
  }
  int main()
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<A*> v1;
    fill(tab, 10, v1);

    print(v1.rbegin(), v1.rend()) << endl;                //LINE II
    for_each(v1.begin(), v1.end(), del);
    return 0;
  }

};
class t123
{
public:
  t123()
  {
    main();
  }
  void main()
  {
    deque<int> d;
    d.size();
    d.empty();

  }
};
class t124
{
public:
  t124()
  {
    main();
  }
  void main()
  {
    std::list<int> l;
    l.clear();
    l.erase(l.begin(), l.end());
  }
};
class t125
{
public:
  t125()
  {
    main();
  }
  void main()
  {
    //priority_queue<int, std::map<int> > q1;
    priority_queue<int, std::vector<int> > q2;
    //priority_queue<int, std::list<int> > q3;
    priority_queue<int, std::deque<int> > q4;
    //priority_queue<int, std::set<int> > q5;

  }
};
class t126
{
public:
  t126()
  {
    main();
  }
  void main()
  {
    vector<int> v;
    //priority_queue<int> q1(v);
    list<int> l;
    //priority_queue<int> q2(l);
    queue<int> q3;
    deque<int> d;
    priority_queue<int> q4(d.begin(), d.end());
    //priority_queue<int> q5(d);
  }
};
class t127
{
public:
  t127()
  {
    main();
  }
  void main()
  {
    std::list<int> l;
    std::deque<int> d;
//    queue<int, std::map<int> > q1;
    //queue<int, std::vector<int> > q2;
    queue<int, std::list<int> > q3(l);
    queue<int, std::deque<int> > q4(d);
//    queue<int, std::set<int> > q5;
//    q2.push(2);
//    q2.pop();
//    q5.push(2);
//    q5.pop();
  }
};
class t128
{
public:
  t128()
  {
    main();
  }
  void main()
  {
//    list<int> l; queue<int> q1(l);
    vector<int> v;
//    queue<int> q2(v);
    queue<int> q3;
    deque<int> d;
    queue<int> q4(d);
    queue<int, std::vector<int> > q6(v);
//     queue<int> q5(d.begin(), d.end());
  }
};

class t129
{
public:
  t129()
  {
    main();
  }
  void main()
  {
    //stack<int, std::map<int> > q1;
    stack<int, std::vector<int> > q2;
    stack<int, std::list<int> > q3;
    stack<int, std::deque<int> > q4;
//    stack<int, std::set<int> > q5;
    q2.push(3);
    q3.push(3);
    q4.push(3);
//    q5.push(3);
    q2.pop();
    q3.pop();
    q4.pop();
//    q5.pop();
  }
};
class t130
{
public:
  t130()
  {
    main();
  }
  void main()
  {
    deque<int> d;
    stack<int> s1(d);
//    stack<int> s2(d.begin(), d.end());
    list<int> l;
//    stack<int> s3(l);
    stack<int> s4;
    vector<int> v;
//    stack<int> s5(v);
  }
};

int main()
{
//  t11 e11;
//  t12 e12;
//  t13 e13;
//  t14 e14;
//  t15 e15;
//  t16 e16;
//  t17 e17;
//  t18 e18;
//  t19 e19;
//  t110 e110;
//  t111 e111;
//  t112 e112;
//  t113 e113;
//  t114 e114;
//  t115 e115;
//  t116 e116;
//  t117 e117;
//  t118 e118;
//  t119 e119;
//  t120 e120;
//  t121 e121;
//  t122 e122;
//  t123 e123;
//  t124 e124;
//  t125 e125;
//  t126 e126;
//  t127 e127;
//  t128 e128;
//  t129 e129;
//  t130 e130;
  /*
   s2t01::main();
   cout << endl;
   s2t02::main();
   cout << endl;
   s2t03::main();
   cout << endl;
   s2t04::main();
   cout << endl;
   s2t05::main();
   cout << endl;
   s2t06::main();
   cout << endl;
   s2t07::main();
   cout << endl;
   s2t08::main();
   cout << endl;
   s2t09::main();
   cout << endl;
   s2t10::main();
   cout << endl;
   s2t11::main();
   cout << endl;
   s2t12::main();
   cout << endl;
   s2t13::main();
   cout << endl;
   s2t14::main();
   cout << endl;
   s2t15::main();
   cout << endl;
   s2t16::main();
   cout << endl;
   s2t17::main();
   cout << endl;
   s2t18::main();
   cout << endl;
   s2t19::main();
   cout << endl;
   s2t20::main();
   cout << endl;
   s2t21::main();
   cout << endl;
   s2t22::main();
   cout << endl;
   s2t23::main();
   cout << endl;
   s2t24::main();
   cout << endl;
   s2t25::main();
   cout << endl;
   s2t26::main();
   cout << endl;
   s2t27::main();
   cout << endl;
   s2t28::main();
   cout << endl;
   */

  t0301::main();
  cout << endl;
  t0302::main();
  cout << endl;
  t0303::main();
  cout << endl;
  t0304::main();
  cout << endl;
  t0305::main();
  cout << endl;
  t0306::main();
  cout << endl;
  t0307::main();
  cout << endl;
  t0308::main();
  cout << endl;
  t0309::main();
  cout << endl;
  t0310::main();
  cout << endl;
  t0311::main();
  cout << endl;
  t0312::main();
  cout << endl;
  t0313::main();
  cout << endl;
  t0314::main();
  cout << endl;
  t0315::main();
  cout << endl;
  t0316::main();
  cout << endl;
  t0317::main();
  cout << endl;
  t0318::main();
  cout << endl;
  t0319::main();
  cout << endl;
  t0320::main();
  cout << endl;
  t0321::main();
  cout << endl;
  t0322::main();
  cout << endl;
  t0323::main();
  cout << endl;
  t0324::main();
  cout << endl;
  t0325::main();
  cout << endl;
  t0326::main();
  cout << endl;
  t0327::main();
  cout << endl;
  t0328::main();
  cout << endl;

  t0401::main();
  cout << endl;
  t0402::main();
  cout << endl;
  t0403::main();
  cout << endl;
  t0404::main();
  cout << endl;
  t0405::main();
  cout << endl;
  t0406::main();
  cout << endl;
  t0407::main();
  cout << endl;
  t0408::main();
  cout << endl;
  t0409::main();
  cout << endl;
  t0410::main();
  cout << endl;
  t0411::main();
  cout << endl;
  t0412::main();
  cout << endl;
  t0413::main();
  cout << endl;
  t0414::main();
  cout << endl;
  t0415::main();
  cout << endl;
  t0416::main();
  cout << endl;
  t0417::main();
  cout << endl;
  t0418::main();
  cout << endl;
  t0419::main();
  cout << endl;
  t0420::main();
  cout << endl;
  t0421::main();
  cout << endl;
  t0422::main();
  cout << endl;
  t0423::main();
  cout << endl;
  t0424::main();
  cout << endl;
  t0425::main();
  cout << endl;
  t0426::main();
  cout << endl;
  t0427::main();
  cout << endl;
  return 0;
}

