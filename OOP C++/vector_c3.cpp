#include<bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  do{
  cout <<"Input element n : ";
  cin >> n;
  }while(n < 2&& n > 50);
  vector <int> a(n);
  vector <int> :: iterator it;
  for(int i = 0 ; i < n ; i++)
  {
    cout <<"Input Array["<<i<<"] = ";
    cin >> a[i];
  }
  int x,k;
  cout << "Input element x : ";
  cin >> x;
  cout <<"Input location k: ";
  cin >> k;
  if(k >= n)
  {
     a.push_back(x);//them vao cuoi!!!
  }
  it = a.begin();
  a.insert(it + k, x);
  cout <<"The Array after insert : ";
  for(int i = 0 ; i < n ; i++)
  {
      cout << a[i] << "  ";
  }
}