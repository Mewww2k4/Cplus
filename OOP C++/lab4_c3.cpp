#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout <<"Input elment n : ";
  cin >> n ; 
  vector <int> a(n);
  vector < int >:: iterator it ;
  for(int i = 0 ; i < n ; i++)
  {
    cout <<"Input Array a["<<i<<"] = ";
    cin >> a[i] ;
  }
  int x,k;
  cout <<"Input value x : "; cin >> x;
  cout <<"Input location k : "; cin >> k ;
  if(k >= n )
  {
     a.push_back(x);
  }else{
  it = a.begin();
  a.insert(it + k,x);
  }
  cout <<"The Arrays after insert : ";
  for(int i = 0 ; i < a.size(); i ++)
  {
    cout <<a[i]<<"   ";
  }
}