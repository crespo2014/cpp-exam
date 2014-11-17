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

using namespace std;

template<class C>
void printout(C& c)
{
  for (auto &t : c)
  {
    cout << t << " , ";
  }
  cout << endl;
}

template<class T>
ostream& print(const T & start, const T & end)
{
  T t = start;
  for (; t != end; ++t)
  {
    cout << *t << " ";
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

void del(A * p)
{
  delete p;
}

ostream & operator<<(ostream & c, const A & o)
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

// Try uninitialize iterator
void unitialize_it()
{
  std::vector<int> v;
  std::vector<int> a { 1, 2, 3, 4 };
  std::vector<int> b(10);
  std::vector<int> c { 10 };
  std::vector<int> d { 10, 2 };
  std::vector<int> e(10, 2);
  std::vector<int>::iterator it;
  it = a.begin();
  cout << *it << endl;
  printout(a);
  printout(b);
  printout(c);
  printout(d);
  printout(e);
  int aa[] = { 2, 3, 4, 5, 6 };
  std::vector<int> f(aa, aa + 5);
  std::vector<int> g { aa, aa + 4 };
  printout(f);
  printout(g);

  std::vector<int> h { g };
  std::vector<int> i { std::move(g) };
  printout(h);
  printout(g);
  printout(i);

  //
  deque<int> di { aa, aa + 4 };
  printout(di);
  //  deque<int>::const_iterator it1;
//  it1 = di.begin();
//  di.erase(it1);
  queue<int> qe { di };
  cout << qe.size() << endl;

  list<int> la { aa, aa + 4 };
  auto it_la = la.begin();
  //it_la = it_la + 2;
  ++it_la;
  printout(la);
  la.resize(10);
  printout(la);

  list<int> la1 { 1, 2, 3, 4 };
  printout(la1);

  priority_queue<int> pq { aa, aa + 4 };
  priority_queue<int> pq2 { std::less<int>(), f };

  cout << "pq2   ";
  while (pq2.size())
  {
    cout << pq2.top() << " ; ";
    pq2.pop();
  }
  cout << endl;

  while (pq.size())
  {
    cout << pq.top() << " ; ";
    pq.pop();
  }
  cout << endl;

  {
    vector<int> v1(4, 3);
    v1.push_back(4);
//    for (vector<int>::iterator i = v1.rbegin(); i != v1.rend(); ++i)    ///***** reverse iterator type missing
    {
//      cout << *i << " ";
    }
    cout << endl;
  }
  {
    vector<int> v1(10, -1);
    vector<int> v2;
    v2.reserve(10);
    for (unsigned i = 0; i < 10; i++)
    {
      v2.push_back(i);
    }
  }
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

  }
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

  }
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    deque<int> d1(tab, tab + 10);

    deque<int>::const_iterator it = d1.begin() + 3;
   // d1.erase(it, it + 1); // **** const
    print(d1.begin(), d1.end());
    d1.clear();
    cout << d1.size() << endl;
  }
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

  }
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list<A> l1(tab, tab + 10);
    deque<A> d1;
    list<A>::iterator it;

    for (it = l1.begin(); it != l1.end(); ++it)
    {
      // d1.insert(d1.begin(), it[0]); //*** not random
    }
    print(d1.begin(), d1.end()) << endl;

  }
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list<int> l1(tab, tab + 10);
    list<int> l2;
    list<int>::iterator it;
    for (it = l1.begin(); it != l1.end(); ++it)
    {
      // l2.push_back(l1[l1.end() - it - 1]);   // not random     //LINE I
    }
    print(l2.begin(), l2.end()) << endl;        //LINE II

  }

  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list<int> l1(tab, tab + 10);

    // list<int>::const_iterator it = l1.begin() + 3;        //LINE I ****** random ***
    //  l1.erase(it, advance(it, 1));          // const                               //LINE II
    print(l1.begin(), l1.end());
    l1.clear();                                                                                //LINE III
    cout << l1.size() << endl;

  }
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
  }
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list<A> l1(tab, tab + 10);
    list<A> l2;
    list<A>::iterator it;
    for (it = l1.begin(); it != l1.end(); ++it)
    {
      // l2.push_front(it);  // **** value
    }
    print(l2.begin(), l2.end()) << endl;

  }
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
  }
  {
    vector<int> v;
    // priority_queue<int> q(v); // ****************
    list<int> l;
    // priority_queue<int> q1(l); // ******************
    queue<int> q2;
    deque<int> d;
    priority_queue<int> q3(d.begin(), d.end());
     // priority_queue<int> q4(d); // vector **************
  }
  {
    int t[] = { 3, 5, 1, 4, 2 };
    vector<int> v(t, t + 5);
    priority_queue<int> q(v.begin(), v.end());
    cout << q.top() << " ";
    q.push(0);
    cout << q.top() << endl;
  }
  {
    list<int> l;
    //queue<int> q1(l);   // **********
    vector<int> v;
    //queue<int> q2(v); // NOT BUILD
    queue<int> q3;
    deque<int> d;
    queue<int> q4(d);
    // queue<int> q5(d.begin(), d.end()); // NOT BUILD
  }
  {
    int t[] = { 1, 5, 3, 4, 2 };
    deque<int> d(t, t + 5);
    queue<int> q(d);
    cout << q.front() << " " << q.back() << " ";
    q.pop();
    cout << q.front() << " " << q.back() << endl;
  }
  {
    deque<int> d;
    stack<int> s1(d);
    // stack<int> s2(d.begin(), d.end());  NOT BUILD
    list<int> l;
    // stack<int> s3(l);  NOT BUILD
    stack<int> s4;
    vector<int> v;
    //stack<int> s5(v); //not build
  }
  {
    int t[] = { 1, 5, 3, 4, 2 };
    deque<int> d(t, t + 5);
    stack<int> s(d);
    cout << s.top() << " ";
    d.push_front(6);
    cout << s.top() << endl;
  }
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v1(tab, tab + 10);
    vector<int> v2;
    vector<int>::iterator it;
    for (it = v1.begin(); it != v1.end(); ++it)
    {
      v2.push_back(v1[v1.end() - it - 1]);        //LINE I
    }
    print(v2.rbegin(), v2.rend()) << endl;        //LINE II

  }
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v1(tab, tab + 10);

    vector<int>::const_iterator it = v1.begin() + 3;
    // v1.erase(it, it + 1);  // ********** const it
    print(v1.begin(), v1.end());
    v1.empty();
    cout << v1.size() << endl;
  }
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v1(tab, tab + 10);
    vector<int> v2;
    v2.reserve(10);

    while (!v1.empty())
    {
      // v2.insert(v2.begin(), v1.pop_back()); // ********** push_back return void
    }
    print(v2.rbegin(), v2.rend()) << ": " << v2.size() << endl;
  }
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<A> v1(tab, tab + 10);                //LINE I
    v1.insert(v1.end(), A(0));
    print(v1.begin(), v1.end()) << endl;
  }
  {
    int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<A*> v1;
    fill(tab, 10, v1);

    print(v1.rbegin(), v1.rend()) << endl;                //LINE II
    for_each(v1.begin(), v1.end(), del);
  }

}

int main()
{
  unitialize_it();
  return 0;
}

