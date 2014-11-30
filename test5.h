/*
 * test5.h
 *
 *  Created on: 30 Nov 2014
 *      Author: lester
 */

#ifndef TEST5_H_
#define TEST5_H_

#include <vector>
#include <set>
#include <iostream>
#include <functional>
#include <algorithm>
#include <cctype>
using namespace std;

class t0501
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
    sort(v1.begin(), v1.end(), greater<int>());    //LINE I
    for_each(v1.begin(), v1.end(), printer);    //LINE II
    return 0;
  }
  /*
   Select correct answer (single choice)
   program outputs: 3, 9, 0, 2, 1, 4, 5,
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   compilation error in LINE II
   program outputs: 9, 5, 4, 3, 2, 1, 0,
   you can't call sort function on v1 vector
   runtime error at LINE I
   compilation error in LINE I
   */
};

class t0502
{
public:
  static

  void printer(int i)
  {
    cout << i << ", ";
  }
  static bool Compare(int _Left, int _Right)
  {
    return _Left < _Right;
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    remove(v1.begin(), v1.end(), 1);    //LINE I
    sort(v1.begin(), v1.end(), Compare);    //LINE II
    for_each(v1.begin(), v1.end(), printer);
    return 0;
  }

  /*
   Select correct answers (multiple choice)
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   size of v1 vector is 6
   compilation error in LINE I
   size of v1 vector is 7
   compilation error in LINE II
   program outputs: 0, 2, 3, 4, 5, 9,
   program outputs: 0, 2, 3, 4, 5, 5, 9,

   */
};

class t0503
{
public:
  static void printer(double i)
  {
    cout << i << ", ";
  }
  static bool Compare(double a, double b)
  {
    return int(a) < int(b);
  }
  static int main()
  {
    double mynumbers[] = { 3.33, 9.19, 0.22, 2.12, 1.14, 4.45, 5.55 };
    vector<double> v1(mynumbers, mynumbers + 7);
    stable_sort(v1.begin(), v1.end(), Compare);    //LINE I
    remove(v1.begin(), v1.end(), 2.12);    //LINE II
    for_each(v1.begin(), v1.end(), printer);
    return 0;
  }
  /*

   Select correct answers (multiple choice)
   program outputs: 0.22, 1.14, 2.22, 3.33, 4.45, 5.55, 9.19,
   program outputs: 0.22, 1.14, 3.33, 4.45, 5.55, 9.19,
   size of v1 vector is 6
   program outputs: 0.22, 1.14, 3.33, 4.45, 5.55, 9.19, 9.19,
   compilation error in LINE II
   size of v1 vector is 7
   compilation error in LINE I

   */
};

class t0504
{
public:
  static
  void printer(int i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    deque<int> d1(mynumbers, mynumbers + 7);
    deque<int>::iterator it = lower_bound(d1.begin(), d1.end(), 3);
    d1.push_back(6);    //LINE I
    for_each(it, d1.end(), printer);    //LINE II
    return 0;
  }
  /*

   Select correct answer (single choice)
   program outputs: 4, 5, 6,
   compilation error in LINE II
   program outputs: 4, 5,
   compilation error in LINE I
   runtime error at LINE I
   runtime error at LINE II

   */
};

class t0505
{
public:
  static
  void printer(int i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    deque<int> d1(mynumbers, mynumbers + 7);
    sort(d1.begin(), d1.end());
    d1.push_back(6);
    deque<int>::iterator it = upper_bound(d1.begin(), d1.end(), 3);    //LINE I
    for_each(it, d1.end(), printer);    //LINE II
    return 0;
  }

  /*
   Select correct answer (single choice)
   program outputs: 4, 5, 6, 9,
   program outputs: 4, 5, 9,
   runtime error at LINE I
   program outputs: 4, 5, 9, 6,
   compilation error in LINE I
   program outputs: 4, 5, 6,
   compilation error in LINE II
   runtime error at LINE II

   */
};

class t0506
{
public:
  static
  void printer(int i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    deque<int> d1(mynumbers, mynumbers + 7);
    sort(d1.begin(), d1.end());
    d1.push_back(3);    //LINE I
    pair<deque<int>::iterator, deque<int>::iterator> result = equal_range(d1.begin(), d1.end(), 3);    //LINE II
    for_each(result.first, result.second, printer);
    return 0;
  }

  /*
   Select correct answer (single choice)
   compilation error in LINE II
   compilation error in LINE I
   program outputs: 3, 3,
   program outputs: 3,
   runtime error at LINE II
   runtime error at LINE I

   */
};

