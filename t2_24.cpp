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
  for (int i = 0; i < 7; i++)
    m.insert(pair<int, string>(mynumbers[i], words[i]));
  if (m.find(0)->second == "zero")                //LINE I
    cout << "found expected ";
  for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++)
    cout << i->second << ", ";
  cout << m.size();
  return 0;
}
/*
 Select correct answer(single choice)
 program outputs: found expected zero, one, two, three, four, five, nine, 7
 program outputs: zero, one, two, three, four, five, nine, 8
 compilation error in LINE I
 the exception will be thrown at line LINE I
 program outputs: found expected zero, one, two, three, four, five, nine, 8
 */
