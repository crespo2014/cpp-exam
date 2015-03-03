#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;
template<class T>
  static void print(T start, T end)
  {
    while (start != end)
    {
      std::cout << *start << ", ";
      start++;
    }
  }
  int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 7 };
    vector<int> v(mynumbers, mynumbers + 7);
    multiset<int> s1(mynumbers, mynumbers + 7);
    for (int i = 9; i > 0; i)
    {
    double x = s1.pop();                                 //LINE I
    v.push_back(i + x);    //LINE II FIXME gcc do not complain by this, by x could not be defined
    }
    print(v.begin(), v.end());
    cout << endl;
    return 0;
  }
  /*
   Select correct answer(single choice)
   * compilation error in LINE I
   program outputs: 3, 9, 0, 2, 1, 4, 5, 12, 14, 4, 5, 3, 5, 5,
   the exception will be thrown at line LINE II
   program outputs: 3, 9, 0, 2, 1, 4, 5, 7, 12, 16, 5, 6, 4, 6, 6, 7,
   * compilation error in LINE II
   the exception will be thrown at line LINE I, because of too many calls to pop method
   */
