#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>

using namespace std;
int main()
{
  vector<int> v1(10, -1);
  vector<int> v2;
  v2.reserve(10);
  for (unsigned i = 0; i < 10; i++)
  {
    v2.push_back(i);
  }
  return 0;
}
