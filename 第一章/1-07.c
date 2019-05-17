#include <stdio.h>

int main() {
	int c;
	
	c = getchar();
	while(c != EOF){ //EOF is defined in stdio.h
		putchar(c);
		c = getchar();
	}
	
	return 0;
} 


