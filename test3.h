/*
 * test3.h
 *
 *  Created on: 25 Nov 2014
 *      Author: lester
 */

#ifndef TEST3_H_
#define TEST3_H_

using namespace std;

class t0301
{
public:

  static void myprint(int i)
  {
    cout << i << ", ";    // Line I
  }

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);
    deque<int> d1(mynumbers, mynumbers + 7);
    d1.pop_front();    // Line II
    for_each(v1.begin(), v1.end(), myprint);    // Line III
    for_each(s1.begin(), s1.end(), myprint);
    for_each(d1.begin(), d1.end(), myprint);
    return 0;
  }
  /*
   Select correct answer (single choice)
   compilation error in LINE I
   program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9, 9, 0, 2, 1, 4, 5,
   the exception will be thrown at LINE III
   compilation error in LINE II
   program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9, 3, 9, 0, 2, 1, 4,
   program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9, 3, 9, 0, 2, 1, 4, 5,
   the exception will be thrown at LINE II
   */
};

class t0302
{
public:

  struct myprinter
  {
    void operator()(int i)
    {
      cout << i << ", ";
    }
  };

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    deque<int> d1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);
    //v1.pop_back(5);    // Line I
    for_each(s1.begin(), s1.end(), myprinter());    // Line II
    for_each(d1.begin(), d1.end(), *(new myprinter()));    // Line III
    //for_each(v1.begin(), v1.end(), myprinter);    //Line IV
    return 0;
  }
  /*
   Select correct answers(multiple choice)
   compilation error in LINE II
   program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9, 9, 0, 2, 1, 4, 5, 3, 9, 0, 2, 1, 4,
   program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9, 9, 0, 2, 1, 4, 5, 3, 9, 0, 2, 1, 4, 5,
   compilation error in LINE III
   compilation error in LINE IV
   program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9, 9, 0, 2, 1, 4, 5, 3, 9, 0, 2, 1, 4, 5, 5
   compilation error in LINE I
   */};
class t0303
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
    void setA(int a)
    {
      this->a = a;
    }
    bool operator <(const A & b) const
    {
      return a < b.a;
    }
  };
  struct myprinter
  {
    void operator()(const A & a)
    {
      cout << a.getA() << ", ";
    }
  };
  struct doubler
  {
    void operator()(A a)
    {
      a.setA(a.getA() * 2);
    }    //LINE I
  };

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<A> v1(mynumbers, mynumbers + 7);
    set<A> s1(mynumbers, mynumbers + 7);
    for_each(v1.begin(), v1.end(), doubler());
    for_each(v1.begin(), v1.end(), myprinter());    //LINE II
    for_each(s1.begin(), s1.end(), doubler());
    for_each(s1.begin(), s1.end(), myprinter());    //LINE III
    return 0;
  }
  /*
   Select correct answer(single choice)
   compilation error in LINE II
   compilation error in LINE III
   the exception will be thrown at LINE I
   compilation error in LINE I
   program outputs: 6, 18, 0, 4, 2, 8, 10, 6, 18, 0, 4, 2, 8, 10,
   program outputs: 3, 9, 0, 2, 1, 4, 5, 0, 1, 2, 3, 4, 5, 9,
   program outputs: 6, 18, 0, 4, 2, 8, 10, 0, 2, 4, 6, 8, 10, 18,
   */
};
class t0304
{
public:

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    deque<int> d1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);
    vector<int>::iterator founded = find(v1.begin(), v1.end(), 3);    //LINE I
    if (founded != v1.end())    //LINE II
    cout << "founded" << ", ";
//    cout << find(d1.begin(), d1.end(), 9) << ", ";    //LINE III
//    cout << find(s1.begin(), s1.end(), 6);    //LINE IV
    return 0;
  }
  /*
   Select correct answers(multiple choice)
   compilation error in LINE I
   program outputs: 3, 9, 6
   compilation error in LINE II
   compilation error in LINE III
   program outputs: founded, 9, 6
   program outputs: founded, 9,
   the exception will be thrown at LINE I
   compilation error in LINE IV

   Which sentences are true about the code below? Choose all that apply.
   */
};
class t0305
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
    void setA(int a)
    {
      this->a = a;
    }
    bool operator ==(const A & b) const
    {
      return (this->a != b.a);
    }    //LINE I
  };

  struct doubler
  {
    void operator()(A & a)
    {
      a.setA(a.getA() * 2);
    }
  };
