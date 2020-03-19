#include<iostream>
using namespace std;

int main()
{int n=5;
	
for(int i=1,k=0,m=1;i<=n;i++,k=0,m++)
{
	for(int j=1;j<=n-i;j++)
	{
	cout<<" ";
	}
	while(k!=2*i-1)
	{if(m==i||m==2*i-1)
	{cout<<i;
	k++;
	}
	else
		{cout<<0;
			k++;}
	}
	cout<<endl;
}
return 0;	
}