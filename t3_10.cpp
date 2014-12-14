int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  vector<int> v(mynumbers, mynumbers + 7);
  vector<int>::iterator it;
  int m1[] = { 9, 0, 2 };
  it = find_first_of(v.begin(), v.end(), m1, m1 + 3);    //LINE I
  cout << "First found at position: " << it - v.begin() << endl;    //LINE II
  return 0;
}
/*
 Select correct answer(single choice)
 the exception will be thrown at line LINE II
 program outputs: First found at position: 2
 program outputs: First found at position: 1
 compilation error in line II
 program outputs: First found at position: 0
 program outputs: First found at position: 9
 compilation error in line I

 */
