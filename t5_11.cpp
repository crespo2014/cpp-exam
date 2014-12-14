#include <vector>
#include <set>
#include <iostream>
#include <functional>
#include <algorithm>
#include <cctype>
using namespace std;

template<typename T>
class Pocket
{
  T value;
public:
  Pocket(T value) :
      value(value)
  {
  }
  T getValue() const
  {
    return value;
  }
  bool operator <(const Pocket & _Right) const
  {
    return value < _Right.value;
  }
  template<typename P>
  friend ostream & operator <<(ostream & stream, const Pocket<P> & pocket)
  {
    stream << pocket.getValue();
    return stream;
  }
};

static void printer(Pocket<double> i)
{
  cout << i << ", ";
}
static bool Compare(const Pocket<double> &_Left, const Pocket<double> &_Right)
{
  return int(_Left.getValue()) < int(_Right.getValue());
}
int main()
{
  double mynumbers[] = { 3.33, 9.19, 0.22, 2.12, 1.14, 4.45, 5.55 };
  vector<double> v1(mynumbers, mynumbers + 7);    //LINE I
  stable_sort(v1.begin(), v1.end(), Compare);    //LINE II
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}

/*
 Select correct answer (single choice)
 you can't call sort function on vector with elements of 'double' type
 runtime error at LINE II
 runtime error at LINE I
 program outputs: 3.33, 9.19, 0.22, 2.12, 1.14, 4.45, 5.55,
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 program outputs: 0.22, 1.14, 2.12, 3.33, 4.45, 5.55, 9.19,
 compilation error in LINE II
 compilation error in LINE I

 */