class t0507
{
public:
  static
  void printer(int i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    deque<int> d1(mynumbers, mynumbers + 7);
    d1.push_back(3);    //LINE I
    sort(d1.begin(), d1.end());
    pair<deque<int>::iterator, deque<int>::iterator> result = equal_range(d1.begin(), d1.end(), 3);    //LINE II
    for_each(result.first, result.second, printer);
    return 0;
  }
  /*

   Select correct answer (single choice)
   compilation error in LINE II
   runtime error at LINE II
   compilation error in LINE I
   program outputs: 3,
   runtime error at LINE I
   program outputs: 3, 3,

   */
};

class t0508
{
public:
  static
  void printer(int i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    deque<int> d1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);
    cout << binary_search(s1.begin(), s1.end(), 1) << ", "    //LINE I
        << binary_search(d1.begin(), d1.end(), 6) << endl;    //LINE II
    return 0;
  }

  /*
   Select correct answer (single choice)
   compilation error in LINE II
   runtime error at LINE II
   runtime error at LINE I
   program outputs: 1, 1,
   program outputs: 1, 0,
   program outputs: 0, 0,
   compilation error in LINE I

   */
};

class Pocket9
{
  int value;
public:
  Pocket9(int value) :
      value(value)
  {
  }
  int getValue() const
  {
    return value;
  }
  bool operator <(const Pocket9 & _Right) const
  {
    return value < _Right.value;
  }
  bool operator ==(const Pocket9 & _Right) const
    {
    return value ==_Right.value;
    }
};
ostream & operator <<(ostream & stream, const Pocket9 & pocket)
{
  stream << pocket.getValue();
  return stream;
}

class t0509
{
public:

  static void printer(Pocket9 i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<Pocket9> v1(mynumbers, mynumbers + 7);
    sort(v1.begin(), v1.end());    //LINE I
    std::remove(v1.begin(), v1.end(), 2);    //LINE II
    for_each(v1.begin(), v1.end(), printer);
    return 0;
  }
  /*

   Select correct answer (single choice)
   runtime error at LINE II
   compilation error in LINE I
   program outputs: 0, 1, 3, 4, 5, 9,
   runtime error at LINE I
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 0, 2, 3, 4, 5, 9,
   compilation error in LINE II

   */
};

class t0510
{
public:
  class Pocket
  {
    int value;
  public:
    Pocket(int value) :
    value(value)
    {
    }
    int getValue() const
    {
      return value;
    }
    bool operator >(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    friend ostream & operator <<(ostream & stream, const Pocket & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] =
    { 3, 9, 0, 2, 1, 4, 5};
    vector<Pocket> v1(mynumbers, mynumbers + 7);
    sort(v1.begin(), v1.end(), greater<Pocket>());    //LINE I
    for_each(v1.begin(), v1.end(), printer);//LINE II
    return 0;
  }

  /*
   Select correct answer (single choice)
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 1, 2, 3, 4, 5, 9,
   compilation error in LINE I
   program outputs: 9, 5, 4, 3, 2, 1, 0,
   runtime error at LINE I
   compilation error in LINE II
   runtime error at LINE II

   */
};

class t0511
{
public:
  template<typename T>
  class Pocket
  {
    T value;
  public:
    Pocket(T value) :
    value(value)
    {
    }
    T getValue() const
    {
      return value;
    }
    bool operator <(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    template<typename P>
    friend ostream & operator <<(ostream & stream, const Pocket<P> & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket<double> i)
  {
    cout << i << ", ";
  }
  static bool Compare(const Pocket<double> &_Left, const Pocket<double> &_Right)
  {
    return int(_Left.getValue()) < int(_Right.getValue());
  }
  static int main()
  {
    double mynumbers[] =
    { 3.33, 9.19, 0.22, 2.12, 1.14, 4.45, 5.55};
    vector<double> v1(mynumbers, mynumbers + 7);    //LINE I
    stable_sort(v1.begin(), v1.end(), Compare);//LINE II
    for_each(v1.begin(), v1.end(), printer);
    return 0;
  }

  /*
   Select correct answer (single choice)
   you can't call sort function on vector with elements of 'double' type
   runtime error at LINE II
   runtime error at LINE I
   program outputs: 3.33, 9.19, 0.22, 2.12, 1.14, 4.45, 5.55,
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 0.22, 1.14, 2.12, 3.33, 4.45, 5.55, 9.19,
   compilation error in LINE II
   compilation error in LINE I

   */
};

class t0512
{
public:
  class Pocket
  {
    int value;
  public:
    Pocket(int value) :
    value(value)
    {
    }
    int getValue() const
    {
      return value;
    }
    bool operator <(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    friend ostream & operator <<(ostream & stream, const Pocket & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] =
    { 3, 9, 0, 2, 1, 4, 5};
    deque<Pocket> d1(mynumbers, mynumbers + 7);
    d1.push_back(6);    //LINE I
    deque<Pocket>::iterator it = lower_bound(d1.begin(), d1.end(), 3);//LINE II
    for_each(it, d1.end(), printer);
    return 0;
  }

