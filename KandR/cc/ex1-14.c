#include <stdio.h>
#define ASCII_SIZE 127

/* prints histogram of frequencies of different characters in its input */
main()
{
	int c, i;
	int nchar[ASCII_SIZE];

	for (i = 0; i < ASCII_SIZE; ++i)
		nchar[i] = 0;

	while ((c = getchar()) != EOF)
			++nchar[c];
	
	printf("Dec Count\n");
	for (i = 0; i < ASCII_SIZE; ++i)
		if(nchar[i] > 0)
		{
			/* 127 is width 3, adjust to taste */
			printf("%-3d ", i);
			int k;
			for(k = 0; k < nchar[i]; k++)
				putchar('|');
			putchar('\n');
		}

}
