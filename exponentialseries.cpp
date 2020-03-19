#include<iostream>
#include<cmath>
using namespace std;

int main()

{double x,d,y,e;
cin>>x;
for(int i=1; i<=15; i++){
	d=1;
	for(int j=1; j<=15; j++)
{
d=d*j;
}
 y=pow(x,i);
 e=e+y/d;
}
cout<<e+1;
return 0;
}


