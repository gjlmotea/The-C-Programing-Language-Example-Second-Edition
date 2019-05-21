#include <stdio.h>

int main() {
	double nc;
	
	for(nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
    /*
    註:
      在Linux上輸出EOF字符的方式: ctrl + D
      在Windows上輸出EOF字符的方式: ctrl + Z
    */	
	return 0;
} 
