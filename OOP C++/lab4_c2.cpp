#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n ;

    cout <<"Input element n : ";
    cin >> n;
    if(n < 2 || n >50)
    {
      cout <<"Please re-enter : ";
      cin >> n;
    }
    vector <int> a(n);
    vector <int>::iterator it ; 
    for(int i = 0 ; i < n ; i++)
    {
        cout <<"Input Arrays  a["<<i<<"] = ";
        cin >> a[i];
    }
    int x;
    cout <<"Input element x : ";
    cin >> x;
    it = a.begin();
    a.insert(it + 2 , x);
    cout <<"The Arrays after insert : ";
    for(int i = 0 ; i < a.size() ; i++)
    {
      cout << a[i] <<"   "; 
    }
}