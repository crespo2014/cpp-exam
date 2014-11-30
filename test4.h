/*
 * test4.h
 *
 *  Created on: 29 Nov 2014
 *      Author: lester
 */

#ifndef TEST4_H_
#define TEST4_H_

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class t0401
{
public:

  static void printer(int i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    copy(mynumbers, mynumbers + 7, v1.end());    //LINE I
    for_each(v1.begin(), v1.end(), printer);    //LINE II
    return 0;
  }
  /*
   Select correct answer (single choice)
   program outputs: 3, 9, 0, 2, 1, 4,
   program outputs: 3, 9, 0, 2, 1, 4, 5,
   runtime error at LINE II
   runtime error at LINE I
   compilation error in LINE II
   compilation error in LINE I
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   */
};
class t0402
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    copy_backward(mynumbers, mynumbers + 7, v1.rend());    //LINE I
    for_each(v1.begin(), v1.end(), printer);    //LINE II
    return 0;
  }
  /*

   Select correct answer (single choice)
   program outputs: 3, 9, 0, 2, 1, 4, 5,
   compilation error in LINE II
   program outputs: 5, 4, 1, 2, 9, 0,
   runtime error at LINE II
   compilation error in LINE I
   runtime error at LINE I
   program outputs: 3, 9, 0, 2, 1, 4,
   program outputs: 5, 4, 1, 2, 9, 0, 3,

   */};
class t0403
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    set<int> s1(mynumbers, mynumbers + 7);
    vector<int> v1(s1.rbegin(), s1.rend());
//    swap(s1, v1);    //LINE I
    for_each(v1.begin(), v1.end(), printer);    //LINE II
    return 0;
  }
  /*
   Select
   correct answer(single choice) runtime error at
   LINE Icompilation error in
   LINE Iruntime error at
   LINE IIcompilation error in
   LINE IIprogram outputs: 3, 9, 0, 2, 1, 4, 5,
   program outputs: 3, 9, 0, 2, 1, 4,
   program outputs: 0, 1, 2, 3, 4, 5,
   program outputs: 0, 1, 2, 3, 4, 5, 9,

   */
};

class t0404
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    deque<int> d1(mynumbers, mynumbers + 7);
    vector<int> v1(d1.rbegin(), d1.rend());
    swap_ranges(v1.begin(), v1.end(), d1.begin());    //LINE I
    sort(d1.begin(), d1.end());    //LINE II
    for_each(d1.begin(), d1.end(), printer);
    for_each(v1.begin(), v1.end(), printer);
    return 0;
  }
  /*
   Select
   correct answer(single choice) program outputs: 0, 1, 2, 3, 4, 5, 9, 3, 9, 0, 2, 1, 4, 5,
   compilation error in LINE I
   program outputs: 0, 1, 2, 3, 4, 5, 3, 0, 2, 1, 4, 5,
   runtime error at LINE I
   runtime error at LINE II
   program outputs: 5, 4, 1, 2, 0, 9, 3, 0, 1, 2, 3, 4, 5, 9,
   compilation error in LINE II
   program outputs: 5, 4, 1, 2, 0, 9, 0, 1, 2, 3, 4, 5,

   */
};

class t0405
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    set<int> s1(mynumbers, mynumbers + 7);
    vector<int> v1(s1.rbegin(), s1.rend());
//    swap_ranges(v1.begin(), s1.end(), v1.begin());    //LINE I
//    swap_ranges(s1.begin(), v1.end(), s1.begin());    //LINE II
    for_each(s1.begin(), s1.end(), printer);
    for_each(v1.begin(), v1.end(), printer);
    return 0;
  }
  /*
   Select
   correct answers(multiple choice) program outputs: 0, 1, 2, 3, 4, 5, 9, 9, 5, 4, 3, 2, 1, 0,
   program outputs: 0, 1, 2, 3, 4, 5, 9, 0, 1, 2, 3, 4, 5, 9,
   compilation error in LINE II
   runtime error at LINE II
   runtime error at LINE I
   program outputs: 9, 5, 4, 3, 2, 1, 0, 9, 5, 4, 3, 2, 1, 0,
   compilation error in LINE I

   */
};

