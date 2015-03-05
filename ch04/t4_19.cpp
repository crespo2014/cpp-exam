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
    return start++;
  }
};
static bool predicate(int v)
{
  return v % 2 == 0;
}
int main()
{
  vector<int> v1(7);
  generate_n(v1.begin(), 7, Sequence());    //LINE I
  remove_if(v1.begin(), v1.end(), predicate);    //LINE II
  for_each(v1.begin(), v1.end(), print);
  return 0;
}
/*
 Select
 correct answers(multiple choice)
 runtime error at LINE I
 compilation error in LINE I
 you can't call remove_if function on set
 program outputs: 2, 4, 6,
 program outputs: 1, 3, 5, 7, 5, 6, 7,
 compilation error in LINE II
 program outputs: 1, 3, 5, 7,
 runtime error at LINE II

 */
