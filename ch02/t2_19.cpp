#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
#include <map>
using namespace std;
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 5 };
  string words[] = { "three", "nine", "zero", "two", "one", "four", "five", "five" };
  map<int, string> m;
  for (int i = 0; i < 8; i++)
  {
    m.insert(pair<int, string>(mynumbers[i], words[i]));
  }
  if (m.count(5) == 2) m.erase(2);
  for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
  {
    cout << i->first << ", ";
  }
  return 0;
}
/*
 Select correct answer(single choice)
 program outputs: 0, 1, 3, 4, 5, 9,
 program outputs: 0, 1, 3, 4, 5, 5, 9,
 program outputs: zero, one, two, three, four, five, nine
 program outputs: zero, one, three, four, five, nine
 program outputs: 0, 1, 2, 3, 4, 5, 5, 9,
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 */
