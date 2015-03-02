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
  int t[] = { 3, 5, 1, 4, 2 };
  vector<int> v(t, t + 5);
  priority_queue<int> q(v.begin(), v.end());
  cout << q.top() << " ";
  q.push(0);
  cout << q.top() << endl;
  return 0;
}

/*
 * Select correct answers (multiple choice)
program will display: 3 3
program will display: 3 0
program will display: 1 1
program will display: 5 5
program will display: 2 0
 */
