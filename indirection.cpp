#include<iostream>

using namespace std;

int main()
{
	int x=5;
	int *p=&x;
	int **q=&p;


cout<<p<<" "<<*p<<" "<<q<<" "<<*q<<" "<<**q;
return 0;}