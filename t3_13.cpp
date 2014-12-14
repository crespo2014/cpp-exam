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
  bool operator==(const A & b) const
  {
    return a == b.a;
  }
};
static bool compare(const A & a, const A & b)
{
  return a == b;
}
int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 2, 2, 5 };
  vector<A> v(mynumbers, mynumbers + 7);
  vector<A>::iterator it = v.begin();

  while ((it = adjacent_find(it, v.end(), compare)) != v.end())
  {    //LINE I
    cout << it - v.begin() << ", ";
    it++;    //LINE II
  }
  cout << endl;
  return 0;
}
/*
 Select correct answer(single choice)
 the exception will be thrown at LINE II
 program will run forever
 compilation error in LINE II
 program outputs: 2, 3,
 compilation error in LINE I
 program outputs: 2, 2, 2,
 program outputs: 4, 5,
 program outputs: 3, 4,

 */
