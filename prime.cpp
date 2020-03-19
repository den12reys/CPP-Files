#include<iostream>

using namespace std;

int main()
{
int x,count=0;
cin>>x;
for(int i=2;i<x;i++)
{
if((x%i)==0)
count=1;
}
 if (count==0)
cout<<"The no. is prime";
else
	cout<<"The no. isnt a prime";
return 0;
}