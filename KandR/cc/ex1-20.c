#include <stdio.h>
#define TABSTOP 4

/* detab: replaces tabs in the input with spaces */
main()
{
	int c;

	c = 0;
	while((c = getchar()) != EOF)
	{
		if(c == '\t')
		{
			int i;
			for(i = 0; i < TABSTOP; i++)
				putchar(' ');
		}
		else
			putchar(c);
	}
}
