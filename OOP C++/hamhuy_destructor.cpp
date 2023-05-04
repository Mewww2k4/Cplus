#include<iostream>
using namespace std;
class MyVector{
  private: 
        int size;
        int *a;
  public:
  // void Nhap(){}
  // void In(){}
  void Sinh(int n){
    size = n;
    a = new int[n];
    for(int i = 0; i <n ; i ++)
    a[i]= i;
  }
  MyVector()
  {
    cout << "----GOI HAM TAO SAO CHEP------\n";
    size = 0;
    a = NULL;
  }
  ~MyVector()
  {
    if (a!=NULL)
    delete []a;
    cout << "Goi ham huy\n";
  }
  MyVector(const  MyVector &b)

  {
    size = b.size;
    a = new int[size];
    for (int i = 0; i < size; i++)
    a[i] = b.a[i];
  }
  void cmp(MyVector b)
  {
    if(size!=b.size)
    {
    cout << "Hai doi tuong khac size nhau \n";
    }else
    cout << "Hai dt giong size nhau\n";
  }
  MyVector &operator = (const MyVector &b)
  {
    cout << "------GOI TOAN TU GAN-------\n";
    MyVector c;
    c.size = b.size;
    c.a = new int[size];
    for (int i = 0; i < size; i++)
    c.a[i] = b.a[i];
    return c;
  }
};
int main()
{
  MyVector a;
  a.Sinh(5);
//  MyVector c = a;
  MyVector c  ;
  c = a;
  a.cmp(c);
}
