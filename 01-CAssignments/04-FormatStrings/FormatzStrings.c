#include<stdio.h>

int main(void)
{
	//code
	printf("\n\n");
	printf("**********************************************************************"
		"***************");
	printf("\n\n");

	printf("Hello String World!!!");

	int a_mk = 13;
	printf("Integer value of 'a_mk' =%d\n",a_mk);
	printf("Octal value of 'a_mk' = %o\n",a_mk);
	printf("Integer Hexadecimal Value Of 'a' (Hexadecimal Letters In Lower "
	   "Case)=%x\n",a_mk);
	printf("Integer Hexadecimal Value Of 'a' (Hexadecimal Letters In Upper "
	   "Case)=%X\n",a_mk);

	char ch_mk ='A';
	printf("Character ch_mk = %c\n",ch_mk);
	char str_mk[] = "Astromedicomp's Real Time Rendering batch";
	printf("String str_mk=%s\n\n",str_mk);


	long num_mk = 3012995L;
	printf("Long Integer=%ld\n\n",num_mk);


	unsigned int b_mk = 7;
	printf("Unsigned Integer 'b_mk' = %u\n\n",b_mk);

	float f_num_mk =3012.1995f;
	printf("Floating point number with Just %%f 'f_num_mk' = %f\n",f_num_mk);
	printf("Floating Point Numbar With %%4.2f 'f_num_mk' = %4.2f\n",f_num_mk);
	printf("Floating Point Number With %%6.5f 'f_num_mk'= %6.5f\n",f_num_mk);
	/*%06.5f: Minimum width is 6. Your number needs 10 characters. 
	 * C prints 3012.19946*/
	printf("Floating Point Number With %%06.5f 'f_num_mk' = %06.5f\n",f_num_mk);
	/*%012.5f: Minimum width is 12. Your number needs 10 characters. 
	 * C adds 2 leading zeros to hit the target width of 12. It prints 003012.19946		*/
	printf("Floating Point Number With %%012.5f 'f_num_mk' = %012.5f\n",f_num_mk);

	
	double d_pi_mk = 3.1415926535897923846;
	/*%g is the General option that combines both, 
	 * picking the shortest and cleanest representation for any given number*/
	printf("Double Precision Floating point Number without Exponential = %g\n",d_pi_mk);
	printf("Double Precision Floating Point Number Without Exponential = %.2g\n",d_pi_mk);
	printf("Double Preciosion Floating Point Number with Exponential (Lower"
	" Case)=%e\n",d_pi_mk);
	printf("Double Preciosion Floating Point Number with Exponential (Upper"
	" Case)=%E\n",d_pi_mk);
	printf("Double Preciosion Hexadecimal Number =%x\n",d_pi_mk);

	/*"Address-style" format: The output layout starts with 0x, making it look
	 *  exactly like a memory address.
	 *  "Alpha-hex": The letter A is the very 
	 *  first alphabetical character used in the hexadecimal numbering system 
	 *  (A through F).
	 */

	printf("Double Hexadecimal Value Of 'd_pi_mk' (Hexadecimal Letters In Lower"
	"Case) =%a\n", d_pi_mk);
	printf("Double Hexadecimal Value Of 'd_pi_mk' (Hexadecimal Letters In Upper"
	"Case) = %A\n\n", d_pi_mk);


	printf("**********************************************************************"
	"***************\n");
	printf("\n\n");

	return(0);

}
