/*Calculate the conversions*/
#include<stdio.h>
int main()
{
	float km, m, cm, f, in;
	printf("Enter distance in kilometer: ");
	scanf("\n %f", km);
	
	m = km * 1000;
	cm = km * 1000 * 100;
	f = km * 3280.84;
	in = km * 39370.08;
	
	printf("The distance in meters: %f\n", m);
	printf("The distance in centi-meter: %f\n", cm);
	printf("The distance in feets: %f\n", f);
	printf("The distance in inches: %f\n", in);
	
	return 0;
}
