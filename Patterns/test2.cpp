#include<iostream>

using namespace std;

int main()
{   int n;
	cin>>n;
	for(int i=1,k=0;i<=n;i++,k=0)
	{
	while(k!=i-1)
	{
     cout<<" ";
     k++;
	}
	for(int j=0;j<=n-i;j++)
	{
	cout<<"*";
	}
	cout<<endl;
	}
	return 0;
}