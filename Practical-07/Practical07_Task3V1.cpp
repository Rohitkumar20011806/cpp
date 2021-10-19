// Task 3 Version 1  - To print Matrix as 111 222 333 Using Last element of Row 
#include<iostream>
#define MAX 3 
using namespace std ;
int main()
{
  int arr[MAX][MAX] , i , j ;
  cout<<"Enter Matrix "<<endl;
  for(i=0;i<MAX;i++)
  {
    for(j=0;j<MAX;j++)
    {
      cin>>arr[i][j] ;
    }
  }
  cout<<"Input Matrix is "<<endl;
  for(i=0;i<MAX;i++)
  {
    for(j=0;j<MAX;j++)
    {
      cout<<arr[i][j] << " " ;
    }
    cout<<endl ;
  }
  cout<<"Output Matrix is "<<endl;
  for(i=0;i<MAX;i++)
  {
    for(j=0;j<MAX;j++)
    {
      cout<<arr[i][MAX-1]/3 << " " ;
    }
    cout<<endl ;
  }
  return 0 ;
}
