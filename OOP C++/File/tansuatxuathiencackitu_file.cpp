#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int MAX_CHARS = 128;

int main() {
    // Mang dm t?n s? xu?t hi?n c?a c�c k� t?
    int count[MAX_CHARS] = {0};

    // M? file baitho.txt d? d?c
    ifstream in("baitho.txt");
    if (in == NULL) {
        cerr << "Khong the mo file baitho.txt\n";
        return 1;
    }

    // �?c t?ng k� t? trong file v� tang gi� tr? tuong ?ng trong m?ng d?m
    char c;
    while (in.get(c)) {
        if (isalpha(c)) { // ch? d?m c�c k� t? ch? c�i
            count[tolower(c)]++;
        }
    }

    // ��ng file baitho.txt
    in.close();

    // M? file tanso.txt d? ghi k?t qu?
    ofstream out("tanso.txt");
    if (out == NULL) {
        cerr << "Khong the mo file tanso.txt\n";
        return 1;
    }

    // In ra k?t qu? theo d?nh d?ng y�u c?u v� ghi v�o file tanso.txt
    for (int i = 0; i < MAX_CHARS; i++) {
        if (count[i] > 0) {
            out << (char)i << " : " << count[i] << endl;
        }
    }

    // ��ng file tanso.txt
    out.close();

    cout << "�a ghi ket qua vao file tanso.txt\n";

    return 0;
}

