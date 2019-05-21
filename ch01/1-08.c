#include <stdio.h>

int main() {
	int c;
	while( (c = getchar()) != EOF ) 
		putchar(c);
    /*
    註:
      在Linux上輸出EOF字符的方式: ctrl + D
      在Windows上輸出EOF字符的方式: ctrl + Z
    */
	//ref: http://bbs.chinaunix.net/thread-981231-1-1.html
	return 0;
} 

