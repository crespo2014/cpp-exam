//What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void printer(string i)
{
  cout << i << ", ";
}
int main()
{
  string myvalues[] = { "yyy", "Yyy", "yYy", "yyY", "ZZZ", "zZZ", "ZzZ", "ZZz" };
  vector<string> v1(myvalues, myvalues + 8);
  sort(v1.begin(), v1.end());
  remove(v1.begin(), v1.end(), "yyy");
  for_each(v1.begin(), v1.end(), printer);
  return 0;
}

/*
 Select correct answer (single choice)
 runtime error at LINE II
 runtime error at LINE I
 program outputs: Yyy, ZZZ, ZZz, ZzZ, yYy, yyY, zZZ,
 program outputs: yyy, Yyy, ZZZ, ZZz, ZzZ, yYy, yyY, zZZ, ,
 compilation error in LINE II
 program outputs: Yyy, ZZZ, ZZz, ZzZ, yYy, yyY, zZZ, ,
 */
