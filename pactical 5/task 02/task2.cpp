#include<iostream>
using namespace std;

void char_value ( char  a)
{
cout<<"value of char is "<<a<<endl;
}
void bool_value(bool a)
{
cout<<"value of bool is "<<a<<endl;
}
void short_value(short a)
{
cout<<"value of short is "<<a<<endl;
}
void int_value(int a){
cout<<"value of int is "<<a<<endl;
}
void long_value(long a){
cout<<"value of long is" <<a<<endl;
}
void float_value(float a){
cout<<"value of float is "<<a<<endl;
}
void double_value(double a){
cout<<"value of double is "<<a<<endl;
}
void longdouble_value(long double a){
cout<<"value of longdouble is "<<a<<endl;
}
void widechar_value(wchar_t a ){
cout<<"value of widechar is"<<a<<endl;
}
int  main ()
{
char_value('A');
bool_value(1);
short_value(2);
 int_value(3457);
 long_value(521);
 float_value(1.234f);
double_value(4567329876);
 longdouble_value(235467845435667456);
widechar_value(876);
return 0;
}






















