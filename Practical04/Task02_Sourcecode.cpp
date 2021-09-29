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
using namespace first;
using namespace second;
int main()
{
float result,a,b;
cout<<"Enter two numbers";
cin>>a>>b;
result=add(a,b);
cout<<result<<endl;
return 0;
}
