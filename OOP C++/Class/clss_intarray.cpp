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

    // Parameterized constructor and copy constructor
    IntArr(int* a, int s) : size(s) {
        for (int i = 0; i < s; i++) {
            arr[i] = a[i];
        }
    }

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
    int search(int val) const {
        for (int i = 0; i < size; i++) {
            if (arr[i] == val) {
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
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    IntArr obj1(arr1, 3);
    IntArr obj2(arr2, 3);
    IntArr obj3(obj1); // copy constructor
    obj1.display(); // 1 2 3
    obj2.display(); // 4 5 6
    obj3.display(); // 1 2 3
    cout << obj1.search(2) << endl; // 1
    cout << obj2.search(5) << endl; // 1
    
    cout << obj3.compare(obj1)<<" -> true. " << endl; // true
    cout << obj2.compare(obj3) <<" -> false. "<< endl; // false
    return 0;
}
