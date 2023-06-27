#include<iostream>
using namespace std;
class Employee{
	private:
		string full_name;    //ho va ten
		int year;      // nam sinh
		double c_salary; // he so luong
	public:
        Employee(string fn = "", int y = 0, double c_s = 0)
        {
	        this->full_name = fn;
	        this->year = y;
	        this->c_salary = c_s;
		}
		virtual void Input()
		{
			cout << "Enter the full name : "; fflush(stdin); getline(cin, this->full_name);
			cout<<"Enter the year-birth : "; cin >> year;
			cout <<"Enter c_salary : "; cin >> c_salary;
			
		}

};
int main()
{
	return 0;
}
