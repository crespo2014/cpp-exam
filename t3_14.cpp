int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };
  vector<int> v(mynumbers, mynumbers + 12);

  int found = count(v.begin(), v.end(), 6);    //LINE I
  cout << found << endl;
  return 0;
}
/*
 Select correct answer(single choice)
 the exception will be thrown at LINE I
 Program outputs: 2
 Program executes and outputs nothing
 Program outputs: 4
 compilation error in LINE I
 Program outputs: 1
 Program outputs: 3

 */
