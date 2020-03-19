#include<iostream>

using namespace std;

int main()
{   int n;
	cin>>n;
	for(int i=1,k=0;i<=n;i++,k=0)
	{
		for(int j=1;j<=n-i;j++)
	{
	cout<<" ";
	}
	while(k!=i)
	{
     cout<<"*";
     k++;
	}
	cout<<endl;
	}
	for(int i=1,k=0;i<=n;i++,k=0)
	{
		while(k!=i)
	{
     cout<<" ";
     k++;
	}
		for(int j=1;j<=n-i;j++)
	{
	cout<<"*";
	}
	
	
	cout<<endl;
	}
	return 0;
}