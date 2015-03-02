#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <queue>

using namespace std;
int main()
{
  int t[] = { 1, 5, 3, 4, 2 };
  deque<int> d(t, t + 5);
  stack<int> s(d);
  cout << s.top() << " ";
  d.push_front(6);
  cout << s.top() << endl;
  return 0;
}
/*
 * Select correct answer (single choice)
program will cause runtime exception
program will display: 2 6
program will display: 1 1
program will display: 1 6
program will display: 2 2
 */
