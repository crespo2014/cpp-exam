/*
 Which of the following examples shows the proper way to create a new queue container assuming all necessary declarations has been performed. Choose all that apply:
 Select correct answers (multiple choice)
 */
#include <deque>
#include <queue>
#include <vector>
#include <list>

using namespace std;

int main()
{
  {
    deque<int> d;
    queue<int> q(d.begin(), d.end());
  }
  {
    deque<int> d;
    queue<int> q(d);
  }
  {
    queue<int> q;
  }
  {
    vector<int> v;
    queue<int> q(v);
  }
  {
    list<int> l;
    queue<int> q(l);
  }
}
