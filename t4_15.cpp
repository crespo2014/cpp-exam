#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

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
int main()
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
