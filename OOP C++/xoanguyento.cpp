#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int nt(int x)
{
    if (x < 2)
    return 0;
    else {
        for (int i = 2; sqrt(x); i++)
        if(x%i==0)
        return 0;
    return 1;
    }
}
int main(){
    vector <int>a; 
    vector <int>::iterator it;
    int n ;
    cout <<"\nNhap so phan tu n : "; cin >> n;
    for(int i = 0 ; i < n; i++)
    a.push_back(rand()%100);
    cout<<"\nvVector : " ;
    for(int i = 0 ; i < a.size(); i++)
    cout <<a.at(i)<< "   ";
    it = a.begin();
    for(int i = 0 ; i < a.size();   )
    if (!nt(a[i]))
    a.erase(it + i);
    else i++;
    cout <<"\nNhoi dung vector sau khi xu li : ";
    for (int i = 0 ; i < a.size(); i++)
    cout <<a.at(i)<< "    ";
}

