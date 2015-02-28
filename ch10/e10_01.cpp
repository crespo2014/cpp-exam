#include <vector>
#include <iostream>
int main ()
{
        std::vector<int>        v1;
        v1.push_back(17);                        // LINE I
        std::cout<<v1.front()<<", "<<v1.back()<<std::endl;                // LINE II
        return 0;
}
/*
Select correct answers (multiple choice)
program outputs: 0, 0,
code compiles and executes successfully
program outputs: 17, 17,
compilation error in LINE II
program outputs: 0, 17,
compilation error in LINE I
*/
