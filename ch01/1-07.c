#include <stdio.h>

int main() {
	int c;
	
	c = getchar();
	while(c != EOF){ //EOF is defined in stdio.h
		putchar(c);
		c = getchar();
	}
	    /*
	    註:
	      在Linux上輸出EOF字符的方式: ctrl + D
	      在Windows上輸出EOF字符的方式: ctrl + Z
	    */	
	return 0;
} 


