#include <stdio.h>

/* copies input, one word per line */
main()
{
	int c, w;

	c = w = 0;
	while((c = getchar()) != EOF)
	{
		if(c == '\n' || c == '\040' || c == '\t')
		{
			if(w == 1)
			{
				putchar('\n');
			}
			w = 0;
		}
		else
		{
			w = 1;
			putchar(c);
		}
	}	
}
