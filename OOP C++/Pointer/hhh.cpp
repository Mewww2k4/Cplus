#include<iostream>
using namespace std;

class IntArr {
private:
    int* a;
    int size; // Number of elements

public:
    IntArr() {
        a = 0;
        size = 0;
    }

    IntArr(int sz) {
        size = sz;
        a = new int[size];
    }

    ~IntArr() {
        delete[] a;
    }

    int getSize() {
        return size;
    }

    void Input() {
        cout << "Input number of elements (size): ";
        cin >> size;
        a = new int[size];
        for (int i = 0; i < size; i++) {
            cout << "Input value for element " << i + 1 << ": ";
            cin >> a[i];
        }
    }

    void Output() {
        cout << "The elements in the array: ";
        for (int i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    IntArr operator+(const IntArr& b) {
        if (size != b.size) {
            cout << "Arrays must have the same size for addition." << endl;
            return IntArr();
        }

        IntArr res(size);
        res.a = new int[size];

        for (int i = 0; i < size; i++) {
            res.a[i] = a[i] + b.a[i];
        }

        return res;
    }
    friend ostream& operator<<(ostream& os, const IntArr& obj) {
        os << "[";
        for (int i = 0; i < obj.size; i++) {
            os << obj.a[i];
            if (i < obj.size - 1) {
                os << ", ";
            }
        }
        os << "]";
        return os;
    }

};

int main() {
    IntArr arr1, arr2;
    arr1.Input();
    arr2.Input();

    IntArr arr3;
    arr3 = arr1 + arr2;
    cout << arr3;
    //    if (arr3.getSize() == 0) {
    //        cout << "Cannot add arrays. Sizes are different." << endl;
    //    } else {
    //        cout << "The new Array Arr3: " << arr3 << endl;
    //    }

    return 0;
}