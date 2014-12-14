int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
  vector<int> v1(mynumbers, mynumbers + 12);
  set<int> s1(mynumbers, mynumbers + 12);
  v1.push_back(10);        //LINE I
  pair<set<int>::iterator, vector<int>::iterator> resultSet = mismatch(s1.begin(), s1.end(), v1.begin());        //LINE II
  cout << *resultSet.first << ", " << *resultSet.second << endl;        //LINE III

  return 0;
}
/*
 Select correct answer(single choice)
 program outputs: 0, 0
 compilation error in LINE III
 compilation error in LINE II
 compilation error in LINE I
 program outputs: 10, 10
 program outputs: 0, 10
 the exception will be thrown at LINE II
 program outputs: 0, 3

 */
