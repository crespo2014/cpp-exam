#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>

using namespace std;
int main()
{
  std::vector<int> v1;                // LINE I
  v1.push_back(10);                        // LINE II
  std::cout << v1.front() << ":" << v1.back() << std::endl;                // LINE III
  return 0;
}
