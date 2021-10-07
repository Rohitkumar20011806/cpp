#include<iostream>
using namespace std;
int main()
{
string s1="abc";
string s2="ABC";

int x=s1.compare(s2);
if(x==0)
	cout<<"EQUAL"<<endl;
else if(x>0)
	cout<<"LARGER "<<endl;
else
	cout<<"SMALLER"<<endl;
return 0;
}
