#include "c01_03.h"
int main()
{
       Array A(10);
       for(unsigned i=0; i < A.getSize(); ++i)
       {
               A[i] = i;
       }
       for (unsigned i=0; i < A.getSize(); ++i)
       {
               std::cout<<A[i]<<" ";
       }
       std::cout<<"\n";

       std::cout<<A.getSize()<<std::endl;
       A.add(100);
       std::cout<<A.getSize()<<std::endl;
       A.delItem(A.getSize()-1);
       std::cout<<A.getSize()<<std::endl;
       return 0;
}
/*
Console output:
0 1 2 3 4 5 6 7 8 9
10
11
10
*/
