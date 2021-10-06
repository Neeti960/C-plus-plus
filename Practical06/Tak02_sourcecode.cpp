#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int i;
char string[80];
cout<<"Enter string: "<<endl;
cin.getline(string,80);
for(int i=0;string[i] != '\0'; i++);
for(int j=0; (j < i/2) && (string[j] == string[i-j-1]);j++);
if(i == i/2)
cout<<"Palindrome"<<endl;
else
cout<<"Not a palindrome: "<<endl;

return 0;
}
