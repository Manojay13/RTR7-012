#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

// DEFINING STRUCT
struct MyPoint_mk
{
	int x_mk;
	int y_mk;
} point_A_mk, point_B_mk, point_C_mk, point_D_mk, point_E_mk; //Declaring 5 struct variables of type 'struct MyPoint_mk' globally...

int main(void)
{
	//code
	//Assigning Data Values To The Data Members Of 'struct MyPoint_mk' variable 'point_A_mk'
	point_A_mk.x_mk = 3;
	point_A_mk.y_mk = 0;

	//Assigning Data Values To The Data Members Of 'struct MyPoint_mk' variable 'point_B_mk'
	point_B_mk.x_mk = 1;
	point_B_mk.y_mk = 2;

	//Assigning Data Values To The Data Members Of 'struct MyPoint_mk' variable 'point_C_mk'
	point_C_mk.x_mk = 9;
	point_C_mk.y_mk = 6;

	//Assigning Data Values To The Data Members Of 'struct MyPoint_mk' variable 'point_D_mk'
	point_D_mk.x_mk = 8;
	point_D_mk.y_mk = 2;

	//Assigning Data Values To The Data Members Of 'struct MyPoint_mk' variable 'point_E_mk'
	point_E_mk.x_mk = 11;
	point_E_mk.y_mk = 8;

	//Displaying Values Of The Data Members Of 'struct MyPoint_mk' (all variables)
	printf("\n\n");
	printf("Co-ordinates (x_mk, y_mk) Of Point 'A_mk' Are : (%d, %d)\n\n", point_A_mk.x_mk, point_A_mk.y_mk);
	printf("Co-ordinates (x_mk, y_mk) Of Point 'B_mk' Are : (%d, %d)\n\n", point_B_mk.x_mk, point_B_mk.y_mk);
	printf("Co-ordinates (x_mk, y_mk) Of Point 'C_mk' Are : (%d, %d)\n\n", point_C_mk.x_mk, point_C_mk.y_mk);
	printf("Co-ordinates (x_mk, y_mk) Of Point 'D_mk' Are : (%d, %d)\n\n", point_D_mk.x_mk, point_D_mk.y_mk);
	printf("Co-ordinates (x_mk, y_mk) Of Point 'E_mk' Are : (%d, %d)\n\n", point_E_mk.x_mk, point_E_mk.y_mk);

	exit(EXIT_SUCCESS);
}
