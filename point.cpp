#include "point.h"
#include<time.h>
#include<cstdlib>

point::point()//Default constructer
{
	x = 0;
	y = 0;
}

point::point(float tempx, float tempy) // Constructer that intializes both x and y
{
	x = tempx;
	y = tempy;
}
// setters and getters for x and y
void point::setXvalue(float x_public) 
{
	x = x_public;
}
float point::getXvalue()
{
	return x;
}
void point::setYvalue(float y_public)
{
	y = y_public;
}

float point::getYvalue()
{
	return y;
}
//Display function
void point::display()
{
	cout << "(" << x << "," << y << ")" << endl;
}

float point::closer(point* cluster_A, point* cluster_B, point p2)
{
	point center_A;
	point center_B;

	center_A = Center(cluster_A, 200); // storing the center of cluster a and b
	center_B = Center(cluster_B, 200);

	// evaluating the distance between the center of a cluster and a point
	float distance_A = (sqrt(((center_A.getXvalue() - p2.getXvalue()) * (center_A.getXvalue() - p2.getXvalue())) + ((center_A.getYvalue() - p2.getYvalue()) * (center_A.getYvalue() - p2.getYvalue()))));

	float distance_B = ((sqrt(((center_B.getXvalue() - p2.getXvalue()) * (center_B.getXvalue() - p2.getXvalue())) + ((center_B.getYvalue() - p2.getYvalue()) * (center_B.getYvalue() - p2.getYvalue())))));

	if (distance_A > distance_B) 
	{
		
		cout << " This point is closer to cluster B" << endl;
		return distance_B;
	}
	else
	{
		
		cout << " This point is closer to cluster A" << endl;
		return distance_A;
	}
}
// function to determine the center of an array
point point :: Center(point* c, int n)
{
	point centerJ;
	float sumX = 0;
	float sumY = 0;
	for (int i = 0; i < n; i++)
	{
		sumX = sumX + c[i].getXvalue();
		sumY = sumY + c[i].getYvalue();
	}
	centerJ.setXvalue(sumX / n);
	centerJ.setYvalue(sumY / n);

	return centerJ;
}



