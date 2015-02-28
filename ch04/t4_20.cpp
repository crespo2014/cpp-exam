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
    return 3 * (start++ % 2);    //LINE I
  }
};
int main()
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
