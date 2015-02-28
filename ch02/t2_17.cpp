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
  map<int, string> m;
  for (int i = 0; i < 7; i++)
    m.insert(pair<int, string>(mynumbers[i], words[i]));                //LINE I
  if (m[10] == "ten")                //LINE II
    cout << "tenth element";
  for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
    cout << i->second << ", ";
  cout << m.size();                //LINE III
  return 0;
}
/*
 Select correct answer(single choice)
 program outputs: one, two, three, four, five, nine, , 7
 compilation error in LINE I
 compilation error in LINE III
 the exception will be thrown at line LINE II
 program outputs: zero, one, two, three, four, five, nine, , 8
 program outputs: zero, one, two, three, four, five, nine, , 7
 */
