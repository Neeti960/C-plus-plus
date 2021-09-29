#include<iostream>
using namespace std;
 namespace first{
 

int add(int a,int b)
{
return (a+b);
}
}
namespace second{

float add (float a,float b)
{
return (a+b);
}
}

int main()
{
float a,b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;

cout<<first::add(a,b)<<endl;
cout<<second::add(a,b);
return 0;
}
