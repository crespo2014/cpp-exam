class Founder
{
public:
  int val;
  Founder(int v) :
      val(v)
  {
  }
  bool operator()(int v)
  {
    return (v == val);
  }    //LINE I
};

int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v1(mynumbers, mynumbers + 7);
  if (find(v1.begin(), v1.end(), 7) == find(v1.begin(), v1.end(), Founder(7).val))
  {    //LINE II
    cout << "Found!\n";
  } else
  {
    cout << "Not found!\n";
  }
  return 0;
}
/*
 Select correct answers(multiple choice)
 it will compile successfully
 it will display Found!
 compilation error in LINE I
 compilation error in LINE II
 it will display Not found!

 */
