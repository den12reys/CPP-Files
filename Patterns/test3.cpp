#include<iostream>

using namespace std;

int main()
{
	int n;
cin>>n;
for(int i=1,k=0,m=1;i<=n;i++,k=0,m=1)
{
	for(int j=1;j<=n-i;j++)
	{cout<<" ";}
	while(k!=2*i-1)
	{if(m%2==0)
	{
     cout<<" ";
     k++;
     m++;
	}
	else
	{
cout<<"*";
k++;
m++;
	}
	}
	cout<<endl;
	
}
return 0;
}

