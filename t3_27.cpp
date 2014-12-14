int main()
{
  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
  map<int, int> m;
  for (int i = 0; i < 10; i++)
  {
    m[i] = mynumbers[i];
  }
  pair<const int, int> p(4, 1);
  map<int, int>::iterator it = find(m.begin(), m.end(), p);         //LINE I
  if (it != m.end())
    cout << it->first << endl;
  else
    cout << "Not found!\n";
  return 0;
}
/*
 Select correct answer(single choice)
 program outputs: 4
 compilation error in LINE I
 the exception will be thrown at LINE I
 program outputs: 5
 program outputs: 1
 program outputs: Not found!

 */
