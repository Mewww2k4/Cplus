#include<iostream>
using namespace std;
 class Account{
  protected :
    string AccountNum;
    double Balance;
  public:
  Account(string Acc, double Ba)
  {
    AccountNum = Acc;
    Balance = Ba;
  }
    virtual void deposits(double amount){
       Balance += amount;
    }
    virtual void WithDraw(double amount){
      if (Balance >= amount)
      {
        Balance -= amount;
      }
      else{
        cout << "Note : Your current balance is not enough!!!" << endl;
      }
    }
    virtual void displayAccountInfo(){
      cout << "The Account Number : " << AccountNum << endl;
      cout << "The current balance is : " << Balance << endl;
    }
};
class SavingAccount : public Account{
  protected :
    double interestRate;
  public  :
    SavingAccount(string Acc, double Ba, double interestRate) : Account(Acc, Ba), interestRate(interestRate){}
    void CaculateInterest()
    {
      double interest = Balance * interestRate;
      deposits(interest);
  }
  void displayAccountInfo()
  {
      cout << "-----Saving Account-----\n";
      Account::displayAccountInfo();
      cout << "The Interest Rate is " << interestRate << endl;
  }
};
class CheckingAccount:public Account{
  protected:
    double transactionFee;
  public:
  CheckingAccount(string Acc,double Ba,double Fee) : Account(Acc,Ba), transactionFee(Fee){}
  void deductTransactionFee()
  { 
       if(Balance >= transactionFee)
        Balance -= transactionFee;
        else{
        cout << "Note: The balance is not enough to deduct transaction fees." << endl;
        }
  }
  void displayAccountInfo()
  {
        cout << "--------Checking Account----------\n";
        Account::displayAccountInfo();
        cout << "Transaction Fee: $" << transactionFee << endl;
  }
};
int main()
{
  // Account a("123567", 4000);
  // a.deposits(3000);
  // a.WithDraw(7010);
  // a.displayAccountInfo();
  SavingAccount a("Trinh", 3000, 0.5);
  a.deposits(4000);
  a.CaculateInterest();
  a.displayAccountInfo();
  CheckingAccount b("123456", 3000, 0.5);
  b.WithDraw(4000);
  b.deductTransactionFee();
  b.displayAccountInfo();
  return 0;
}
