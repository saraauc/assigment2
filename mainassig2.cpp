#include"point.h"
#include<iostream>

int main()
{
	srand(time(NULL));		// Using srand to create random points
	point* cluster_A;	   //The pointer to the dynamic array
	point* cluster_B;
	point* random;

	cluster_A = new point[200]; // Generating the cluster A (Dynamic array of type point)
	for (int i = 0; i < 200; i++)
	{	
		cluster_A[i].setXvalue((rand() % 18) + 71);
		cluster_A[i].setYvalue((rand() % 18) + 71);
	}

	cluster_B = new point[200];	// Generating the cluster B (Dynamic array of type point)
	for (int i = 0; i < 200; i++)
	{
		cluster_B[i].setXvalue((rand()  %19) + 21);
		cluster_B[i].setYvalue((rand() % 19) + 21);
	}

	random = new point[20];
	for (int i = 0; i < 20; i++)
	{
		random[i].setXvalue((rand() % 95)  + 4);
		random[i].setYvalue((rand() % 95)  + 4);
	}

	for (int i = 0; i < 20; i++)
	{
		cout << random[i].closer( cluster_A , cluster_B , random[i]); //Calling the closer function to determine if each point is closer to cluster A or B 
	}
	return 0;
}

