#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Person {
    string name;
    string address;
    int age;
    double salary;
};

void savePerson(const Person& person) {
    ofstream file("data.txt", ios::app);
    if (file) {
        file << person.name << ',' << person.address << ',' << person.age << ',' << person.salary << '\n';
        file.close();
    } else {
        cout << "Khong the mo file de luu tru du lieu.\n";
    }
}

void searchPersons() {
    ifstream file("data.txt");
    if (file) {
        string line;
        while (getline(file, line)) {
            string name, address;
            int age;
            double salary;
            char delimiter = ',';
            
            size_t pos = line.find(delimiter);
            name = line.substr(0, pos);
            line.erase(0, pos + 1);
            
            pos = line.find(delimiter);
            address = line.substr(0, pos);
            line.erase(0, pos + 1);
            
            pos = line.find(delimiter);
            age = std::atoi(line.substr(0, pos).c_str());
            line.erase(0, pos + 1);
            
            salary = std::atof(line.c_str());
            
            if (address == "Quan 3" && age < 30 && salary >= 500000) {
              cout << "Ho va ten: " << name << endl;
              cout << "Dia chi: " << address << endl;
              cout << "Tuoi: " << age << endl;
              cout << "Luong: " << salary << endl;
              cout << "-------------------------------" << endl;
            }
        }
        file.close();
    } else {
        cout << "Khong the mo file de tim kiem du lieu.\n";
    }
}


int main() {
    Person person;
    cout << "Nhap ho va ten: ";
    getline(cin, person.name);
    cout << "Nhap dia chi: ";
    getline(cin, person.address);
    cout << "Nhap tuoi: ";
    cin >> person.age;
    cout << "Nhap luong: ";
    cin >> person.salary;
    savePerson(person);

    searchPersons();

    return 0;
}
