#include <stdio.h>

int main(void)
{
	//variable declarations
	int length_mk, breadth_mk, area_mk;

	struct Rectangle_mk
	{
		struct MyPoint_mk
		{
			int x_mk;
			int y_mk;
		} point_01_mk, point_02_mk;

	} rect_mk;

	//code
	printf("\n\n");
	printf("Enter Leftmost X-Coordinate Of Rectangle : ");
	scanf("%d", &rect_mk.point_01_mk.x_mk);

	printf("\n\n");
	printf("Enter Bottommost Y-Coordinate Of Rectangle : ");
	scanf("%d", &rect_mk.point_01_mk.y_mk);

	printf("\n\n");
	printf("Enter Rightmost X-Coordinate Of Rectangle : ");
	scanf("%d", &rect_mk.point_02_mk.x_mk);

	printf("\n\n");
	printf("Enter Topmost Y-Coordinate Of Rectangle : ");
	scanf("%d", &rect_mk.point_02_mk.y_mk);

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

	return(0);
}
