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
  static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    vector<int> v(mynumbers, mynumbers + 7);
    set<int> s(v.begin(), v.end());
//    for (int i = 10; i > 0; i++)
//    {
////      int x = s.top();    //LINE I
////      s.pop();                 //LINE II
//      //     v.push_back(i + x);                 //LINE III
//    }
    print(v.begin(), v.end());
    print(s.begin(), s.end());
    cout << endl;
    return 0;
  }

  /*

   The output will be
   Select correct answers (multiple choice)
   *  compilation error in LINE II
   *  compilation error in LINE I
   *  compilation error in LINE III
   0, 1, 2, 3, 4, 5, 9, 9, 5, 4, 3, 2, 1, 0, 0, 1, 2, 3, 4, 5, 9,
   0, 1, 2, 3, 4, 5, 9, 9, 5, 4, 3, 2, 1, 0, 1, 2, 3, 4, 5, 9,
   0, 1, 2, 3, 4, 5, 9, 0, 1, 2, 3, 4, 5, 9,
   */
