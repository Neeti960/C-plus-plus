#include<iostream>
using namespace std;
int main()
{
  int i,j,n;
  cout<<"enter number of lines";
  cin>>n;
  for(i =1;i<=n;i++)
  {
      for(j=1;j<=n;j++)
      {
          if(j>=(n+1)-i)
        cout<<"*";
        else
        cout<<" ";
      }
     cout<<endl;
   }
   return 0;
}
  
 
