#include<iostream>
using namespace std;
int findprime(int num)
{
int c=0;
for(int i=1;i<=num;i++)
{
if(num%i==0)
c=c+1;
}
if(c==2)
return 0;
else
return 1;
}

int main()
{
int num;
cout<<"enter number:";
cin>>num;
p=findprime(num);
if(p==0)
cout<<"its a prime number";
else
cout<<"its not a prime number";
}
