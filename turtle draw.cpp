#include <iostream>
#include <math.h>
using namespace std;

// the turtle class

class Turtle {
public:

float x, y;

Turtle(){
 
 x = 0; // this is the starting point for the x
 y = 0; // this is the starting point for the y
 mUx = 1;
 mUy = 0;
 
 }

void move(float ds){
	x += mUx * ds;
	y += mUy * ds;

}

void turn(float ang){
	float ux = mUx;
	float uy = mUy;
	mUx = ux * cos(ang) - uy * sin(ang);
	mUy = uy * cos(ang) + ux * sin(ang);
	

}

private: 
	// we make the unit vector private because we provide
	// a sperate interface for changing them
	float mUx, mUy;
		
};


int main(){

Turtle t;

char myresponse; // I use here char because i want to write a command and not type an int

std::cout << "your turtle just woke up at " << t.x << "," << t.y << " what should it do?" << std::endl;

do
{

cin >> myresponse;

// Here I will use conditionals

if (myresponse == 'l')
{
t.turn(M_PI/2);
std::cout << "the turtle turns left and stays at " << t.x << ", " <<t.y << std::endl;
} 

else if (myresponse == 'r')
{
t.turn(M_PI/-2); // I divide with -2 because the calculation t.turn(M_PI/-2); turns
				 // the angle left by default. To turn the angle right I divide with -2 
std::cout << "the turtle turns right and stays at " << t.x << ", " <<t.y << std::endl;
}

else if (myresponse == 'f')
{
t.move(1); 
std::cout << "the turtle steps forward and stops at " << t.x << ", " <<t.y << std::endl;
}

else if (myresponse == 'b')
{
t.move(-1); //forward means to move along the x-axis, so to move back I need to put -1
std::cout << "the turtle moves backwards and stops at " << t.x << ", " <<t.y << std::endl;
}

else if (myresponse == 's')
{

	std::cout << "the turtle stops to draw a square" << std::endl; 
	for(int i=0;i<4;++i){
 	std::cout << t.x << ", " <<t.y << std::endl;
 	t.move(5); // we put 1 here "optional" this is ds
 	t.turn(M_PI/2); // why 4, because 360 divided with 4 is 90
 	}	
	std::cout << "done drawing" << t.x << ", " << t.y << std::endl;
} 

}while( myresponse != 'Q' );

}