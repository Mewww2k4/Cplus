#include<bits/stdc++.h>
using namespace std;

class Time{
      private:
            int hour;
            int minute;
            int seconds;
      public:
            Time(int = 0 , int = 0 , int = 0);
            void Display();
            Time Add(Time t);
            Time Sub(Time t);
            void Cmp(Time t);
};
Time::Time(int h, int m, int s)
{
      hour = h;
      minute = m;
      seconds = s;
}
void Time::Display()
{
    cout << hour <<"h:"<< minute <<"m:"<< seconds <<"s."<< endl;
}
Time Time::Add(Time t)
{
  Time kq;
  kq.hour = hour + t.hour;
  kq.minute = minute + t.minute;
  kq.seconds = seconds + t.seconds;
      if(kq.hour >= 24) //Neu h > 24 thi se tru di 24
      {
         kq.hour -= 24;
      }
      if(kq.minute >= 60 ) //Neu phut > 60 thi chuyen sang gio + them  1 va phut - 60  ;
      {
        kq.hour += 1;
        kq.minute -= 60;
      }
      if(kq.seconds >= 60)   // 
      {
        kq.minute += 1;  
        kq.seconds -= 60;
      }
  return kq;
}
Time Time::Sub(Time t)
{
  Time kq;
  kq.hour = hour - t.hour;
  kq.minute = minute - t.minute;
  kq.seconds = seconds - t.seconds;
      if(kq.hour < 0) 
      {
         kq.hour += 24;
      }
      if(kq.minute < 0 ) 
      {
        kq.hour -= 1;
        kq.minute += 60;
      }
      if(kq.seconds < 0)   
      {
        kq.minute -= 1;  
        kq.seconds += 60;
      }
  return kq;
}
void Time::Cmp(Time t)
{
  if (hour > t.hour)
  {
    cout <<"\nT1 > T2";
  } else if(hour == t.hour)
          {
                if (minute > t.minute )
                {
                  cout << "\nT1 > T2";
                }else if (minute == t.minute )
                     {
                        if(seconds > t.seconds)
                        {
                            cout <<"\nT1 > T2 ";
                        }else if(seconds == t.seconds) 
                             cout << "\nT1 = T2 ";
                        else cout <<"\nT2 > T1";
                     }
                else cout <<"\nT2 > T1";
          }
  else cout <<"\nT2 > T1";    
}


int main()
{
      Time a(10,23,16);
      Time b(10,23,17);
      cout<<"-----------------------------------------------\n";
      cout<< "The first time : ";
      a.Display();
      cout<< "The second time : ";
      b.Display();
      cout<<"-----------------------------------------------\n";
      Time res = a.Add(b);
      cout <<"Summation time : ";
      res.Display();
      Time result = a.Sub(b);
      cout <<"Subtraction time : ";
      result.Display();
      cout<<"-----------------------------------------------\n";
      cout <<"Comparison time: ";
      a.Cmp(b);

      return 0;
    

}