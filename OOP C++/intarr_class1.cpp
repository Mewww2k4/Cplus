#include <iostream>
#include <vector>
using namespace std;

class IntArr {
private:
    vector<int> arr;
public:
    // Default constructor
    IntArr() {}

    // Parameterized constructor and copy constructor
    IntArr(vector<int>& a) : arr(a) {}

    IntArr(const IntArr& other) : arr(other.arr) {}

    // Display function
    void display() const {
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Search function
    int search(int val) const {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == val) {
                return i;
            }
        }
        return -1;
    }

    // Compare function
    bool compare(const IntArr& other) const {
        if (arr.size() != other.arr.size()) {
            return false;
        }
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != other.arr[i]) {
                return false;
            }
        }
        return true;
    }
};
int main() {
    int arr[] = {1, 2, 3};
    vector<int> arr1(arr, arr + sizeof(arr) / sizeof(int));
    int arr[] = {3, 5, 7};
    vector<int> arr2(arr, arr + sizeof(arr) / sizeof(int));

    IntArr obj1(arr1);
    IntArr obj2(arr2);
    IntArr obj3(obj1); // copy constructor
    obj1.display(); // 1 2 3
    obj2.display(); // 4 5 6
    obj3.display(); // 1 2 3
    cout << obj1.search(2) << endl; // 1
    cout << obj2.search(5) << endl; // 1
    cout << obj3.compare(obj1) << endl; // true
    cout << obj2.compare(obj3) << endl; // false
    return 0;
}
