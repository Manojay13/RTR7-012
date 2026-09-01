#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

struct MyPoint_mk
{
	int x_mk;
	int y_mk;
};

struct Rectangle_mk
{
	struct MyPoint_mk point_01_mk;
	struct MyPoint_mk point_02_mk;
};

struct Rectangle_mk rect_mk = { {2, 3}, {5, 6} };

int main(void)
{
	//variable declarations
	int length_mk, breadth_mk, area_mk;

	//code
	length_mk = rect_mk.point_02_mk.y_mk - rect_mk.point_01_mk.y_mk;
	if (length_mk < 0)
	{
		length_mk = length_mk * -1;
	}

	breadth_mk = rect_mk.point_02_mk.x_mk - rect_mk.point_01_mk.x_mk;
	if (breadth_mk < 0)
	{
		breadth_mk = breadth_mk * -1;
	}

	area_mk = length_mk * breadth_mk;

	printf("\n\n");
	printf("Length Of Rectangle = %d\n\n", length_mk);
	printf("Breadth Of Rectangle = %d\n\n", breadth_mk);
	printf("Area Of Rectangle = %d\n\n", area_mk);

	exit(EXIT_SUCCESS);
}
