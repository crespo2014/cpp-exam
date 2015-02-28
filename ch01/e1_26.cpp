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
  vector<int> v;
  priority_queue<int> q1(v);
  list<int> l;
  priority_queue<int> q2(l);
  queue<int> q3;
  deque<int> d;
  priority_queue<int> q4(d.begin(), d.end());
  priority_queue<int> q5(d);

  return 0;
}
