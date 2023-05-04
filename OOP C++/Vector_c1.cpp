#include<iostream>
#include<vector>

using namespace std;


int main()
{  
  int n ;
  cout <<"Nhap so luong phan tu : ";
  cin >> n;
   vector<int>a(n);
   for(int i = 0 ; i < n ; i++)
   {
    cout <<"Nhap mang a["<<i<<"] = ";
    cin >> a[i];
   }
   vector<int> b;
   for(int i = 0; i < n ; i++)
   {
       if(a[i]%2==0)
       b.push_back(a[i]);
   }
   cout <<"Cac so chan co trong day : ";
   for(int i = 0 ; i < b.size() ; i++)
   {
    cout <<b[i]<<"   ";
   }

    return 0;
}
  
 