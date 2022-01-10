#include<iostream>
using namespace std;
class student
{
	public:
	string name;
	int cls;
	char sec;
	int rollno;
	void getdata(string s,int c,char sec,int r)
	{
		name=s;
		cls=c;
		this->sec=sec;
		rollno=r;
	}
};
int main()
{
	student s1;
	s1.getdata("khushi",10,'C',31);
	student *p;
	p=&s1;
	cout<<p->name<<endl;
	cout<<p->cls<<endl;
	cout<<p->sec<<endl;
	cout<<p->rollno<<endl;
}
 
