#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    do {
        cout << "Input element n : ";
        cin >> n;
    } while (n < 2 || n > 50);

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cout << "Input Array[" << i << "] = ";
        cin >> a[i];
    }

    int x, k;
    cout << "Input element x : ";
    cin >> x;
    cout << "Input location k: ";
    cin >> k;

    if (k >= n) {
        a.push_back(x); // thêm phần tử x vào cuối vector
    } else {
        a.insert(a.begin() + k, x); // chèn phần tử x vào vị trí k
    }

    cout << "The Array after insert : ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
