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

static void printer(Pocket<string> i)
{
  cout << i << ", ";
}
static string tolower(const string & s)
{
  string tmp(s);
  for (unsigned i = 0; i < tmp.size(); ++i)
  {
    tmp[i] = std::tolower(tmp[i]);      ///std:: was mssing
  }
  return tmp;
}
static bool Compare(const Pocket<string> &_Left, const Pocket<string> &_Right)
{
  return tolower(_Left.getValue()) < tolower(_Right.getValue());
}
int main()
{
  string t[] = { "zzz", "zzZ", "yyY", "Zzz", "Yyy", "zZz", "yyy", "yYy" };    //LINE I
  vector<Pocket<string> > v1;
  v1.assign(t, t + 8);    //LINE II
  stable_sort(v1.begin(), v1.end(), Compare);
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}

/*
 Select correct answer (single choice)
 program outputs: YYY, YYY, YYY, YYY, ZZZ, ZZZ, ZZZ, ZZZ,
 runtime error at LINE I
 compilation error in LINE II
 runtime error at LINE II
 compilation error in LINE I
 program outputs: yyy, yyy, yyy, yyy, zzz, zzz, zzz, zzz,
 program outputs: yyY, Yyy, yyy, yYy, zzz, zzZ, Zzz, zZz,

 */
