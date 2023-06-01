
class Account{
  protected:
    string AccountNum;
    int age;
    public :
      void get_name();
      void get_agde();
      virtual void displayAccount();
};
class Saving: public Account{
};