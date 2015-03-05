#include <iostream>
#include <algorithm>
#include <vector>
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
struct Odd
{
  bool operator()(int v)
  {
    return v % 2 == 0;
  }
};
int main()
{
  vector<int> v1(4);
  generate(v1.rbegin(), v1.rend(), Sequence(10));    //LINE I
  partition(v1.begin(), v1.begin(), Odd());    //LINE II
  for_each(v1.begin(), v1.end(), Out<int>(cout));
  return 0;
}
/*
 Select
 correct answer(single choice)
 runtime error at LINE I
 program outputs: 6, 5, 4, 3,
 program outputs: 6, 5, 3, 4,
 compilation error in LINE I
 runtime error at LINE II
 you can't call partition function on v1 vector
 program outputs: 3, 4, 5, 6,
 you can't predict results of this code
 compilation error in LINE II

 */