class t0406
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  static void multiply(int a)
  {
    a * 2;    //LINE I
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    for_each(v1.begin(), v1.end(), multiply);
    iter_swap(v1.begin(), mynumbers + 6);    //LINE II
    for_each(v1.begin(), v1.end(), printer);
    return 0;
  }
  /*
   Select
   correct answer(single choice) program outputs: 3, 9, 0, 2, 1, 4, 5,
   runtime error at LINE II
   program outputs: 5, 9, 0, 2, 1, 4, 5,
   compilation error in LINE I
   program outputs: 5, 9, 0, 2, 1, 4, 3,
   compilation error in LINE II
   runtime error at LINE I

   */
};

class t0407
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  static int multiply(int a)
  {
    return a * 2;    //LINE I
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);
    transform(s1.begin(), s1.end(), v1.begin(), multiply);    //LINE II
    for_each(s1.begin(), s1.end(), printer);
    return 0;
  }
  /*
   Select
   correct answer(single choice) program outputs: 0, 1, 2, 3, 4, 5, 9,
   compilation error in LINE I
   program outputs: 3, 9, 0, 2, 1, 4, 5,
   compilation error in LINE II
   runtime error at LINE I
   program outputs: 0, 1, 2, 3, 4, 5,
   runtime error at LINE II

   */
};

class t0408
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  static int multiply(int a)
  {
    return a * 2;    //LINE I
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);
    transform(s1.begin(), s1.end(), v1.begin(), multiply);    //LINE II
    for_each(v1.begin(), v1.end(), printer);
    return 0;
  }
  /*
   Select
   correct answer(single choice) runtime error at
   LINE IIcompilation error in
   LINE Iprogram outputs: 6, 18, 0, 4, 2, 8, 10,
   compilation error in LINE II
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 0, 2, 4, 6, 8, 10, 18,
   runtime error at LINE I

   */
};

class t0409
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  static int add(int a, int b)
  {
    return a + b;
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);
    deque<int> d1;
    transform(s1.begin(), s1.end(), v1.begin(), d1.begin(), add);    //LINE I
    for_each(d1.begin(), d1.end(), printer);    //LINE II
    return 0;
  }
  /*
   Select
   correct answer(single choice) runtime error at
   LINE IIprogram outputs: 0, 1, 2, 3, 4, 5, 9,
   compilation error in LINE I
   compilation error in LINE II
   program outputs: 3, 10, 2, 5, 5, 9, 14,
   program outputs: 3, 9, 0, 2, 1, 4, 5,
   runtime error at LINE I

   */
};

class t0410
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);
    replace(v1.begin(), v1.end(), 9, 3);    //LINE I
    for_each(v1.begin(), v1.end(), printer);    //LINE II
    return 0;
  }
  /*
   Select
   correct answers(multiple choice) program outputs: 3, 3, 0, 2, 1, 4, 5,
   compilation error in LINE I
   runtime error at LINE I
   runtime error at LINE II
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 9, 3, 0, 2, 1, 4, 5,
   compilation error in LINE II
   you can't call replace function on s1 set

   */
};

class t0411
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  static bool classifier(int v)
  {
    return v - 3 > 0;
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);
    replace_if(v1.begin(), v1.end(), classifier, 7);    //LINE I
    for_each(v1.begin(), v1.end(), printer);    //LINE II
    return 0;
  }
  /*
   Select
   correct answers(multiple choice) compilation error in
   LINE Iprogram outputs: 7, 7, 0, 2, 1, 7, 7,
   program outputs: 0, 1, 2, 3, 7, 7, 7,
   program outputs: 3, 7, 0, 2, 1, 7, 7,
   runtime error at LINE II
   runtime error at LINE I
   you can't call replace function with classifier function as 3rd parameter
   compilation error in LINE II

   */
};

