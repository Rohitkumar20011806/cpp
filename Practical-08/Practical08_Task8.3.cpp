#include<iostream>
using namespace std;
int main()
{
   int a=10;
   int *p;
   p=&a;
   int **q;
   q=&p;
   a++;
   cout<<"Value of variable:"<<a<<endl;
   cout<<"Value at *p:"<<*p<<endl;
   cout<<"Value at **q:"<<**q<<endl;
   return 0;
}
   
