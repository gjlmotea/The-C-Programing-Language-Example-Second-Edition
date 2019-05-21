#include <stdio.h>

int main() {
	long nc;
	
	nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%ld characters\n", nc);
    /*
    註:
      在Linux上輸出EOF字符的方式: ctrl + D
      在Windows上輸出EOF字符的方式: ctrl + Z
    */	
	return 0;
} 

