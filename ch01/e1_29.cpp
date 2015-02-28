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
  stack<int, std::map<int> > q1;
  stack<int, std::vector<int> > q2;
  stack<int, std::list<int> > q3;
  stack<int, std::deque<int> > q4;
  stack<int, std::set<int> > q5;
  q2.push(3);
  q3.push(3);
  q4.push(3);
  q5.push(3);
  q2.pop();
  q3.pop();
  q4.pop();
  q5.pop();

  return 0;
}
