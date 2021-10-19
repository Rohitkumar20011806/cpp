#include<iostream>
#include<ctime>
using namespace std ;
int main()
{
  int ch ;
  time_t current = time(0) ;
  
  char *dt = ctime(&current) ;
  cout<<"1. For Current Year "<<endl ;
  cout<<"2. For Current Month "<<endl ;
  cout<<"3. For Current Date "<<endl ;
  cout<<"4. For Current Day "<<endl ;
  cout<<"Enter Your Choice : ";
  cin>>ch ;
  switch(ch)
  {
    case 1 : cout<<"Current Year   is : " << dt <<endl;
      break ;
    case 2 : cout<<"Current Month  is : "<< dt <<endl;
      break ;
    case 3 : cout<<"Current Date   is : "<< dt <<endl;
      break ;
    case 4  : cout<<"Current Day    is : " << dt<<endl;
      break ;
    default : cout<<"!!! Invalid Choice !!!"<<endl ;
      break ;
  }
  return 0 ;
}
