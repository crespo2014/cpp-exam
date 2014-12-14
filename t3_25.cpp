int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
  vector<int> v(mynumbers, mynumbers + 12);

  vector<int>::iterator it = search_n(v.begin(), v.end(), 2, 1);         //LINE I
  cout << it - v.begin() << endl;         //LINE II
  return 0;
}
/*
 Select correct answer(single choice)
 the exception will be thrown at LINE I
 compilation error in LINE II
 program outputs: 5
 compilation error in LINE I
 program outputs: 3
 program outputs: 12
 program outputs: 4

 */
