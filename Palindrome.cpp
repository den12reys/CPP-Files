#include<iostream>
using namespace std;

int main()
{
	int m,n,rev=0,digit;
	cout<<"Enter no:";
	cin>>n;
	m=n;
	
			do{
				digit=n%10;
				rev=(rev*10)+digit;
				n=n/10;
			}
			while(n!=0);
				if(m==rev)
					cout<<"No. is a palindrome";
			else
				cout<<"It is not";
	

	
return 0;
}

