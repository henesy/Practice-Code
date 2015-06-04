#include <stdio.h>

/* copies i/o, replaces tabs w/ \t, backspaces w/ \b and backslashes with \\ */
main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			putchar('\134');
			putchar('t');
		}
		else if (c == '\b')
		{
			putchar('\134');
			putchar('b');
		}
		else if (c == '\\')
		{
			putchar('\134');
			putchar('\134');
		}
		else
			putchar(c);
	}
}
