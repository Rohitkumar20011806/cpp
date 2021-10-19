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
      cout<<10-arr[i][j] << " " ;
    }
    cout<<endl ;
  }
  return 0 ;
}
