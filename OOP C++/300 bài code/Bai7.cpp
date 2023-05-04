#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    double a,b, x;
    cout << "Nhap a va b :";
    cin >> a >> b;
    x=-b/a;
    if(a == 0){
      if (b==0){
        cout << "Phuong trinh vo so nghiem!!!";
      } else{
        cout << "Phuong trinh vo nghiem";
      }
   
}
else{
    cout <<"Phuong trinh co nghiem " <<"X"<<"="<<x; 
}
   return 0;
}