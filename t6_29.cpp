//What will happen when you attempt to compile and run the following code?

#include <deque>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
  char s[] = { "lazybrownfox" };
  char pattern1[] = { "ybr" };
  char pattern2[] = { "nfo" };
  sort(s, s + 8);
  sort(pattern1, pattern1 + 3);
  sort(pattern2, pattern2 + 3);
  cout << includes(s, s + 7, pattern1, pattern1 + 3) << ", " << includes(s, s + 6, pattern2, pattern2 + 3);
  return 0;
}

/*
 Select correct answer (single choice)
 runtime error at LINE II
 program outputs: 1, 1,
 program outputs: 0, 0,
 program outputs: 0, 1,
 compilation error in LINE II
 program outputs: 1, 0,
 runtime error at LINE I
 */
