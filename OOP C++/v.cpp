#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

class IntArr {
private:
    int arr[MAX_SIZE];
    int size;
public:
    // Default constructor
    IntArr() : size(0) {}

    // Parameterized constructor
    IntArr(int arr[], int size) : size(size) {
        for (int i = 0; i < size; i++) {
            this->arr[i] = arr[i];
        }
    }

    // Copy constructor
    IntArr(const IntArr& other) : size(other.size) {
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }

    // Display function
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Search function
    int search(int x) const {
        for (int i = 0; i < size; i++) {
            if (arr[i] == x) {
                return i;
            }
        }
        return -1;
    }

    // Compare function
    bool compare(const IntArr& other) const {
        if (size != other.size) {
            return false;
        }
        for (int i = 0; i < size; i++) {
            if (arr[i] != other.arr[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    int arr1[MAX_SIZE] = {1, 2, 3};
    IntArr intArr1(arr1, 3);
    IntArr intArr2(intArr1); // Testing copy constructor
    intArr1.display(); // Output: 1 2 3
    intArr2.display(); // Output: 1 2 3
    cout << intArr1.search(2) << endl; // Output: 1
    cout << intArr1.search(4) << endl; // Output: -1
    cout << intArr1.compare(intArr2) << endl; // Output: 1 (true)
    return 0;
}

