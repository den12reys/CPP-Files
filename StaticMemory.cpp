#include<iostream>
using namespace std;

class Myclass
{
	int m,n ;
public:
	Myclass(int x,int y)
	{m=x;
		n=y;}
	void display()
	{cout<<m+n;}
		
};

int main()
{
	Myclass M1(2,3);
	M1.display();
return 0;}