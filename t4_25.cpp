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