  /*
   Select correct answer (single choice)
   program outputs: 3, 4, 5,
   compilation error in LINE II
   runtime error at LINE I
   program outputs: 4, 5,
   program outputs: 4, 5, 6,
   runtime error at LINE II
   program outputs: 3, 4, 5, 6,
   compilation error in LINE I

   */
};


class t0513
{
public:
  class Pocket
  {
    int value;
  public:
    Pocket(int value) :
    value(value)
    {
    }
    int getValue() const
    {
      return value;
    }
    bool operator <(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    friend ostream & operator <<(ostream & stream, const Pocket & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] =
    { 3, 9, 0, 2, 1, 4, 5};
    deque<Pocket> d1(mynumbers, mynumbers + 7);
    sort(d1.begin(), d1.end());
    deque<Pocket>::iterator it = upper_bound(d1.begin(), d1.end(), Pocket(2));    //LINE I
    for_each(it + 1, d1.end(), printer);//LINE II
    return 0;
  }

  /*
   Select correct answer (single choice)
   program outputs: 3, 4, 5, 9,
   compilation error in LINE II
   compilation error in LINE I
   runtime error at LINE I
   runtime error at LINE II
   program outputs: 4, 5, 9
   program outputs: 3, 4, 5,

   */
};

class t0514
{
public:
  class Pocket
  {
    int value;
  public:
    Pocket(int value) :
    value(value)
    {
    }
    int getValue() const
    {
      return value;
    }
    bool operator <(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    friend ostream & operator <<(ostream & stream, const Pocket & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] =
    { 3, 9, 0, 2, 1, 4, 5};
    deque<Pocket> d1(mynumbers, mynumbers + 7);
    d1.push_back(3);
    sort(d1.begin(), d1.end());    //LINE I
    pair<deque<Pocket>::iterator, deque<Pocket>::iterator> result = equal_range(d1.begin(), d1.end(), Pocket(4));//LINE II
    for_each(result.first, result.second, printer);
    return 0;
  }

  /*
   Select correct answer (single choice)
   program outputs: 4,
   program outputs: 4, 4,
   runtime error at LINE II
   runtime error at LINE I
   program outputs: 3, 4,
   compilation error in LINE II
   compilation error in LINE I

   */
};

class t0515
{
public:
  class Pocket
  {
    int value;
  public:
    Pocket(int value) :
    value(value)
    {
    }
    int getValue() const
    {
      return value;
    }
    bool operator <(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    friend ostream & operator <<(ostream & stream, const Pocket & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] =
    { 3, 9, 0, 2, 1, 4, 5};
    deque<Pocket> d1(mynumbers, mynumbers + 7);
    sort(d1.begin(), d1.end());
    d1.push_back(3);    //LINE I
    pair<deque<Pocket>::iterator, deque<Pocket>::iterator> result = equal_range(d1.begin(), d1.end(), Pocket(3));//LINE II
    for_each(result.first, result.second, printer);
    return 0;
  }

  /*
   Select correct answer (single choice)
   compilation error in LINE II
   program outputs: 3, 4,
   runtime error at LINE II
   runtime error at LINE I
   program outputs: 3,
   compilation error in LINE I
   program outputs: 3, 3,

   */
};

class t0516
{
public:
  class Pocket
  {
    int value;
  public:
    Pocket(int value) :
    value(value)
    {
    }
    int getValue() const
    {
      return value;
    }
    bool operator <(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    friend ostream & operator <<(ostream & stream, const Pocket & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] =
    { 3, 9, 0, 2, 1, 4, 5};
    deque<Pocket> d1(mynumbers, mynumbers + 7);
    sort(d1.begin(), d1.end());    //LINE I
    set<Pocket> s1(mynumbers, mynumbers + 7);
    cout << binary_search(s1.begin(), s1.end(), Pocket(3)) << ", "//LINE II
    << binary_search(d1.begin(), d1.end(), Pocket(2)) << endl;
    return 0;
  }

