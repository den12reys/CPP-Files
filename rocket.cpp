#include<iostream>

using namespace std;
class rocket
{public:
	int x=0,y=0;
	void change(int dis,char pos)
	{if(pos=='U')
		{y+=dis;}
		if(pos=='D')
			{y-=dis;}
		if(pos=='L')
			{x-=dis;}
		if(pos=='R')
			{x+=dis;}
	}
	void data()
	{cout<<"x:"<<x<<"y:"<<y;}

};
int main()
{ rocket R1;
	R1.change(1,'U');
	R1.data();

	return 0;
}