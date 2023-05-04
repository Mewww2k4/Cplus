#include<iostream>
using namespace std;

int main ()
{
    int a,b,c,t;
    cout <<"nhap 3 so nguyen " ;
    cin >> a >> b >> c;
    if(a<b)// a<b thì hoán chuyển , vậy a>b
    {
        t =a ;
        a=b;
        b=t;
    }
    if(a<c)
    {
        t=a;
        a=c;
        c=t;
    }
    if(b<c)
    {
        t=b;
        b=c;
        c=t;
    }
    cout << a << b << c ;
    return 0;

}