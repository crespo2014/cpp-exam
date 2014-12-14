#include <iostream>
#include <set>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;
 static int main()
  {

    int mynumbers[] = { 3, 9, 0, 2, 1 };
    string words[] = { "three", "nine", "zero", "two", "one" };
    multimap<int, string> m;
    for (int i = 0; i < 4; i++)
    {
      m.insert(pair<int, string>(mynumbers[i], words[i]));
      m.insert(pair<int, string>(mynumbers[i], words[i]));
    }
   // m[0] = "ten";                //LINE I
    for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++)
      cout << i->second << ", ";
    return 0;
  }
  /*
   Select correct answer(single choice)
   zero, zero, two, two, three, three, nine, nine,
   ten, zero, two, two, three, three, nine, nine,
   ten, ten, two, two, three, three, nine, nine
 *  compilation error in LINE I
   zero, zero, two, two, three, three, nine, nine, ten, ten
   **/
