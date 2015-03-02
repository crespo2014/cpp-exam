//Which of the following examples shows the proper way to create a new priority_queue container assuming all necessary declarations has been performed. Choose all that apply:

//Select correct answers (multiple choice)
#include <deque>
#include <vector>
#include <list>
#include <queue>

using namespace std;

int main()
{

  {
    deque<int> d;
    priority_queue<int> q(d.begin(), d.end());
  }
  {
    list<int> l;
    priority_queue<int> q(l);
  }
  {
    vector<int> v;
    priority_queue<int> q(v);
  }
  {
    queue<int> q;
  }
  {
    deque<int> d;
    priority_queue<int> q(d);
  }

}
