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
struct Equals
{
  bool operator ()(const A & a, const A &b)
  {
    return (a.getA() == b.getA());
  }         //LINE I
};
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
  deque<int> d(mynumbers, mynumbers + 12);
  deque<int>::iterator it = search_n(d.begin(), d.end(), 2, 1, Equals());         //LINE II
  cout << it - d.begin() << endl;         //LINE III
  return 0;
}
/*
 Select correct answer(single choice)
 the exception will be thrown at LINE II
 compilation error in LINE II
 program outputs: 11
 compilation error in LINE III
 program outputs: 3
 program outputs: 12
 compilation error in LINE I
 program outputs: 4

 */
