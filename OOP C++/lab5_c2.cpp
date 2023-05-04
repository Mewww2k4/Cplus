#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

struct HocVien {
    string hoTen;
    char phai;
    float diem;
    string ketQua;
};

// hàm nh?p thông tin danh sách h?c viên t? bàn phím
void nhapDanhSach(vector<HocVien>& dsHocVien) {
    int n;
    cout << "Nhap so hoc vien: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        HocVien hv;
        cout << "Nhap thong tin hoc vien thu " << i + 1 << ":" << endl;
        cout << "Ho ten: ";
        cin.ignore();
        getline(cin, hv.hoTen);
        cout << "Phai (m/f): ";
        cin >> hv.phai;
        cout << "Diem: ";
        cin >> hv.diem;
        if (hv.diem >= 5) {
            hv.ketQua = "dau";
        } else {
            hv.ketQua = "rot";
        }
        dsHocVien.push_back(hv);
    }
}

// hàm ghi danh sách h?c viên vào file lop.txt
void ghiDanhSach(vector<HocVien>& dsHocVien) {
    ofstream fout("lop.txt");
    if (fout.is_open()) {
        for (int i = 0; i < dsHocVien.size(); i++) {
            fout << dsHocVien[i].hoTen << "," << dsHocVien[i].phai << "," << dsHocVien[i].diem << "," << dsHocVien[i].ketQua << endl;
        }
        fout.close();
    } else {
        cout << "Khong the mo file de ghi." << endl;
    }
}

// hàm d?c danh sách h?c viên t? file lop.txt
void docDanhSach(vector<HocVien>& dsHocVien) {
    ifstream fin("lop.txt");
    if (fin.is_open()) {
        string line;
        while (getline(fin, line)) {
            if (line.length() > 0) {
                HocVien hv;
                int pos = line.find(",");
                hv.hoTen = line.substr(0, pos);
                line.erase(0, pos + 1);
                hv.phai = line[0];
                line.erase(0, 2);
                try {
                    hv.diem = stof(line);
                } catch (const std::invalid_argument& e) {
                   std::cerr << "Invalid argument: " << e.what() << '\n';
}

                if (hv.diem < 5) {
                    hv.ketQua = "rot";
                } else if (hv.diem == 5 && hv.phai == 'f') {
                    hv.ketQua = "rot";
                } else {
                    hv.ketQua = "dau";
                }
                dsHocVien.push_back(hv);
            }
        }
        fin.close();
    } else {
        cout << "Khong the mo file de doc." << endl;
    }
}

