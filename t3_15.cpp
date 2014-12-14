class A
{
  int a;
public:
  A(int a) :
      a(a)
  {
  }
  int getA() const
  {
    return a;
  }
  void setA(int a)
  {
    this->a = a;
  }
};
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
  deque<int> d(mynumbers, mynumbers + 12);
  int count = std::count(d.begin(), d.end(), 6);    //LINE I
  cout << count << endl;
  return 0;
}
/*
 Select correct answer(single choice)
 Program executes and outputs nothing
 Program outputs: 3
 compilation error in LINE I
 the exception will be thrown at LINE I
 Program outputs: 1
 Program outputs: 2
 Program outputs: 4

 */