class t0412
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  static bool classifier(int v)
  {
    return v - 3 > 0;
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);
    //replace(v1.begin(), v1.end(), classifier, 7);    //LINE I use replace_if
    for_each(v1.begin(), v1.end(), printer);    //LINE II
    return 0;
  }
  /*
   Select
   correct answer(single choice) program outputs: 0, 1, 2, 3, 7, 7, 7,
   program outputs: 3, 7, 0, 2, 1, 7, 7,
   runtime error at LINE I
   compilation error in LINE II
   program outputs: 7, 7, 0, 2, 1, 7, 7,
   compilation error in LINE I
   runtime error at LINE II

   */
};

class t0413
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    vector<int> v1(7, 1);
    fill(v1.begin() + 3, v1.end() - 1, 8);    //LINE I
    fill_n(v1.begin() + 4, 2, 7);    //LINE II
    for_each(v1.begin(), v1.end(), printer);
    return 0;
  }
  /*
   Select
   correct answer(single choice) program outputs: 1, 1, 1, 8, 7, 7, 7,
   compilation error in LINE I
   runtime error at LINE I
   program outputs: 1, 1, 1, 8, 7, 7, 1,
   runtime error at LINE II
   program outputs: 1, 1, 1, 8, 2, 7, 2,
   compilation error in LINE II
   */
};

class t0414
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    vector<int> v1(7, 1);
    fill(v1.begin() + 3, v1.end() - 1, 8);    //LINE I
    fill_n(v1.begin() + 4, 5, 7);    //LINE II
    for_each(v1.begin(), v1.end(), printer);
    return 0;
  }
  /*
   Select
   correct answer(single choice) runtime error at
   LINE IIruntime error at
   LINE Iprogram outputs: 1, 1, 1, 8, 7, 7, 1,
   program outputs: 1, 1, 1, 8, 7, 7, 7,
   program outputs: 1, 1, 1, 8, 2, 7, 2,
   compilation error in LINE II
   compilation error in LINE I

   */
};

class t0415
{
public:
  static void printer(int i)
  {
    cout << i << ", ";
  }
  struct sequence
  {
    int val, inc;
  public:
    sequence(int s, int i) :
        val(s), inc(i)
    {
    }
    operator int() const
    {    //LINE I
      int r = val;
      return r;
    }
  };
  static int main()
  {
    vector<int> v1(7);
    fill(v1.begin(), v1.end(), sequence(1, 2));    //LINE II
    for_each(v1.begin(), v1.end(), printer);
    return 0;
  }
  /*
   Select
   correct answer(single choice) runtime error at
   LINE Iprogram outputs: 1, 2, 3, 4, 5, 6, 7,
   program outputs: 1, 1, 1, 1, 1, 1, 1,
   runtime error at LINE II
   program outputs: 2, 2, 2, 2, 2, 2, 2,
   program outputs: 1, 3, 5, 7, 9, 11, 13,
   compilation error in LINE I
   compilation error in LINE II

   */
};

class t0416
{
public:
  static void print(int v)
  {
    cout << v << ", ";
  }
  struct Sequence
  {
    int start;
    Sequence(int start) :
        start(start)
    {
    }
    int operator()()
    {
      return start++;    //LINE I
    }
  };
  static int main()
  {
    vector<int> v1(7);
    generate_n(v1.begin(), 7, Sequence(1));    //LINE II
    for_each(v1.begin(), v1.end(), print);
    return 0;
  }
  /*
   Select
   correct answer(single choice) program outputs: 7, 7, 7, 7, 7, 7, 7,
   program outputs: 1, 2, 3, 4, 5, 6, 7,
   runtime error at LINE II
   compilation error in LINE II
   program outputs: 1, 1, 1, 1, 1, 1, 1,
   compilation error in LINE I
   runtime error at LINE I

   */
};

