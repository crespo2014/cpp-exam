/*
 * test1.h
 *
 *  Created on: 30 Nov 2014
 *      Author: lester
 */

#ifndef TEST1_H_
#define TEST1_H_


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



#endif /* TEST1_H_ */
