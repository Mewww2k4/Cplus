#include<iostream>
#include<algorithm>
using namespace std;
class Person{
	protected:
		string name; // ho va ten
		int year;    // nam sinh
	public:
		virtual void Input()
		{
			cout <<"Enter the name : ";
			fflush(stdin);
			getline(cin, name);
			cout<<"Enter year-Birth : ";
			cin >> year;
		}
		virtual void Output()
		{
			cout << "The Name Patient : " << name <<endl;
			cout << "The Year of Birth : " << year << endl;
		}
		string getName()
		{
			return name;
		}
		int getYear()
		{
			return year;
		}
		virtual double Calculate() = 0 ;
		
};
class Patient_Ou : public Person{
	private:
		string diseas_name; //ten benh
		double treatment_fee; //phi dieu tri
	public:
		void Input()
		{
	        Person::Input();
	        cout<<"Enter Diseas name :" ;
			fflush(stdin);
			getline(cin, diseas_name);
			cout <<"Enter treatment Fee : ";
			cin >> treatment_fee;
		}

		double Calculate()
		{
			if(this->getYear() < 1960)
			{
				 return treatment_fee * 0.92;
			}
			else
			{
				return treatment_fee;
			}
		}
		void Output()
		{
			Person::Output();
			cout<<"The Diseas Name : " << diseas_name << endl;
			cout<<"The Treatment Fee : "<<treatment_fee << endl;
			cout<<"Patient Fee : " <<  Calculate() <<"$"<< endl;
		}
};
class Patient_In : public Person{
	private:
		string diagnore; //ten chuan doan
		double drug_fee; //tien thuoc
		double stay_fee; //tien o
	public:
		void Input()
		{
			Person::Input();
			cout <<"Enter the diagnore :  ";
			fflush(stdin);
			getline(cin, diagnore);
			cout << "Enter the drug fee : ";
			cin >> drug_fee;
			cout <<"Enter the stays fee : ";
			cin >> stay_fee;
		}
		double Calculate()
		{
			if(this->getYear() < 1960)
			{
				return drug_fee*0.9 + stay_fee*0.88;
			}
			else
			return drug_fee + stay_fee;
		}
		void Output()
		{
			Person::Output();
			cout << "The diagnore : " << diagnore << endl;
			cout << "The Drug fee : " << drug_fee << endl;
			cout << "The stays fee : " <<  stay_fee <<endl;
			cout << "Patient Fee : " << Calculate() <<"$"<< endl;
		}
		
};
int mycmp(Person *a, Person *b)
{
	return a->getName() < b->getName();
}
class Clinic{
	private:
		int patient_num; // so luong benh nhan vd: n = 3 (patient)
		Person **a;
	public:
		void Input_List_Patient()
		{
			 cout <<"Enter the patient number : ";
			 cin >> patient_num;
			 a = new Person*[patient_num];
			 int choice ;
			 for(int i = 0 ; i < patient_num ; i++)
			 {
			 	cout <<"Enter (1) - > Patient_Ou , (2) - > Patient_In : ";      //nhap su lua chon cua ban
			 	cin >> choice ;
			 	cout <<"--------------*Enter patient the "<<i+1<<"*--------------"<<endl;
			 	if(choice == 1)   //1(Benh nhan ngoai tru)
			 	{
	               Patient_Ou *out = new Patient_Ou();
	               out->Input();
	               a[i] = out;
				}
				else              //2(Benh nhan noi tru)
				{
	               Patient_In *in = new Patient_In();
	               in->Input();
	               a[i] = in;
				}
			 }
		}
		void Output_List_Patient()
		{
			for(int i = 0 ; i < patient_num ; i++)
			{
			 	cout <<"--------------* Patient "<<i+1<<"*--------------"<<endl;
				a[i]->Output();
			}
		}
		void Sort_Name()
		{
			sort(a,a+patient_num, mycmp);
		}
        void Total_Pay()
		{
			double pay =0.0; //thanh toan
			for(int i = 0 ; i < patient_num ; i ++)
			{
				pay += a[i]->Calculate();
			}
			cout <<"Total pay of the patients : " <<pay <<"$"<< endl;
		}
		~Clinic()
		{
			for(int i = 0 ; i < patient_num ; i++)
			{
				if(a!=NULL)
				delete a[i];
			}
		}
		
};
int main()
{
	Clinic c1;
	c1.Input_List_Patient();
	cout<<"---------------------\n" ;
	c1.Output_List_Patient();
	c1.Sort_Name();
	cout<<"----------Name Arrange---------\n" ;
	c1.Output_List_Patient();
    cout<<"---------------------\n" ;
	c1.Total_Pay();
}