  /*
   Select correct answer (single choice)
   program outputs: 1, 0,
   runtime error at LINE I
   runtime error at LINE II
   compilation error in LINE I
   program outputs: 2, 3,
   program outputs: 3, 2
   program outputs: 1, 1,
   compilation error in LINE II

   */
};

class t0517
{
public:
  class Pocket
  {
    int value;
  public:
    Pocket(int value) :
    value(value)
    {
    }
    int getValue() const
    {
      return value;
    }
    bool operator <(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    friend ostream & operator <<(ostream & stream, const Pocket & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] =
    { 3, 9, 0, 2, 1, 4, 5};
    set<Pocket> s1(mynumbers, mynumbers + 7);
    //sort(s1.begin(), s1.end());    //LINE I
    for_each(s1.begin(), s1.end(), printer);//LINE II
    return 0;
  }

  /*
   Select correct answer (single choice)
   program outputs: 0, 1, 2, 3, 4, 5,
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   runtime error at LINE II
   compilation error in LINE I
   compilation error in LINE II
   runtime error at LINE I

   */
};

class t0518
{
public:
  class Pocket
  {
    int value;
  public:
    Pocket(int value) :
    value(value)
    {
    }
    int getValue() const
    {
      return value;
    }
    bool operator <(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    friend ostream & operator <<(ostream & stream, const Pocket & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] =
    { 3, 9, 0, 2, 1, 4, 5};
    vector<Pocket> s1(mynumbers, mynumbers + 7);    //LINE I
    //sort(s1.begin(), s1.end(), greater<Pocket>());//LINE II operator > missing
    for_each(s1.begin(), s1.end(), printer);
    return 0;
  }

  /*
   Select correct answer (single choice)
   compilation error in LINE I
   runtime error at LINE I
   compilation error in LINE II
   program outputs: 9, 5, 4, 3, 2, 1, 0,
   runtime error at LINE II
   program outputs: 0, 1, 2, 3, 4, 5, 9,

   */
};

class t0519
{
public:
  class Pocket
  {
    int value;
  public:
    Pocket(int value) :
    value(value)
    {
    }
    int getValue() const
    {
      return value;
    }
    bool operator >(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    friend ostream & operator <<(ostream & stream, const Pocket & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] =
    { 3, 9, 0, 2, 1, 4, 5};
    vector<Pocket> s1(mynumbers, mynumbers + 7);    //LINE I
    sort(s1.begin(), s1.end(), greater<Pocket>());//LINE II
    for_each(s1.begin(), s1.end(), printer);
    return 0;
  }

  /*
   Select correct answer (single choice)
   runtime error at LINE II
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 9, 5, 4, 3, 2, 1, 0,
   compilation error in LINE II
   compilation error in LINE I
   runtime error at LINE I

   */
};

class t0520
{
public:
  template<typename T>
  class Pocket
  {
    T value;
  public:
    Pocket(T value) :
    value(value)
    {
    }
    T getValue() const
    {
      return value;
    }
    bool operator <(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    template<typename P>
    friend ostream & operator <<(ostream & stream, const Pocket<P> & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket<string> i)
  {
    cout << i << ", ";
  }
  static string tolower(const string & s)
  {
    string tmp(s);
    for (unsigned i = 0; i < tmp.size(); ++i)
    {
      tmp[i] = std::tolower(tmp[i]);      ///std:: was mssing
    }
    return tmp;
  }
  static bool Compare(const Pocket<string> &_Left, const Pocket<string> &_Right)
  {
    return tolower(_Left.getValue()) < tolower(_Right.getValue());
  }
  static int main()
  {
    string t[] =
    { "zzz", "zzZ", "yyY", "Zzz", "Yyy", "zZz", "yyy", "yYy"};    //LINE I
    vector<Pocket<string> > v1;
    v1.assign(t, t + 8);//LINE II
    stable_sort(v1.begin(), v1.end(), Compare);
    for_each(v1.begin(), v1.end(), printer);
    return 0;
  }

  /*
   Select correct answer (single choice)
   program outputs: YYY, YYY, YYY, YYY, ZZZ, ZZZ, ZZZ, ZZZ,
   runtime error at LINE I
   compilation error in LINE II
   runtime error at LINE II
   compilation error in LINE I
   program outputs: yyy, yyy, yyy, yyy, zzz, zzz, zzz, zzz,
   program outputs: yyY, Yyy, yyy, yYy, zzz, zzZ, Zzz, zZz,

   */
};

class t0521
{
public:
  class Pocket
  {
    int value;
  public:
    Pocket(int value) :
    value(value)
    {
    }
    int getValue() const
    {
      return value;
    }
    bool operator >(const Pocket & _Right) const
    {
      return value > _Right.value;
    }
    friend ostream & operator <<(ostream & stream, const Pocket & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] =
    { 3, 9, 0, 2, 1, 4, 5};
    deque<Pocket> d1(mynumbers, mynumbers + 7);
    sort(d1.begin(), d1.end(), greater<Pocket>());    //LINE I
    deque<Pocket>::iterator it = lower_bound(d1.begin(), d1.end(), 3, greater<Pocket>());//LINE II
    for_each(it, d1.end(), printer);
    return 0;
  }

