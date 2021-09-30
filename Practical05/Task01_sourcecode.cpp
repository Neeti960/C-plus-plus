#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void char_function()
{
char a='K';
cout<<"THE CHARACTER IS :"<<a<<endl;
cout<<"The size of char data type is "<<sizeof(a)<<endl;
}
void bool_function()
{
bool b=true;
cout<<"THE BOOL IS "<<b<<endl;
cout<<"The size of bool data type is "<<sizeof(b)<<endl;
}
void short_function()
{
unsigned short c=6000;
cout<<"UNSIGNED SHORT IS "<<c<<endl;
cout<<"The size of unsigned short data type is "<<sizeof(c)<<endl;
}
void int_function()
{
int d=6;
cout<<"INTEGER IS "<<d<<endl;
cout<<"The size of int data type is "<<sizeof(d)<<endl;
}
void long_function()
{
unsigned long e=90000;
cout<<"THE LONG INTEGER IS "<<e<<endl;
cout<<"The size of unsigned long data type is "<<sizeof(e)<<endl;
}
void float_function()
{
float f=3.5647687981111;
cout<<"FLOAT VALUE IS "<<f<<endl;
cout<<"The size of float data type is "<<sizeof(f)<<endl;
}
void double_function()
{
 double g=6.7885366878;
cout<<" DOUBLE VALUE IS "<<g<<endl;
cout<<"The size of double data type is "<<sizeof(g)<<endl;
}
void longdouble_function()
{
long double h=8.6786786878;
cout<<"LONG DOUBLE VALUE IS "<<h<<endl;
cout<<"The size of long double data type is "<<sizeof(h)<<endl;
}
void wchar_t_function()
{
wchar_t i=L'V';
cout<<"WIDE CHAR VALUE IS "<<i<<endl;
cout<<"The size of wchar  data type is "<<sizeof(i)<<endl;
}
int main()
{
char_function();
bool_function();
short_function();
int_function();
long_function();
float_function();
double_function();
longdouble_function();
wchar_t_function();
return 0;
}
