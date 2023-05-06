#include<bits/stdc++.h>
using namespace std;
class DaySo{
      int n, *a;
      public: 
            DaySo(int n1 = 0)
            { 
              n = n1;
              a = new int [n];
            } 
            ~DaySo(){
              delete []a;
            }
            void Sinh(int n) {
               this -> n = n ;
               a = new int[n];
               for(int i = 0 ; i < n ; i++)
               a[i] = rand()%100;
            }
            void In(){
                cout <<"\nNoi dung cua day:\n" ;
                for (int i = 0; i < n ; i++)
                {
                  cout <<" "<< a[i];
                }
            }
            void Thaydoi(int d = 2 ){
              for(int i = 0 ; i < n ; i++)
                       {
                          a[i] = a[i] + d;
                       }
            }
            DaySo(const DaySo &b)
            {
              n = b.n ;
              if(n > 0 )
              {
                 a = new int [n];
              }
              for(int i = 0; i < n ; i++)
              {
                a[i] = b.a[i];
              }
            }
            friend int gmax(DaySo b);
            friend istream & operator >> (istream &is, DaySo &b)
            {
              cout <<"\nNhap so phan tu : "; cin >> b.n;
              b.a = new int[b.n];
              for(int i = 0; i < b.n ; i++)
              {
                cout <<"Nhap so thu " << i << ":"; cin >> b.a[i];
              }
              return is;
            }
          
            friend ostream & operator << (ostream &os, DaySo &b)
            {
              
              for(int i = 0; i < b.n ; i++)
              {
                os <<  "   " <<  b.a[i];
              }
              return os;
            }
            DaySo operator = (const DaySo &b)
            {
              n =  b.n ;
              if(n>0)
              {
                a = new int [n];
                for(int i = 0 ; i < n ; i++)
                {
                  a[i]= b.a[i];
                }
              }
              return *this;
            }
};
int gmax(DaySo b)
{
  int m=b.a[0];
  for(int i = 0; i < b.n ; i++)
    if(b.a[i]>m)
    m=b.a[i];
    return m;
}
int main()
{
  DaySo a;
  a.Sinh(10);
  cout<<"\nDay a : "; a.In();
  DaySo b;
  b = a;//Operator = ; toan tu gan!!!
  cout <<"\nDay b : "; b.In();
  b.Thaydoi(5); 
  cout <<"\nDay b : "; b.In();
  cout <<"\nDay a : "; a.In();

  cout <<"\nMax day a = ";
   int d = gmax(a);
   cout << d;
  cout <<"\nMax day b = ";
  int c = gmax(b);

   cout << c;


  cout <<"\nNhap day a : "; cin >> a;
  cout << "\n Day a: " << a;

  
}