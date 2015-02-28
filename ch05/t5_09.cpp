#include <vector>
#include <set>
#include <iostream>
#include <functional>
#include <algorithm>
#include <cctype>
using namespace std;

class Pocket9
{
  int value;
public:
  Pocket9(int value) :
      value(value)
  {
  }
  int getValue() const
  {
    return value;
  }
  bool operator <(const Pocket9 & _Right) const
  {
    return value < _Right.value;
  }
  bool operator ==(const Pocket9 & _Right) const
  {
    return value == _Right.value;
  }
};
ostream & operator <<(ostream & stream, const Pocket9 & pocket)
{
  stream << pocket.getValue();
  return stream;
}

static void printer(Pocket9 i)
{
  cout << i << ", ";
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<Pocket9> v1(mynumbers, mynumbers + 7);
  sort(v1.begin(), v1.end());    //LINE I
  std::remove(v1.begin(), v1.end(), 2);    //LINE II
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}
/*

 Select correct answer (single choice)
 runtime error at LINE II
 compilation error in LINE I
 program outputs: 0, 1, 3, 4, 5, 9,
 runtime error at LINE I
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 program outputs: 0, 2, 3, 4, 5, 9,
 compilation error in LINE II

 */