//LINE II

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<A> v1(mynumbers, mynumbers + 7);
    for_each(v1.begin(), v1.end(), doubler());
    vector<A>::iterator it = find(v1.begin(), v1.end(), A(7));
    cout << it->getA() << endl;    //LINE III
    return 0;
  }
  /*
   Select correct answer(single choice)
   it will compile and print 6
   it will compile and print 14
   compilation error in LINE II
   compilation error in LINE III
   compilation error in LINE I
   it will compile and print 7
   it will compile and print 3

   Which sentences are true about the code below? Choose all that apply.
   */
};
class t0306
{
public:

  class Founder
  {
  public:
    int val;
    Founder(int v) :
        val(v)
    {
    }
    bool operator()(int v)
    {
      return (v == val);
    }    //LINE I
  };

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v1(mynumbers, mynumbers + 7);
    if (find(v1.begin(), v1.end(), 7) == find(v1.begin(), v1.end(), Founder(7).val))
    {    //LINE II
      cout << "Found!\n";
    } else
    {
      cout << "Not found!\n";
    }
    return 0;
  }
  /*
   Select correct answers(multiple choice)
   it will compile successfully
   it will display Found!
   compilation error in LINE I
   compilation error in LINE II
   it will display Not found!

   */
};
class t0307
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
    void setA(int a)
    {
      this->a = a;
    }
    bool operator <(const A & b) const
    {
      return a < b.a;
    }
  };
  class Founder
  {
    A val;
  public:
    Founder(A & v) :
        val(v)
    {
    }
    bool operator()(A & v)
    {
      return (v.getA() == val.getA());
    }
  };
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<A> v1(mynumbers, mynumbers + 7);    //LINE I
    set<A> s1(mynumbers, mynumbers + 7);
    A a(5);
    Founder f(a);
    //find_if(s1.begin(), s1.end(), f.val);    //LINE II
    if (find_if(v1.begin(), v1.end(), f) != v1.end())
    {    //LINE III
      cout << "Found!\n";
    } else
    {
      cout << "Not found!\n";
    }
    return 0;
  }
  /*
   Select correct answers(multiple choice)
   it will display Found!
   compilation error in LINE II
   compilation error in LINE I
   compilation error in LINE III
   it will compile successfully
   it will not compile successfully
   it will display Not found!

   */
};
class t0308
{
public:

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    vector<int>::iterator it;
    int m1[] = { 9, 0, 2 };
    it = find_end(v.begin(), v.end(), m1, m1 + 3);    //LINE I
    if (it != v.end()) cout << "Found at position: " << it - v.begin() << endl;
    return 0;
  }
  /*
   Select correct answer(single choice)
   compilation error in LINE I
   program outputs: Found at position: 9
   program outputs: Found at position: 1
   no output
   program outputs: Found at position:
   program outputs: Found at position: 2

   */
};
class t0309
{
public:

