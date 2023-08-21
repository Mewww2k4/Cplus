#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, x;
    cout << "Nhap x: ";
    cin >> x;

    float e = x + 1.23;
    float c = exp(e) + 1;
    a = sqrt(pow(2, x) + 3.14159);
    b = log(c);
    float d = pow(3, pow(x, 2)) + 2.14 * b;
    double result = (cos(3 * a) + pow(2 * pow(x, 3) + x + 1, 1.0 / 5)) / (log(d) / log(7));

    cout << "Ket qua: " << result << endl;

    return 0;
}

