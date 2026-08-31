#include <stdio.h>
#include <string.h> // Required for strcpy()

int main(void)
{
	//DEFINING STRUCT
	struct MyPoint_mk
	{
		int x_mk;
		int y_mk;
	} point_mk; //declaring a single variable of type 'struct MyPoint_mk' locally...

	//DEFINING STRUCT
	struct MyPointProperties_mk
	{
		int quadrant_mk;
		char axis_location_mk[10];
	} point_properties_mk; //declaring a single variable of type 'struct MyPointProperties_mk' locally...

	//code
	//User Input For The Data Members Of 'struct MyPoint_mk' variable 'point_mk'
	printf("\n\n");
	printf("Enter X-Coordinate For A Point: ");
	scanf("%d", &point_mk.x_mk);

	printf("Enter Y-Coordinate For A Point: ");
	scanf("%d", &point_mk.y_mk);

	printf("\n\n");
	printf("Point Co-ordinates (x_mk, y_mk) Are : (%d, %d) !!!\n\n", point_mk.x_mk, point_mk.y_mk);

	if (point_mk.x_mk == 0 && point_mk.y_mk == 0)
		printf("The Point Is The Origin (%d, %d) !!!\n", point_mk.x_mk, point_mk.y_mk);
	else // Atleast One of the two values (either 'X' or 'Y' or BOTH) is a non-zero value...
	{
		if (point_mk.x_mk == 0) // If 'X' IS ZERO...OBVIOUSLY 'Y' IS THE NON-ZERO VALUE
		{
			if (point_mk.y_mk < 0) // If 'Y' IS -ve
				strcpy(point_properties_mk.axis_location_mk, "Negative Y");

			if (point_mk.y_mk > 0) // If 'Y' IS +ve
				strcpy(point_properties_mk.axis_location_mk, "Positive Y");

			point_properties_mk.quadrant_mk = 0; // A Point Lying On Any Of The Co-ordinate Axes Is NOT A Part Of ANY Quadrant...
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties_mk.axis_location_mk);
		}
		else if (point_mk.y_mk == 0) // If 'Y' IS ZERO...OBVIOUSLY 'X' IS THE NON-ZERO VALUE
		{
			if (point_mk.x_mk < 0) // If 'X' IS -ve
				strcpy(point_properties_mk.axis_location_mk, "Negative X");

			if (point_mk.x_mk > 0) // If 'X' IS +ve
				strcpy(point_properties_mk.axis_location_mk, "Positive X");

			point_properties_mk.quadrant_mk = 0; // A Point Lying On Any Of The Co-ordinate Axes Is NOT A Part Of ANY Quadrant...
			printf("The Point Lies On The %s Axis !!!\n\n", point_properties_mk.axis_location_mk);
		}
		else // BOTH 'X' AND 'Y' ARE NON-ZERO
		{
			point_properties_mk.axis_location_mk[0] = '\0'; // A Point Lying In ANY Of The 4 Quadrants Cannot Be Lying On Any Of The Co-ordinate Axes...

			if (point_mk.x_mk > 0 && point_mk.y_mk > 0) // 'X' IS +ve AND 'Y' IS +ve
				point_properties_mk.quadrant_mk = 1;
			else if (point_mk.x_mk < 0 && point_mk.y_mk > 0) // 'X' IS -ve AND 'Y' IS +ve
				point_properties_mk.quadrant_mk = 2;
			else if (point_mk.x_mk < 0 && point_mk.y_mk < 0) // 'X' IS -ve AND 'Y' IS -ve
				point_properties_mk.quadrant_mk = 3;
			else // 'X' IS +ve AND 'Y' IS -ve
				point_properties_mk.quadrant_mk = 4;

			printf("The Point Lies In Quadrant Number %d !!!\n\n", point_properties_mk.quadrant_mk);
		}
	}

	return(0);
}
