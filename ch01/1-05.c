#include <stdio.h>

int main() {
	int fahr;
	//單行for敘述可以不用大括號
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n",fahr, (5.0/9.0)*(fahr-32));
	
	return 0;
} 

