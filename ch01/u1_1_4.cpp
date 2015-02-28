#include "u1_1_3.cpp"
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
       return 0;
}
/*
Output:
0 1 2 3 4 5 6 7 8 9
10
11
10
*/
