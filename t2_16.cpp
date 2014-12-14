#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;

static int main()
  {
    int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
    string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };
    map<int, string> m;
//    for (int i = 0; i < 9; i++)
//      m.insert(pair<int, string>(mynumbers[i], words[i]));    //LINE I
    m[0] = "ten";                                                                                           //LINE II
    m.insert(pair<int, string>(1, "eleven"));                //LINE III
    for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
      cout << i->second << ", ";
    return 0;
  }
  /*
   Select correct answer(single choice)
   compilation error in LINE II
   program outputs: zero, one, two, three, four, five, nine, ten, eleven
   program outputs: ten, one, two, three, four, five, nine, eleven
   program outputs: three, nine, zero, two, one, four, five,
   program outputs: three, nine, zero, two, one, four,
   the exception will be thrown at line LINE I
   the exception will be thrown at line LINE III
   program outputs: zero, one, two, three, four, five, nine,
   */
