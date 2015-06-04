#include <stdio.h>

/* copy input to output, replacing strings of 1≤ ␣ with one ␣ */
main()
{
	int c, bl;

	c = 0, bl = 0;
	while ((c = getchar()) != EOF)
	{
		if (c != '\040')
		{
			bl = 0;
			putchar(c);
		}
		else if (c == '\040')
		{
			if (bl == 0)
			{
				bl = 1;
				putchar(c);
			}
			else if (bl > 1)
			{
				bl += 1;
			}
		}
	}
}