  class A
  {
    int a;
    int getA() const
    {
      return a;
    }
    void setA(int a)
    {
      this->a = a;
    }
  public:
    A(int a) :
        a(a)
    {
    }
    bool operator==(A & b)
    {
      return a == b.a;
    }
  };
  struct Comparer
  {
    bool operator()(const A & a, const A & b)
    {
      //return a.getA() == b.getA();
    }
    ;
    //LINE I
  };
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<A> v(mynumbers, mynumbers + 7);
    vector<A>::iterator it;
    A m1[] = { A(2), A(3), A(4) };
    it = find_end(v.begin(), v.end(), m1, m1 + 3, Comparer());    //LINE II
    //cout << "Found at position: " << it + v.begin() << endl;    //LINE III
    return 0;
  }
  /*
   Select correct answers(multiple choice)
   compilation error in LINE III
   program outputs: Found at position: 0
   program outputs: Found at position: 7
   compilation error in LINE II
   compilation error in LINE I
   program outputs: Found at position: 1
   program outputs: Found at position: 2

   */
};
class t0310
{
public:

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    vector<int>::iterator it;
    int m1[] = { 9, 0, 2 };
    it = find_first_of(v.begin(), v.end(), m1, m1 + 3);    //LINE I
    cout << "First found at position: " << it - v.begin() << endl;    //LINE II
    return 0;
  }
  /*
   Select correct answer(single choice)
   the exception will be thrown at line LINE II
   program outputs: First found at position: 2
   program outputs: First found at position: 1
   compilation error in line II
   program outputs: First found at position: 0
   program outputs: First found at position: 9
   compilation error in line I

   */
};
class t0311
{
public:

  bool compare(int a, int b)
  {
    return a == b;
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    vector<int>::iterator it = v.begin();
    int m1[] = { 9, 0, 2 };

    while ((it = find_first_of(it, v.end(), m1, m1 + 3)) != v.end())
    {    //LINE I
      cout << it - v.begin() << ", ";    //LINE II
      it++;
    }
    cout << endl;
    return 0;
  }
  /*
   Select correct answer(single choice)
   the exception will be thrown at LINE I
   program outputs: 9, 0, 2,
   program outputs: 1, 2, 3,
   program will run forever
   compilation error in LINE I
   compilation error in LINE II

   */
};
class t0312
{
public:

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 2, 2, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    vector<int>::iterator it = v.begin();

    while ((it = adjacent_find(it, v.end())) != v.end())
    {    //LINE I
      cout << it - v.begin() << ", ";
      it--;    //LINE II
    }
    cout << endl;
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 3, 4,
   program outputs: 2, 3,
   compilation error in LINE II
   program will run forever
   compilation error in LINE I
   the exception will be thrown at LINE I
   program outputs: 5, 6,
   program outputs: 2, 2, 2,

   */
};
class t0313
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
    void setA(int a)
    {
      this->a = a;
    }
    bool operator==(const A & b) const
    {
      return a == b.a;
    }
  };
  static bool compare(const A & a, const A & b)
  {
    return a == b;
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 2, 2, 5 };
    vector<A> v(mynumbers, mynumbers + 7);
    vector<A>::iterator it = v.begin();

    while ((it = adjacent_find(it, v.end(), compare)) != v.end())
    {    //LINE I
      cout << it - v.begin() << ", ";
      it++;    //LINE II
    }
    cout << endl;
    return 0;
  }
  /*
   Select correct answer(single choice)
   the exception will be thrown at LINE II
   program will run forever
   compilation error in LINE II
   program outputs: 2, 3,
   compilation error in LINE I
   program outputs: 2, 2, 2,
   program outputs: 4, 5,
   program outputs: 3, 4,

   */
};
class t0314
{
public:

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
    vector<int> v(mynumbers, mynumbers + 12);

    int found = count(v.begin(), v.end(), 6);    //LINE I
    cout << found << endl;
    return 0;
  }
  /*
   Select correct answer(single choice)
   the exception will be thrown at LINE I
   Program outputs: 2
   Program executes and outputs nothing
   Program outputs: 4
   compilation error in LINE I
   Program outputs: 1
   Program outputs: 3

   */
};
class t0315
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
    void setA(int a)
    {
      this->a = a;
    }
  };
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
    deque<int> d(mynumbers, mynumbers + 12);
    int count = std::count(d.begin(), d.end(), 6);    //LINE I
    cout << count << endl;
    return 0;
  }
  /*
   Select correct answer(single choice)
   Program executes and outputs nothing
   Program outputs: 3
   compilation error in LINE I
   the exception will be thrown at LINE I
   Program outputs: 1
   Program outputs: 2
   Program outputs: 4

   */
};
class t0316
{
public:

  struct Compare
  {
    bool operator ()(int a)
    {
      return (a > 0);
    }    //LINE I
  };
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
    vector<int> v(mynumbers, mynumbers + 12);

//    int count = std::count(v.begin(), v.end(), Compare());    //LINE II
  //  cout << count << endl;
    return 0;
  }
  /*
   Select correct answer(single choice)
   the exception will be thrown at LINE I
   Program outputs: 2
   compilation error in LINE II
   Program executes and outputs nothing
   Program outputs: 3
   compilation error in LINE I
   Program outputs: 4
   Program outputs: 1

   */
};
class t0317
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
    void setA(int a)
    {
      this->a = a;
    }
    bool operator <(const A & b) const
    {
      return a < b.a;
    }    //LINE I
  };
  struct Compare
  {
    bool operator ()(A a)
    {
      return (a.getA() < 6);
    }
  };
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
    set<A> d(mynumbers, mynumbers + 12);
    int count = count_if(d.begin(), d.end(), Compare());    //LINE II
    cout << count << endl;
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 4
   the exception will be thrown at LINE I
   program outputs: 2
   program outputs: 1
   compilation error in LINE II
   compilation error in LINE I
   program outputs: 6

   */
};
class t0318
{
public:

  struct Pair
  {
    bool operator ()(int a)
    {
      return (a % 2) != 0;        //LINE I
    }
  };
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
    set<int> s(mynumbers, mynumbers + 12);

    int count = count_if(s.begin(), s.end(), Pair());        //LINE II
    cout << count << endl;
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 1
   program outputs: 3
   program outputs: 2
   compilation error in LINE II
   program outputs: 4
   the exception will be thrown at line LINE II
   compilation error in LINE I

   */
};
class t0319
{
public:

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
    vector<int> v1(mynumbers, mynumbers + 12);
    set<int> s1(mynumbers, mynumbers + 12);
    v1.push_back(10);        //LINE I
    pair<set<int>::iterator, vector<int>::iterator> resultSet = mismatch(s1.begin(), s1.end(), v1.begin());        //LINE II
    cout << *resultSet.first << ", " << *resultSet.second << endl;        //LINE III

    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 0, 0
   compilation error in LINE III
   compilation error in LINE II
   compilation error in LINE I
   program outputs: 10, 10
   program outputs: 0, 10
   the exception will be thrown at LINE II
   program outputs: 0, 3

   */
};
class t0320
{
public:

  static bool identical(int a, int b)
  {
    return b == a;        //LINE I
  }
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
    int othernumbers[] = { 3, 9, 0, 3, 1, 4, 3, 6, 6, 9, 8, 3 };
    vector<int> v1(mynumbers, mynumbers + 12);
    deque<int> d1(othernumbers, othernumbers + 12);

    pair<deque<int>::iterator, vector<int>::iterator> result;        //LINE II
    result = mismatch(d1.begin(), d1.end(), v1.begin(), identical);         //LINE III
    if (result.first == d1.end() && result.second == v1.end())
      cout << "Identical\n";
    else
      cout << "Not identical\n";
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: Identical
   compilation error in LINE III
   compilation error in LINE II
   the exception will be thrown at LINE III
   program outputs: Not identical
   compilation error in LINE I

   */
};
class t0321
{
public:

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
    vector<int> v1(mynumbers, mynumbers + 12);
    set<int> s1(mynumbers, mynumbers + 12);
    v1.push_back(10);
    //pair<set<int>::iterator, vector<int>::iterator> resultSet = std::equal(s1.begin(), s1.end(), v1.begin());         //LINE I
    //cout << *resultSet.first << ", " << *resultSet.second << endl;         //LINE II

    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 6
   the exception will be thrown at LINE I
   program outputs: 1
   program outputs: 2
   program outputs: 4
   compilation error in LINE II
   compilation error in LINE I