class t0417
{
public:
  static void print(int v)
  {
    cout << v << ", ";
  }
  struct Sequence
  {
    int start;
    Sequence(int start) :
        start(start)
    {
    }
    int operator()()
    {
      return start++;    //LINE I
    }
  };
  static int main()
  {
    vector<int> v1(7);
    //generate_n(v1.begin(), 7, Sequence());    //LINE II NOT default ctor
    for_each(v1.begin(), v1.end(), print);
    return 0;
  }
  /*
   Select
   correct answer(single choice) compilation error in
   LINE IIprogram outputs: 1, 2, 3, 4, 5, 6, 7,
   program outputs: 7, 7, 7, 7, 7, 7, 7,
   compilation error in LINE I
   runtime error at LINE II
   program outputs: 1, 1, 1, 1, 1, 1, 1,
   runtime error at LINE I

   */
};

class t0418
{
public:
  static void print(int v)
  {
    cout << v << ", ";
  }
  struct Sequence
  {
    int start;
    Sequence(int start) :
        start(start)
    {
    }
    int operator()()
    {
      return start++;
    }
  };
  static bool predicate(int v)
  {
    return v % 2 == 0;
  }
  static int main()
  {
    vector<int> v1(7);
    generate_n(v1.begin(), 7, Sequence(1));    //LINE I
    remove_if(v1.begin(), v1.end(), predicate);    //LINE II
    for_each(v1.begin(), v1.end(), print);
    return 0;
  }
  /*
   Select
   correct answers(multiple choice) program outputs: 2, 4, 6,
   program outputs: 1, 3, 5, 7, 5, 6, 7,
   compilation error in LINE I
   runtime error at LINE II
   you can't call remove_if function on set
   runtime error at LINE I
   compilation error in LINE II
   program outputs: 1, 3, 5, 7,

   */
};

class t0419
{
public:
  static void print(int v)
  {
    cout << v << ", ";
  }
  struct Sequence
  {
    int start;
    Sequence(int start) :
        start(start)
    {
    }
    int operator()()
    {
      return start++;
    }
  };
  static bool predicate(int v)
  {
    return v % 2 == 0;
  }
  static int main()
  {
    vector<int> v1(7);
    // generate_n(v1.begin(), 7, Sequence());    //LINE I NOT default ctor
    remove_if(v1.begin(), v1.end(), predicate);    //LINE II
    for_each(v1.begin(), v1.end(), print);
    return 0;
  }
  /*
   Select
   correct answers(multiple choice) runtime error at
   LINE Icompilation error in
   LINE Iyou can't call remove_if function on set
   program outputs: 2, 4, 6,
   program outputs: 1, 3, 5, 7, 5, 6, 7,
   compilation error in LINE II
   program outputs: 1, 3, 5, 7,
   runtime error at LINE II

   */
};

class t0420
{
public:
  template<class T> struct Out
  {
    ostream & out;
    Out(ostream & o) :
        out(o)
    {
    }
    void operator()(const T & val)
    {
      out << val << ", ";
    }
  };
  struct Sequence
  {
    int start;
    Sequence(int start) :
        start(start)
    {
    }
    int operator()()
    {
      return 3 * (start++ % 2);    //LINE I
    }
  };
  static int main()
  {
    vector<int> v1(7);
    generate(v1.begin(), v1.end(), Sequence(10));    //LINE II
    unique(v1.begin(), v1.end());
    for_each(v1.begin(), v1.end(), Out<int>(cout));
    return 0;
  }
  /*
   Select
   correct answer(single choice) program outputs: 0, 3, 0, 3, 0, 3, 0,
   runtime error at LINE II
   you can't call unique function on vector
   runtime error at LINE I
   compilation error in LINE I
   program outputs: 3, 0, 3, 0, 3, 0, 3,
   compilation error in LINE II
   program outputs: 0, 3, 0, 3, 0, 3, 0, 3, 0, 3,

   */
};

