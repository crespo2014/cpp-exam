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
int main()
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
