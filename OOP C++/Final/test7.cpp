#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>

using namespace std;

// Hàm ð?c d? li?u t? file và lýu vào m?ng
int readFromFile(string& filename, int numbers[]) {
    ifstream inputFile(filename);
    int size;
    inputFile >> size;

    for (int i = 0; i < size; i++) {
        inputFile >> numbers[i];
    }

    inputFile.close();
    return size;
}

// Hàm in n?i dung m?ng ra màn h?nh
void printArray(const int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

// Hàm xóa ph?n t? ch?n ð?u tiên trong m?ng
void removeFirstEven(int numbers[], int& size) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            for (int j = i; j < size - 1; j++) {
                numbers[j] = numbers[j + 1];
            }
            size--;
            return;
        }
    }
    cout << "Mang khong co phan tu chan!" << endl;
}

// Hàm tính trung b?nh c?ng các s? nguyên dýõng trong m?ng
double calculateAverage(const int numbers[], int size) {
    int count = 0;
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (numbers[i] > 0) {
            sum += numbers[i];
            count++;
        }
    }

    if (count > 0) {
        return static_cast<double>(sum) / count;
    } else {
        return 0.0;
    }
}

// Hàm s?p x?p m?ng tãng d?n
void sortArray(int numbers[], int size) {
    sort(numbers, numbers + size);
}

// Hàm lýu m?ng vào file
void saveToFile(const int numbers[], int size, const string& filename) {
    ofstream outputFile(filename);
    outputFile << size << endl;
    for (int i = 0; i < size; i++) {
        outputFile << numbers[i] << " ";
    }
    outputFile.close();
}

int main() {
    string inputFilename = "input.txt";
    string outputFilename;

    const int MAX_SIZE = 100;
    int numbers[MAX_SIZE];
    int size = readFromFile(inputFilename, numbers);

    cout << "Mang goc: ";
    printArray(numbers, size);

    removeFirstEven(numbers, size);

    cout << "Mang sau khi xoa phan tu chan dau tien: ";
    printArray(numbers, size);

    double average = calculateAverage(numbers, size);
    cout << "Trung binh cong cac so nguyen duong: " << fixed << setprecision(2) << average << endl;

    sortArray(numbers, size);
    cout << "Mang sau khi sap xep: ";
    printArray(numbers, size);

    cout << "Nhap ten file de luu mang: ";
    cin >> outputFilename;
    saveToFile(numbers, size, outputFilename);

    return 0;
}

