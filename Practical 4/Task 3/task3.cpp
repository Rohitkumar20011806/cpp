#include<iostream>
using namespace std;
namespace first
{
	int sum(int a,int b)
	{
		return(a+b);
	}
}

namespace second
{
	float sum(float a,float b)
	{
		return(a+b);
	}
}


int main()
{
	
	cout<<"Sum of 2 and 3 is "<<sum(2,3)<<"\n";
	cout<<"Sum is 2.1 and 3.2 is "<<sum(2.1,3.2)<<"\n";
	cout<<"Sum of 2 and 3.2 is "<<sum(2,3.2)<<"\n";
	cout<<"Sum of 2.1 and 3 is "<<sum(2.1,3)<<"\n";

}

