#include<bits/stdc++.h>
using namespace std;
class Person{
    private:
           string ho;
           string ten;
           string que;
           int ns;
    public: 
            void In()
            {
                 cout <<"Nhap ho :"; fflush(stdin); getline(cin, ho);
                 cout <<"Nhap ten :"; fflush(stdin); getline(cin, ten);
                 cout <<"Nhap que :"; fflush(stdin); getline(cin, que);
                 cout <<"Nhap nam sinh: "; cin >>ns;
            }
            void Ou()
            {
                 cout <<"\n Ho: "<< ho << "| Ten : "<<ten<<"| Nam Sinh : "<<ns<<"| Que Quan: "<<que<<endl;
            }
            friend istream &operator >> (istream &is, Person &b)
            {
                 cout <<"Nhap ho :"; fflush(stdin); getline(is, b.ho);
                 cout <<"Nhap ten :"; fflush(stdin); getline(is, b.ten);
                 cout <<"Nhap que :"; fflush(stdin); getline(is, b.que);
                 cout <<"Nhap nam sinh: "; is >> b.ns;
                 return is;
            }
            friend ostream &operator <<(ostream &os, Person &b)
            {
                 cout <<"\n Ho: "<< b.ho << "| Ten : "<<b.ten<<"| Nam Sinh : "<<b.ns<<"| Que Quan: "<<b.que<<endl;
            }
            bool operator ==(Person b)
            {
              if(que.compare(b.que)==0)
              return 1;
              else return 0;
            }
};
int main()
{
  Person a,b;
  cout<<"\nNhap nguoi thu nhat\n ";
  a.In();
  cout<<"\nNhap nguoi thu 2 : "; 
  cin >> b;
  a.Ou();
  b.Ou();
  if(a==b)
  {
     cout <<"Hai nguoi cung que !";
  } else{
    cout <<"Hai nguoi khong cung que !";
  }
}
