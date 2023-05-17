#include<iostream>
#include<string>
using namespace std;
class point // The declaration of the functions in the class ; The implementation of the functions in the .cpp file of the class
{
public:
	point();
	point(float , float );

	void setXvalue(float);
	float getXvalue();

	void setYvalue(float );
	float getYvalue();

	void display();

	float  closer (point* , point* , point );
	point  Center(point* , int );
private:
	float x;
	float y;

};
