#include"iostream"
#include<math.h>
using namespace std;

int main ()
{
    double r , cv = 0 ,  dt = 0;
    cout << " Nhap ban kinh r : ";
    cin >> r;
    cv = 2 * M_PI * r;
    dt = 2 * M_PI * pow(r,2);
    cout << "Chu vi hinh tron : " << cv << endl;
    cout << "\nDien tich hinh tron : " << dt ;
    return 0;

    

}