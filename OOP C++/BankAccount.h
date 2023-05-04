class BankAccount{
      private : 
             string Name;
             int AccNum;
             string AccType;
             long double BaAmount;
            static double RaInterest; // static member variable 
      public : 
      //static double RaInterest;
              BankAccount()
              {
                Name = "";
                AccNum = 0;
                AccType = "";
                BaAmount = 0.0;
              }
              BankAccount(string n, int a , string acc , long double b )
              {
                   Name = n;
                   AccNum = a;
                   AccType = acc;
                   BaAmount = b;
              }
              BankAccount(const BankAccount &copy)
            {
              Name = copy.Name;
              AccNum = copy.AccNum;
              AccType = copy.AccType;
              BaAmount = copy.BaAmount;
            }
            void Deposit()
            {
              double amount;
                 cout<<"Input Amount :"; cin >> amount;
                 BaAmount += amount;
                 cout <<"Deposit amount is "<< amount <<".  The current balance is :"<<BaAmount<<endl;
            }
            void withdraw()
            {
                double withdrawals;
                cout <<"Input withdrawals : " ; cin >>  withdrawals;
                BaAmount -= withdrawals;
                cout <<"Minus amount is  "<< withdrawals <<".  The current balance is: "<< BaAmount << endl;
            }
            void Display()
            {
                cout <<"Name Amount : " << Name << endl;
                cout <<"Account Number : " << AccNum << endl;
                cout <<"Type of account : "<<AccType << endl;
                cout <<"Balance amount in the account : "<< BaAmount << endl;
            }
            static void RaInterest_display(const BankAccount& account) // static member function 
             {
                cout << "Current interest rate: " << RaInterest * account.BaAmount << endl;
             }

};      
double BankAccount::RaInterest = 0.04; // define of static write outside class 

