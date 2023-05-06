#include<bits/stdc++.h>
using namespace std;
class Bill{
private:
    string Name;
    double oldnumber;
    double newnumber;
    int price ;
public: 
    Bill(string n = "", double old = 0 , double ne = 0)
    {
    Name = n;
    oldnumber = old;
    newnumber = ne;
    }

    Bill(const Bill &b)
    {
        Name = b.Name;
        oldnumber = b.oldnumber;
        newnumber = b.newnumber;
        price = b.price;
    }
    void CompleteBill()
    {
        int numberelec = newnumber - oldnumber;
        if(numberelec <= 50)
        {
            price = newnumber * 1000;
        } 
        else if(numberelec <= 150)
        {
            price = 50 * 1000 + (numberelec - 50) * 2000;
        }
        else
        {
            price = 50 * 1000 + 100 * 2000 + (numberelec - 150) * 3000;
        }
      cout << "Price: " << price << endl;  
    }
    void Display()
    {
    cout << "Name customer: " << Name << endl;
    cout << "Old Number: " << oldnumber << endl;
    cout << "New Number: " << newnumber << endl;
    
    }


};
int main()
{
    Bill b1("Minh Thai", 100, 200);
    b1.Display();
    b1.CompleteBill();
    Bill b2(b1);
    b2.Display();
    b2.CompleteBill();
    return 0;
}
