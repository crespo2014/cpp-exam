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
  for (int i = 0; i < 10; i++)
  {
    m.push_back(pair<int, string>(mynumbers[i], words[i]));                //LINE I
  }

  for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)                //LINE II
    cout << i->first << ", ";
  return 0;
}
/*
 Select correct answer(single choice)
 program outputs: 0, 1, 2, 3, 4, 5, 9,
 program outputs: 3, 9, 0, 2, 1, 4, 5,
 the exception will be thrown at line LINE I
 compilation error in LINE II because of redeclaration of i variable
 compilation error in LINE I
 */
