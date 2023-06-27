#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Person{
	protected:
		string name;
		int year_of_birth;
    public:
    	virtual void Input()
    	{
			cout<<"Enter Name : ";
			fflush(stdin);
			getline(cin, name);
			cout<<"Enter Year of Birth : ";
			cin >> year_of_birth;
		}
		virtual void Output()
		{
			cout <<"The Name patient : " << name << endl;
			cout <<"The Year of Birth patient :  " << year_of_birth <<endl;
		}
		string getName()
		{
			return name;
		}
		int getYear()
		{
			return year_of_birth;
		}
		virtual double calculate()=0;

};
class Patient_Ou : public Person
{
	private:
		string  diseas_name;      //ten benh
		double treatment_fee;     //phi dieu tri
    public:
		 void Input()
		 {
			Person::Input();
			cout <<"Enter disease Name : ";
			fflush(stdin);
			getline(cin, diseas_name);
			cout <<"Enter Treatment Fee : ";
			cin >> treatment_fee;
		 }
		 void Output()
		 {
	        Person::Output();
	        cout<<"The Disease Name of patient: " << diseas_name << endl;
	        cout<<"The Treatment Fee : " << treatment_fee << endl;

		 }
		 double calculate()
		 {
			   if(this->getYear() < 1960)
			   {
			   	    return treatment_fee*0.92;
			   } else
			        return treatment_fee;
		 }
};
class Patient_In : public Person{
	private:
		string diagnose;       //ten chuan doan
		double drug_money;     //tien thuoc
		double stay_money;     //tien o
	public:
		void Input()
		{
			Person::Input();
			cout <<"Enter Diagnose :"; fflush(stdin);
			getline(cin, diagnose);
			cout <<"Enter drug money : ";
			cin >> drug_money;
			cout <<"Enter stay money : ";
			cin >> stay_money;
		}
		void Output()
		{
			Person::Output();
			cout<<"The Diagnose : " << diagnose << endl;
			cout<<"The drug money : " << drug_money <<endl;
			cout<<"The stays money : " << stay_money << endl;
		}
		double calculate()
		{
			if(this->getYear() < 1960)
			{
				return  (drug_money*0.9+ stay_money*0.88);
			}
			return drug_money+stay_money;
		}
};
int mycmp(Person *a, Person *b)
{
	return (a->getName() < b->getName());
}
class Clinic{
	private:
		int patient_num;
		Person **a;
    public:
		void Input_List_Patient()
		{
			cout << "Enter Patient Number : ";
			cin >> patient_num ;
			a = new Person*[patient_num];
			int choose;
			for(int i = 0 ; i < patient_num ; i++)
			{
				cout <<"Enter (1)Patient Out - (2)Patient In ...! "<<endl;
				cin >> choose;
				cout <<"--------------*Enter patient the "<<i+1<<"*--------------"<<endl;

				if(choose == 1 )
				{
                	 Patient_Ou *out = new Patient_Ou();
					 out->Input();
					 a[i] = out;
				}
				else
				{
	                Patient_In *in = new Patient_In();
	                in->Input();
	                a[i]=in;
				}

			}

		}
 	void Output_List_Patient()
		{
			for(int i=0 ; i < patient_num ; i++)
			{
				cout<<"--------------THE PATIENT "<<i+1<<"--------------"<<endl;
				a[i]->Output();
			}
		}
		void Sort_Name()
		{
			  sort(a,a+patient_num,mycmp);
		}
 		void Total_Pay()
		{
			double pay =0.0; //thanh toan
			for(int i = 0 ; i < patient_num ; i ++)
			{
				pay += a[i]->calculate();
			}
			cout <<"Total pay of the patients : " <<pay << endl;
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
//   Patient_In p1;
//   p1.Input();
//   p1.Output();
//   int d = p1.calculate();
//   cout <<"Total : " << d << endl;
    Clinic c1;
    c1.Input_List_Patient();
    cout<<"\n";
    c1.Output_List_Patient();
    cout<<"\n";
	c1.Sort_Name();
	cout<<"---------*The Patient after Arranged*--------"<<endl;
	c1.Output_List_Patient();
	cout<<"\n";
	double pay = c1.Total_Pay()  ;
	cout <<"The Total Pay of Patient is " << pay;
	return 0;
 
}

