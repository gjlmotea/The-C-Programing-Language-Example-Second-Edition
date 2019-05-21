#include <stdio.h>

int main() {
	double nc;
	
	for(nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
	// 用浮點數運算較精準， %.0f  可避免印出小數點及之後位數 
    /*
    註:
      在Linux上輸出EOF字符的方式: ctrl + D
      在Windows上輸出EOF字符的方式: ctrl + Z
    */
	//ref: http://bbs.chinaunix.net/thread-981231-1-1.html	
	return 0;
} 

