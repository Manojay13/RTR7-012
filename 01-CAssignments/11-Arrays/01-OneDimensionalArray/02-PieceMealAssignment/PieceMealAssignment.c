#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'
int main(void)
{
	//variable declarations
	int iArrayOne_mk[10];
	int iArrayTwo_mk[10];

	//code

	// ****** iArrayOne_mk[] ******
	iArrayOne_mk[0] = 3;
	iArrayOne_mk[1] = 6;
	iArrayOne_mk[2] = 9;
	iArrayOne_mk[3] = 12;
	iArrayOne_mk[4] = 15;
	iArrayOne_mk[5] = 18;
	iArrayOne_mk[6] = 21;
	iArrayOne_mk[7] = 24;
	iArrayOne_mk[8] = 27;
	iArrayOne_mk[9] = 30;

	printf("\n\n");
	printf("Piece-meal (Hard-coded) Assignment And Display Of Elements to Array 'iArrayOne_mk[]': \n\n");

	printf("1st Element Of Array 'iArrayOne_mk[]' Or Element At 0th Index Of Array 'iArrayOne_mk[]' = %d\n", iArrayOne_mk[0]);
	printf("2nd Element Of Array 'iArrayOne_mk[]' Or Element At 1st Index Of Array 'iArrayOne_mk[]' = %d\n", iArrayOne_mk[1]);
	printf("3rd Element Of Array 'iArrayOne_mk[]' Or Element At 2nd Index Of Array 'iArrayOne_mk[]' = %d\n", iArrayOne_mk[2]);
	printf("4th Element Of Array 'iArrayOne_mk[]' Or Element At 3rd Index Of Array 'iArrayOne_mk[]' = %d\n", iArrayOne_mk[3]);
	printf("5th Element Of Array 'iArrayOne_mk[]' Or Element At 4th Index Of Array 'iArrayOne_mk[]' = %d\n", iArrayOne_mk[4]);
	printf("6th Element Of Array 'iArrayOne_mk[]' Or Element At 5th Index Of Array 'iArrayOne_mk[]' = %d\n", iArrayOne_mk[5]);
	printf("7th Element Of Array 'iArrayOne_mk[]' Or Element At 6th Index Of Array 'iArrayOne_mk[]' = %d\n", iArrayOne_mk[6]);
	printf("8th Element Of Array 'iArrayOne_mk[]' Or Element At 7th Index Of Array 'iArrayOne_mk[]' = %d\n", iArrayOne_mk[7]);
	printf("9th Element Of Array 'iArrayOne_mk[]' Or Element At 8th Index Of Array 'iArrayOne_mk[]' = %d\n", iArrayOne_mk[8]);
	printf("10th Element Of Array 'iArrayOne_mk[]' Or Element At 9th Index Of Array 'iArrayOne_mk[]' = %d\n\n", iArrayOne_mk[9]);

	// ****** iArrayTwo_mk[] ******
	printf("\n\n");

	printf("Enter 1st Element Of Array 'iArrayTwo_mk[]' : ");
	scanf("%d", &iArrayTwo_mk[0]);
	printf("Enter 2nd Element Of Array 'iArrayTwo_mk[]' : ");
	scanf("%d", &iArrayTwo_mk[1]);
	printf("Enter 3rd Element Of Array 'iArrayTwo_mk[]' : ");
	scanf("%d", &iArrayTwo_mk[2]);
	printf("Enter 4th Element Of Array 'iArrayTwo_mk[]' : ");
	scanf("%d", &iArrayTwo_mk[3]);
	printf("Enter 5th Element Of Array 'iArrayTwo_mk[]' : ");
	scanf("%d", &iArrayTwo_mk[4]);
	printf("Enter 6th Element Of Array 'iArrayTwo_mk[]' : ");
	scanf("%d", &iArrayTwo_mk[5]);
	printf("Enter 7th Element Of Array 'iArrayTwo_mk[]' : ");
	scanf("%d", &iArrayTwo_mk[6]);
	printf("Enter 8th Element Of Array 'iArrayTwo_mk[]' : ");
	scanf("%d", &iArrayTwo_mk[7]);
	printf("Enter 9th Element Of Array 'iArrayTwo_mk[]' : ");
	scanf("%d", &iArrayTwo_mk[8]);
	printf("Enter 10th Element Of Array 'iArrayTwo_mk[]' : ");
	scanf("%d", &iArrayTwo_mk[9]);

	printf("\n\n");
	printf("Piece-meal (User Input) Assignment And Display Of Elements to Array 'iArrayTwo_mk[]' : \n\n");

	printf("1st Element Of Array 'iArrayTwo_mk[]' Or Element At 0th Index Of Array 'iArrayTwo_mk[]' = %d\n", iArrayTwo_mk[0]);
	printf("2nd Element Of Array 'iArrayTwo_mk[]' Or Element At 1st Index Of Array 'iArrayTwo_mk[]' = %d\n", iArrayTwo_mk[1]);
	printf("3rd Element Of Array 'iArrayTwo_mk[]' Or Element At 2nd Index Of Array 'iArrayTwo_mk[]' = %d\n", iArrayTwo_mk[2]);
	printf("4th Element Of Array 'iArrayTwo_mk[]' Or Element At 3rd Index Of Array 'iArrayTwo_mk[]' = %d\n", iArrayTwo_mk[3]);
	printf("5th Element Of Array 'iArrayTwo_mk[]' Or Element At 4th Index Of Array 'iArrayTwo_mk[]' = %d\n", iArrayTwo_mk[4]);
	printf("6th Element Of Array 'iArrayTwo_mk[]' Or Element At 5th Index Of Array 'iArrayTwo_mk[]' = %d\n", iArrayTwo_mk[5]);
	printf("7th Element Of Array 'iArrayTwo_mk[]' Or Element At 6th Index Of Array 'iArrayTwo_mk[]' = %d\n", iArrayTwo_mk[6]);
	printf("8th Element Of Array 'iArrayTwo_mk[]' Or Element At 7th Index Of Array 'iArrayTwo_mk[]' = %d\n", iArrayTwo_mk[7]);
	printf("9th Element Of Array 'iArrayTwo_mk[]' Or Element At 8th Index Of Array 'iArrayTwo_mk[]' = %d\n", iArrayTwo_mk[8]);
	printf("10th Element Of Array 'iArrayTwo_mk[]' Or Element At 9th Index Of Array 'iArrayTwo_mk[]' = %d\n\n", iArrayTwo_mk[9]);

	return(0);
}
