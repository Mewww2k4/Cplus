#include<bits/stdc++.h>
using namespace std;

class Book {
    string name;
    char* auth;
    int year;

public:
    Book() {
        name = "";
        auth = NULL;
        year = 0;
    }

    Book(const Book& b) {
        name = b.name;
        year = b.year;
        if (b.auth != NULL) {
            int len = strlen(b.auth);
            auth = new char[len + 1];
            strcpy(auth, b.auth);
        } else {
            auth = NULL;
        }
    }

    ~Book() {
        delete[] auth;
    }

    friend istream &operator>>(istream &is, Book &b) {
        cout << "Input Book Name: ";
        getline(is, b.name);
        cout << "Input Author: ";
        string author;
        getline(is, author);
        if (b.auth != NULL) {
            delete[] b.auth;
        }
        b.auth = new char[author.length() + 1];
        strcpy(b.auth, author.c_str());
        cout << "Input Year: ";
        is >> b.year;
        is.ignore();
        return is;
    }

    friend ostream &operator<<(ostream &os, const Book &b) {
        os << "Book Name: " << b.name << "\nAuthor: " << b.auth << "\nYear: " << b.year << endl;
        return os;
    }

    bool operator==(const Book& b) const {
        return (name == b.name);
    }

    Book& operator=(const Book& b) {
        if (this != &b) {
            name = b.name;
            year = b.year;
            if (b.auth != NULL) {
                int len = strlen(b.auth);
                auth = new char[len + 1];
                strcpy(auth, b.auth);
            } else {
                auth = NULL;
            }
        }
        return *this;
    }

    void Input() {
        cout << "Input Book Name: ";
        getline(cin, name);
        cout << "Input Author: ";
        string author;
        getline(cin, author);
        if (auth != NULL) {
            delete[] auth;
        }
        auth = new char[author.length() + 1];
        strcpy(auth, author.c_str());
        cout << "Input Year: ";
        cin >> year;
        cin.ignore();
    }

    void Output() const {
        cout << "\nBook Name: " << name << "\nAuthor: " << auth << "\nYear: " << year << endl;
    }
};

int main() {
    Book a, b;
    cout << "The first Book" << endl;
    a.Input();
    cout << "The second Book" << endl;
    cin >> b;
    cout << "--------------BOOK 1----------------\n";
    a.Output();
    cout << "---------------BOOK 2---------------\n";
    cout << b;
    cout << "------------------------------------\n";
    if (a == b) {
        cout << "Two The Books have the same Name!!!" << endl;
    } else {
        cout << "Two The Books have different Names!!!" << endl;
    }
    Book c(a);
    cout << "--------------BOOK 3----------------\n";
    cout << c;
    return 0;
}

