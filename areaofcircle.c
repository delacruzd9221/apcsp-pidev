#include <stdio.h>
#include <math.h>

float areaOfCircle(float radius)
{
	return radius * radius * M_PI;
}

int main()
{

float a;
float i;

for (i = 3.5; i <= 12.5; i++)
{
	a = areaOfCircle(i);
	printf("The area of the circle ith radius %f is %f\n", i, a);
}

}
