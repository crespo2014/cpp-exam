#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
#include <map>
using namespace std;
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  string words[] = { "three", "nine", "zero", "two", "one", "four", "five" };
  multimap<int, string> m;
  for (int i = 0; i < 3; i++)
  {
    m.push_back(pair<int, string>(mynumbers[i], words[i]));    //LINE I
  }

  for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++)
    cout << i->first << " ";    //LINE II
  return 0;
}
/*
 Select correct answer(single choice)
 the exception will be thrown at line LINE II
 compilation error in LINE I
 program outputs: 0, 1, 2, 3,
 the exception will be thrown at line LINE I
 compilation error in LINE II
 program outputs: 0, 1, 2,
 */
