// What will happen when you attempt to compile and run the following code? Choose all that apply:

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

/*
Select correct answer (single choice)
compilation fails due to error in line 2
compilation fails due to error in line 1
compilation fails due to error in line 3
program displays 0:10
code compiles and executes successfully
*/
