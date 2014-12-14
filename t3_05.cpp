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
  bool operator ==(const A & b) const
  {
    return (this->a != b.a);
  }    //LINE I
};

struct doubler
{
  void operator()(A & a)
  {
    a.setA(a.getA() * 2);
  }
};
//LINE II

int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<A> v1(mynumbers, mynumbers + 7);
  for_each(v1.begin(), v1.end(), doubler());
  vector<A>::iterator it = find(v1.begin(), v1.end(), A(7));
  cout << it->getA() << endl;    //LINE III
  return 0;
}
/*
 Select correct answer(single choice)
 it will compile and print 6
 it will compile and print 14
 compilation error in LINE II
 compilation error in LINE III
 compilation error in LINE I
 it will compile and print 7
 it will compile and print 3

 Which sentences are true about the code below? Choose all that apply.
 */
