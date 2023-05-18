#include<bits/stdc++.h>
using namespace std;

class Book {
private:
    string BookName;
    string author;
    int year;

public:
    Book(const Book &b) {
        BookName = b.BookName;
        author = b.author;
        year = b.year;
    }

    Book(string b = "", string n = "", int y = 0) {
        BookName = b;
        author = n;
        year = y;
    }

    ~Book() {}

    friend istream &operator>>(istream &is, Book &b) {
        cout << "Input Book Name: ";
        fflush(stdin);
        getline(is, b.BookName);
        cout << "Input Author: ";
        fflush(stdin);
        getline(is, b.author);
        cout << "Input Year: ";
        is >> b.year;
        return is;
    }

    friend ostream &operator<<(ostream &os, Book &b) {
        os << "Book Name: " << b.BookName << "\nAuthor: " << b.author << "\nYear: " << b.year << endl;
        return os;
    }

    bool operator==(Book b) {
        if (BookName.compare(b.BookName) == 0)
            return true;
        else
            return false;
    }

    Book& operator=(const Book& b) {
        BookName = b.BookName;
        author = b.author;
        year = b.year;
        return *this;
    }

    void Input() {
        cout << "Input Book Name: ";
        getline(cin, BookName);
        cout << "Input Author: ";
        getline(cin, author);
        cout << "Input publishing year: ";
        cin >> year;
        cin.ignore();
    }

    void Output() {
        cout << "\nBook Name: " << BookName << "\nAuthor: " << author << "\nYear: " << year << endl;
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
