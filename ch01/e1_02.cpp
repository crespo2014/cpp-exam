//Which statements are true about the code below? Choose all that apply.

#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>

using namespace std;
int main()
{
  vector<int> v1(4, 3);
  v1.push_back(4);
  for (vector<int>::reverse_iterator i = v1.rbegin(); i != v1.rend(); ++i)
  {
    cout << *i << " ";
  }
  cout << endl;
  return 0;
}
/*
Select correct answer (single choice)
program will not compile
v1.capacity() and v1.size() returns the same value;
program displays 4 3 3 3 3
program displays 3 3 3 3 4
program displays 4 4 4 4
*/
