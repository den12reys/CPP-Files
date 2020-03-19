#include<iostream>

using namespace std;


void get(int *p)
{*p=*p+1;}
int main()
{
	int a=10;
	get(&a);
	cout<<"a:"<<a;
	return 0;

}