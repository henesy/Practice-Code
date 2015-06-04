#include <stdio.h>
#include <stdlib.h>
int main() {
	srand(time(NULL));
	int b = rand() % 6 + 1;
	if(b == 1) {
		printf("You die\n");
	} else {
		printf("You live\n");
	}
return(0);
}
