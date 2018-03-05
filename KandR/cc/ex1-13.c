#include <stdio.h>

/* prints histogram of the lengths of words */
main()
{
	int c, w, l;

	c = w = l = 0;
	while((c = getchar()) != EOF)
	{
		if(c == '\n' || c == '\040' || c == '\t')
		{
			if(w == 1)
			{
				putchar('\n');
				int i;
				for(i = 0; i < l; i++)
					putchar('|');
				/* putchar('\n'); */
			}
			w = l = 0;
		}
		else
		{
			w = 1;
			/* putchar(c); */
			l++;
		}
	}	
}