  /*
   Select correct answer (single choice)
   runtime error at LINE II
   runtime error at LINE I
   compilation error in LINE II
   program outputs: 3, 2, 1, 0
   program outputs: 0, 1, 2, 3,
   program outputs: 3, 4, 5, 9,
   compilation error in LINE I

   */
};

class t0522
{
public:
  class Pocket
  {
    int value;
  public:
    Pocket(int value) :
    value(value)
    {
    }
    int getValue() const
    {
      return value;
    }
    bool operator <(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    bool operator >(const Pocket & _Right) const
    {
      return _Right < value;
    }    //LINE I
    friend ostream & operator <<(ostream & stream, const Pocket & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] =
    { 3, 9, 0, 2, 1, 4, 5};
    deque<Pocket> d1(mynumbers, mynumbers + 7);
    sort(d1.begin(), d1.end());
    deque<Pocket>::iterator it = upper_bound(d1.begin(), d1.end(), Pocket(5), greater<Pocket>());    //LINE II
    for_each(it, d1.end(), printer);
    return 0;
  }

  /*
   Select correct answer (single choice)
   compilation error in LINE II
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 5,
   runtime error at LINE I
   runtime error at LINE II
   program outputs: 5, 9,
   compilation error in LINE I

   */
};

class t0523
{
public:
  class Pocket
  {
    int value;
  public:
    Pocket(int value) :
    value(value)
    {
    }
    int getValue() const
    {
      return value;
    }
    bool operator <(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    bool operator >(const Pocket & _Right) const
    {
      return value > _Right.value;
    }
    friend ostream & operator <<(ostream & stream, const Pocket & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] =
    { 3, 9, 0, 2, 1, 4, 5};
    deque<Pocket> d1(mynumbers, mynumbers + 7);
    d1.push_back(3);
    sort(d1.begin(), d1.end(), greater<Pocket>());    //LINE I
    pair<deque<Pocket>::iterator, deque<Pocket>::iterator> result = equal_range(d1.begin(), d1.end(), Pocket(3), greater<Pocket>());//LINE II
    for_each(result.first, result.second, printer);
    return 0;
  }

  /*
   Select correct answer (single choice)
   program outputs: 3, 4,
   compilation error in LINE I
   program outputs: 3, 3,
   runtime error at LINE II
   runtime error at LINE I
   compilation error in LINE II
   program outputs: 3,

   */
};

class t0524
{
public:
  class Pocket
  {
    int value;
  public:
    Pocket(int value) :
    value(value)
    {
    }
    int getValue() const
    {
      return value;
    }
    bool operator <(const Pocket & _Right) const
    {
      return value < _Right.value;
    }
    friend ostream & operator <<(ostream & stream, const Pocket & pocket)
    {
      stream << pocket.getValue();
      return stream;
    }
  };

  static void printer(Pocket i)
  {
    cout << i << ", ";
  }
  static int main()
  {
    int mynumbers[] =
    { 3, 9, 0, 2, 1, 4, 5};
    deque<Pocket> d1(mynumbers, mynumbers + 7);
    sort(d1.begin(), d1.end());
    set<Pocket> s1(mynumbers, mynumbers + 7);
    cout << binary_search(s1.begin(), s1.end(), Pocket(3)) << ", "    //LINE I
    << binary_search(d1.begin(), d1.end(), Pocket(5)) << endl;//LINE II
    return 0;
  }
  /*

   Select correct answer (single choice)
   compilation error in LINE I
   program outputs: 1, 1,
   compilation error in LINE II
   program outputs: 3, 5
   program outputs: 3, 3,
   program outputs: 1, 0,
   */
};
//#endif

#endif /* TEST5_H_ */
