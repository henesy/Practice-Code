#include <stdio.h>

/* count blanks, tabs, and newlines */
/* '\040' is a space in ASCII represented in octal */
main()
{
	int c, b, t, nl;

	b = 0, t = 0, nl = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\040')
			b+=1;
		else if (c == '\t')
			t+=1;
		else if (c == '\n')
			nl+=1;
	}
	printf("Blanks: %d\nTabs: %d\nLines: %d\n", b, t, nl);
}
