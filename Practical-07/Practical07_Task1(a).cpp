#include<iostream>
using namespace std;
int main()
{
      int date,month ,year;
      int c;
      cout<<" 1.Year\n 2.Month\n 3.Date\n"<<endl;
      cout<<"Enter your choice:";
      cin>>c;
      switch(c)
      while(c<4)
      {
          case 1 : cout<<"The current year is 2021"<<endl;
                         break;
                         
          case 2 : cout<<"The current month is October."<<endl;
                         break;
                         
          case 3 : cout<<"The current date is 13."<<endl;
                         break;
                         
          default: cout<<"NOT AVAILABLE"<<endl;
                         break; 
        }
        
        return 0;
}        

