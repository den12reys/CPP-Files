#include<iostream>
using namespace std;

int main()
{int a=10;
int*p;
p=&a;
cout<<"The value at a:"<<*p<<"\n";
cout<<"The adress at a:"<<p<<"\n";
int **q;
q=&p;
cout<<"The value at a:"<<*(*q)<<"\n";
cout<<"The adress at a:"<<(*q)<<"\n";
int *m;
m=p;
cout<<m<<endl;;
int **z;
z
cout<<"kk"<<*z;


return 0;}