   */
};
class t0322
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
    operator int() const
    {
      return a;
    }         //LINE I
  };

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
    set<A> s(mynumbers, mynumbers + 12);
    cout << equal(s.begin(), s.end(), s.begin()) << endl;         //LINE II

    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 1
   the exception will be thrown at LINE I
   compilation error in LINE II
   compilation error in LINE I
   program outputs: 0
   program outputs: true
   program outputs: false

   */
};
class t0323
{
public:

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    vector<int>::iterator it;
    int m1[] = { 9, 0, 2 };
    it = search(v.begin(), v.end(), m1, m1 + 3);         //LINE I
    cout << "found at position: " << it - v.begin() << endl;         //LINE II
    return 0;
  }
  /*
   Select correct answer(single choice)
   compilation error in LINE I
   compilation error in LINE II
   the exception will be thrown at LINE I
   program outputs: found at position: 2
   program outputs: found at position: 1
   program outputs: found at position: 0

   */
};
class t0324
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
    void setA(int a)
    {
      this->a = a;
    }
    bool operator==(A & b)
    {
      return a == b.a;
    }
  };
  struct Compare
  {
    bool operator()(const A & a, const A & b)
    {
      return a.getA() == b.getA();
    }
    ;
  };
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<A> v(mynumbers, mynumbers + 7);
    vector<A>::iterator it;
    A m1[] = { A(2), A(3), A(4) };
    it = search(v.begin(), v.end(), m1, m1 + 3, Compare());         //LINE I
    cout << "First found at position: " << it - v.begin() << endl;         //LINE II
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: First found at position: 5
   the exception will be thrown at LINE I
   compilation error in LINE I
   program outputs: First found at position: 8
   program outputs: First found at position: 7
   compilation error in LINE II
   program outputs: First found at position: 6

   */
};
class t0325
{
public:

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
    vector<int> v(mynumbers, mynumbers + 12);

    vector<int>::iterator it = search_n(v.begin(), v.end(), 2, 1);         //LINE I
    cout << it - v.begin() << endl;         //LINE II
    return 0;
  }
  /*
   Select correct answer(single choice)
   the exception will be thrown at LINE I
   compilation error in LINE II
   program outputs: 5
   compilation error in LINE I
   program outputs: 3
   program outputs: 12
   program outputs: 4

   */
};
class t0326
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
    void setA(int a)
    {
      this->a = a;
    }
  };
  struct Equals
  {
    bool operator ()(const A & a, const A &b)
    {
      return (a.getA() == b.getA());
    }         //LINE I
  };
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
    deque<int> d(mynumbers, mynumbers + 12);
    deque<int>::iterator it = search_n(d.begin(), d.end(), 2, 1, Equals());         //LINE II
    cout << it - d.begin() << endl;         //LINE III
    return 0;
  }
  /*
   Select correct answer(single choice)
   the exception will be thrown at LINE II
   compilation error in LINE II
   program outputs: 11
   compilation error in LINE III
   program outputs: 3
   program outputs: 12
   compilation error in LINE I
   program outputs: 4

   */
};
class t0327
{
public:

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    map<int, int> m;
    for (int i = 0; i < 10; i++)
    {
      m[i] = mynumbers[i];
    }
    pair<const int, int> p(4, 1);
    map<int, int>::iterator it = find(m.begin(), m.end(), p);         //LINE I
    if (it != m.end())
      cout << it->first << endl;
    else
      cout << "Not found!\n";
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 4
   compilation error in LINE I
   the exception will be thrown at LINE I
   program outputs: 5
   program outputs: 1
   program outputs: Not found!

   */
};
class t0328
{
public:

  static void myprint(pair<int, int> i)
  {
    cout << i.first << ", ";
  }

  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    map<int, int> m;
    for (int i = 0; i < 7; i++)
    {
      m[i] = mynumbers[i];         //LINE I
    }

    for_each(m.begin(), m.end(), myprint);         //LINE II
    return 0;
  }/*
   Select correct answers(multiple choice)
   compilation error in LINE II
   program outputs: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
   size of map m is 6
   the exception will be thrown at LINE I
   program outputs: 0
   size of map m is 7
   size of map m is 8
   the exception will be thrown at LINE II
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 0, 1, 2, 3, 4, 5, 6,
   */
};

#endif /* TEST3_H_ */
