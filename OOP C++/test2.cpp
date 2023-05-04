#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string intToString(int num) {
    stringstream ss;
    ss << num;
    return ss.str();
}

int main() {
    int max_num = -1;   // initialize max_num to a negative value
    int min_num = -1;   // initialize min_num to a negative value
    int input_num, error_count = 0;
    string answer;

    do {
        cout << "Enter an even number: ";
        cin >> input_num;
        if (input_num % 2 != 0) {
            cout << "Error: " << input_num << " is not an even number.\n";
            error_count++;
            if (error_count >= 3) {
                break;
            }
            continue;
        }
        if (max_num == -1 || input_num > max_num) {
            max_num = input_num;
        }
        if (min_num == -1 || input_num < min_num) {
            min_num = input_num;
        }
        cout << "Do you want to continue? (yes/no) ";
        cin >> answer;
    } while (answer != "no");

    cout << "Max = " << (max_num != -1 ? intToString(max_num) : "N/A") << endl;
    cout << "Min = " << (min_num != -1 ? intToString(min_num) : "N/A") << endl;
    cout << "Number of input errors: " << error_count << endl;

    return 0;
}