class t0421
{
public:
  template<class T> struct Out
  {
    ostream & out;
    Out(ostream & o) :
        out(o)
    {
    }
    void operator()(const T & val)
    {
      out << val << ", ";
    }

  };
  struct Sequence
  {
    int start;
    Sequence(int start) :
        start(start)
    {
    }
    int operator()()
    {
      return 3 * (start++ % 2);
    }
  };
  static int main()
  {
    vector<int> v1(4);
    vector<int> v2(4);
    generate(v1.begin(), v1.end(), Sequence(10));    //LINE I
    sort(v1.rbegin(), v1.rend());
    unique_copy(v1.begin(), v1.end(), v2.begin());    //LINE II
    for_each(v2.begin(), v2.end(), Out<int>(cout));
    for_each(v1.begin(), v1.end(), Out<int>(cout));
    return 0;
  }
  /*
   Select
   correct answer(single choice) compilation error in
   LINE Iruntime error at
   LINE Iprogram outputs: 3, 0, 0, 0, 3, 3, 0, 0, 3, 0, 0, 0, 3, 3, 0, 0,
   program outputs: 3, 0, 3, 0, 3, 0, 3, 0,
   program outputs: 3, 0, 0, 0, 3, 3, 0, 0,
   you can't call unique_copy function on these vectors (v1, v2)
   compilation error in LINE II
   runtime error at LINE II

   */
};

class t0422
{
public:
  template<class T> struct Out
  {
    ostream & out;
    Out(ostream & o) :
        out(o)
    {
    }
    void operator()(const T & val)
    {
      out << val << ", ";
    }
  };
  struct Sequence
  {
    int start;
    Sequence(int start) :
        start(start)
    {
    }
    int operator()()
    {
      return start++ % 7;
    }
  };
  static int main()
  {
    vector<int> v1(3);
    generate(v1.begin(), v1.end(), Sequence(10));    //LINE I
    set<int> s1(v1.rbegin(), v1.rend());
    deque<int> d1(s1.rbegin(), s1.rend());
    reverse(v1.begin(), v1.end());
    reverse(d1.begin(), d1.end());    //LINE II
    for_each(s1.begin(), s1.end(), Out<int>(cout));
    for_each(v1.begin(), v1.end(), Out<int>(cout));
    for_each(d1.begin(), d1.end(), Out<int>(cout));
    return 0;
  }
  /*
   Select
   correct answers(multiple choice) program outputs: 3, 4, 5, 5, 4, 3, 3, 4, 5,
   program outputs: 3, 4, 5, 3, 4, 5, 3, 4, 5,
   runtime error at LINE II
   compilation error in LINE I
   runtime error at LINE I
   you can't call reverse function on s1 set
   program outputs: 5, 4, 3, 3, 4, 5, 3, 4, 5,
   compilation error in LINE II
   you can't call reverse function on d1 deque

   */
};

class t0423
{
public:
  template<class T> struct Out
  {
    ostream & out;
    Out(ostream & o) :
        out(o)
    {
    }
    void operator()(const T & val)
    {
      out << val << ", ";
    }
  };
  struct Sequence
  {
    int start;
    Sequence(int start) :
        start(start)
    {
    }
    int operator()()
    {
      return start++ % 7;
    }
  };
  static int main()
  {
    vector<int> v1(4);
    vector<int> v2(4);
    generate(v1.begin(), v1.end(), Sequence(10));
    reverse_copy(v1.begin(), v1.end(), v2.rbegin());    //LINE I
    sort(v2.begin(), v2.end(), less_equal<int>());
    ;    //LINE II
    for_each(v2.begin(), v2.end(), Out<int>(cout));
    return 0;
  }
  /*
   Select
   correct answer(single choice) compilation error in
   LINE IIprogram outputs: 0, 1, 2, 3,
   you can't call reverse_copy function on v1 and v2 vectors
   program outputs: 10, 11, 12, 13,
   you can't call sort function on v2 vector
   runtime error at LINE I
   program outputs: 3, 4, 5, 6,
   runtime error at LINE II
   compilation error in LINE I

   */
};

