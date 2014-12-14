#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;
 static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 8 };
    vector<int> v(mynumbers, mynumbers + 7);
    map<int, string> m;
    for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
      {
      //cout << *i << ", ";    //LINE I
      }
    return 0;
  }
  /*
   Select correct answer(single choice)
   program outputs: 0, 1, 2, 3, 4, 5, 9,
   program outputs: 0, 1, 2, 3, 4, 5, 8, 9,
   program outputs: 0 , 1 , 2 , 3 , 4 , 5 , 9 ,
   program outputs: 3, 9, 0, 2, 1, 4, 5, 8,
   *compilation error in LINE I
   empty output
   the exception will be thrown at line LINE I
   */
