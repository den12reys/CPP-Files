#include<iostream>
using namespace std;



void rev(int n)
{int k;
	if(n==0)
		return;
	else
	{k=n%10;
		cout<<k;
		rev(n/10);
	}
}

int main()
{

rev(310);
return 0;}