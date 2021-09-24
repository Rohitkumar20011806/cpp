#include<iostream>
using namespace std ;
int main ()
{
int i,n,count=0;
cout<<"enter the number to check the number is prime or not prime ";
cin>>n;
for(i=1;i<=n;i++)
{
if(n%i==0){
count++;
}
}
if(count>2){
cout<<"Number  is not prime";
}
else{
cout<<"Number is  prime";
}
return 0;
}




