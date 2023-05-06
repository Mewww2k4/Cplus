#include <iostream>
using namespace std;

int main() {
    int min = INT_MAX, max = INT_MIN, input, tries = 0;
    bool isDone = false;
    while (!isDone) {
        cout << "Nhap vao mot so chan: ";
        cin >> input;
        if (input % 2 == 0) {
            if (input < min) {
                min = input;
            }
            if (input > max) {
                max = input;
            }
            char answer;
            cout << "Ban muon nhap tiep khong? (y/n) ";
            cin >> answer;
            if (answer == 'n') {
                isDone = true;
            }
        } else {
            tries++;
            if (tries >= 3) {
                isDone = true;
            }
            cout << "So khong phai la mot so chan. Hay nhap lai.\n";
        }
    }
    cout << "So chan nho nhat: " << min << endl;
    cout << "So chan lon nhat: " << max << endl;
    cout << "So lan nhap sai: " << tries << endl;
    return 0;
}
