#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int *p;
	int **q;
	p=&a;
	q=&p;
	cout<<*p<<endl;;
	cout<<**q<<endl;;
	**q=198;
	cout<<a;
	return 0;
}
 

    © 2022 GitHub, Inc.

    T
