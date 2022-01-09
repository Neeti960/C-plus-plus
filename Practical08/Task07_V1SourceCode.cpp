#include<iostream>
using namespace std;

void swap(int a,int b)
{
	int t=a;
	a=b;
	b=t;
	cout<<"\nAfter Swapping\na & b: "<<a<<" "<<b;
}

int main()
{
	int a,b;
	cout<< "Enter the values of a and b \n";
	cin>>a>>b;
	cout<<"Before Swapping\na & b: "<<a<<" "<<b<<endl;;
	swap(a,b);
	
}
