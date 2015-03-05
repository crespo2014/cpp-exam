#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <deque>
using namespace std;

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
int main()
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
 correct answers(multiple choice)
 program outputs: 3, 4, 5, 5, 4, 3, 3, 4, 5,
 program outputs: 3, 4, 5, 3, 4, 5, 3, 4, 5,
 runtime error at LINE II
 compilation error in LINE I
 runtime error at LINE I
 you can't call reverse function on s1 set
 program outputs: 5, 4, 3, 3, 4, 5, 3, 4, 5,
 compilation error in LINE II
 you can't call reverse function on d1 deque

 */