class t0424
{
public:
  template<class T> struct Out
  {
    ostream & out;
    Out(ostream & o) :
        out(o)
    {
    }
    void operator()(const T & val)
    {
      out << val << ", ";
    }
  };
  struct Sequence
  {
    int start;
    Sequence(int start) :
        start(start)
    {
    }
    int operator()()
    {
      return start++ % 7;
    }
  };
  static int main()
  {
    vector<int> v1(4);
    generate(v1.rbegin(), v1.rend(), Sequence(10));    //LINE I
    rotate(v1.begin(), v1.begin() + 1, v1.end());    //LINE II
    for_each(v1.begin(), v1.end(), Out<int>(cout));
    return 0;
  }
  /*
   Select
   correct answer(single choice) runtime error at
   LINE Iprogram outputs: 10, 11, 12, 13
   you can't call rotate function on v1 vector
   program outputs: 5, 4, 3, 6,
   program outputs: 12, 11, 10, 13
   program outputs: 3, 4, 5, 6,
   runtime error at LINE II
   compilation error in LINE II
   compilation error in LINE I

   */
};

class t0425
{
public:
  template<class T> struct Out
  {
    ostream & out;
    Out(ostream & o) :
        out(o)
    {
    }
    void operator()(const T & val)
    {
      out << val << ", ";
    }
  };
  struct Sequence
  {
    int start;
    Sequence(int start) :
        start(start)
    {
    }
    int operator()()
    {
      return start++ % 7;
    }
  };
  static int main()
  {
    vector<int> v1(4);
    generate(v1.rbegin(), v1.rend(), Sequence(10));    //LINE I
    random_shuffle(v1.begin(), v1.begin());    //LINE II
    for_each(v1.begin(), v1.end(), Out<int>(cout));
    return 0;
  }
  /*
   Select
   correct answer(single choice) runtime error at
   LINE IIprogram outputs: 3, 4, 5, 6,
   you can't call random_shuffle function on v1 vector
   compilation error in LINE I
   program outputs: 6, 5, 3, 4,
   compilation error in LINE II
   you can't predict results of this code
   runtime error at LINE I
   program outputs: 6, 5, 4, 3,

   */
};

class t0426
{
public:
  template<class T> struct Out
  {
    ostream & out;
    Out(ostream & o) :
        out(o)
    {
    }
    void operator()(const T & val)
    {
      out << val << ", ";
    }
  };
  struct Sequence
  {
    int start;
    Sequence(int start) :
        start(start)
    {
    }
    int operator()()
    {
      return start++ % 7;
    }
  };
  struct Odd
  {
    bool operator()(int v)
    {
      return v % 2 == 0;
    }
  };
  static int main()
  {
    vector<int> v1(4);
    generate(v1.rbegin(), v1.rend(), Sequence(10));    //LINE I
    partition(v1.begin(), v1.begin(), Odd());    //LINE II
    for_each(v1.begin(), v1.end(), Out<int>(cout));
    return 0;
  }
  /*
   Select
   correct answer(single choice) runtime error at
   LINE Iprogram outputs: 6, 5, 4, 3,
   program outputs: 6, 5, 3, 4,
   compilation error in LINE I
   runtime error at LINE II
   you can't call partition function on v1 vector
   program outputs: 3, 4, 5, 6,
   you can't predict results of this code
   compilation error in LINE II

   */
};

class t0427
{
public:
  template<class T> struct Out
  {
    ostream & out;
    Out(ostream & o) :
        out(o)
    {
    }
    void operator()(const T & val)
    {
      out << val << ", ";
    }
  };
  struct Sequence
  {
    int start;
    Sequence(int start) :
        start(start)
    {
    }
    int operator()()
    {
      return start++ % 7;
    }
  };
  struct Odd
  {
    bool operator()(int v)
    {
      return v % 2 == 0;
    }
  };
  static int main()
  {
    vector<int> v1(4);
    generate(v1.rbegin(), v1.rend(), Sequence(10));    //LINE I
    stable_partition(v1.begin(), v1.begin(), Odd());    //LINE II
    for_each(v1.begin(), v1.end(), Out<int>(cout));
    return 0;
  }

  /*
   Select correct answer (single choice)
   runtime error at LINE I
   runtime error at LINE II
   you can't call stable_partition function on v1 vector
   program outputs: 6, 5, 3, 4,
   you can't predict results of this code
   program outputs: 3, 4, 5, 6,
   compilation error in LINE I
   program outputs: 6, 5, 4, 3,
   */
};

#endif /* TEST4_H_ */
