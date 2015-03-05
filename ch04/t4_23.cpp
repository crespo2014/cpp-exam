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
  vector<int> v2(4);
  generate(v1.begin(), v1.end(), Sequence(10));
  reverse_copy(v1.begin(), v1.end(), v2.rbegin());    //LINE I
  sort(v2.begin(), v2.end(), less_equal<int>());;    //LINE II
  for_each(v2.begin(), v2.end(), Out<int>(cout));
  return 0;
}
/*
 Select
 correct answer(single choice)
 compilation error in LINE II
 program outputs: 0, 1, 2, 3,
 you can't call reverse_copy function on v1 and v2 vectors
 program outputs: 10, 11, 12, 13,
 you can't call sort function on v2 vector
 runtime error at LINE I
 program outputs: 3, 4, 5, 6,
 runtime error at LINE II
 compilation error in LINE I

 */
