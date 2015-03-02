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
  queue<int> q(d);
  cout << q.front() << " " << q.back() << " ";
  q.pop();
  cout << q.front() << " " << q.back() << endl;
  return 0;
}

/*
 * Select correct answer (single choice)
program will display: 1 2 5 4
program will display: 2 1 4 1
program will display: 1 2 5 2
program will display: 5 1 4 1
program will display: 1 5 2 5
 */
