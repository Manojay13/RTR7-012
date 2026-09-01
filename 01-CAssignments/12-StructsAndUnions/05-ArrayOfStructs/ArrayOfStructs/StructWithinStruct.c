#include <stdio.h> //'stdio.h' contains declaration of 'printf()'
#include <stdlib.h> //'stdilib.h' contains declaration of 'exit()'

struct MyNumber_mk
{
	int num_mk;
	int num_table_mk[10];
};

struct NumTables_mk
{
	struct MyNumber_mk n_mk;
};

int main(void)
{
	//variable declarations
	struct NumTables_mk tables_mk[10]; //an array of 10 'struct NumTables_mk'
	int i_mk, j_mk;

	//code
	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		tables_mk[i_mk].n_mk.num_mk = (i_mk + 1);
	}

	for (i_mk = 0; i_mk < 10; i_mk++)
	{
		printf("\n\n");
		printf("Table Of %d : \n\n", tables_mk[i_mk].n_mk.num_mk);
		for (j_mk = 0; j_mk < 10; j_mk++)
		{
			tables_mk[i_mk].n_mk.num_table_mk[j_mk] = tables_mk[i_mk].n_mk.num_mk * (j_mk + 1);
			printf("%d * %d = %d\n", tables_mk[i_mk].n_mk.num_mk, (j_mk + 1), tables_mk[i_mk].n_mk.num_table_mk[j_mk]);
		}
	}
	exit(EXIT_SUCCESS);
}
