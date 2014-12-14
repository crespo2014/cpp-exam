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
    return 3 * (start++ % 2);
  }
};
int main()
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
