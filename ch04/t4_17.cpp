#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

static void print(int v)
{
  cout << v << ", ";
}
struct Sequence
{
  int start;
  Sequence(int start) :
      start(start)
  {
  }
  int operator()()
  {
    return start++;    //LINE I
  }
};
int main()
{
  vector<int> v1(7);
  //generate_n(v1.begin(), 7, Sequence());    //LINE II NOT default ctor
  for_each(v1.begin(), v1.end(), print);
  return 0;
}
/*
 Select
 correct answer(single choice) compilation error in
 LINE IIprogram outputs: 1, 2, 3, 4, 5, 6, 7,
 program outputs: 7, 7, 7, 7, 7, 7, 7,
 compilation error in LINE I
 runtime error at LINE II
 program outputs: 1, 1, 1, 1, 1, 1, 1,
 runtime error at LINE I

 */
