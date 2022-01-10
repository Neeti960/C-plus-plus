#include <iostream>
 using namespace std;
class college {
   public:
    string name; 
    int roll_no;
};
struct student
{
  string name;
  int roll_no;
};
int main()
{
  college t;
  struct student s1;
  t.name="vishall";// compiler error because x is private
  t.roll_no = 50; //error concept of data hiding
  s1.name="ansari";
  s1.roll_no=21;
  cout<<t.name<<endl;
  cout<<t.roll_no<<endl;
  cout<<s1.name<<endl;
  cout<<s1.roll_no<<endl;
  getchar();
  return 0;
}




