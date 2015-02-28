#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <queue>

using namespace std;
void main()
{
  priority_queue<int, std::map<int> > q1;
  priority_queue<int, std::vector<int> > q2;
  priority_queue<int, std::list<int> > q3;
  priority_queue<int, std::deque<int> > q4;
  priority_queue<int, std::set<int> > q5;
  return 0;
}
