#include <stdio.h>

int main() {
	int fahr, celsius;	//fahr:華氏  celsius:攝氏 
	int lower, upper, step;
	
	lower=0;
	upper=300;
	step=20;
	fahr = lower;
	// °C = 5/9 ( °F - 32 )
	while(fahr <= upper){
		celsius = 5 * (fahr-32) /9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step; 
	}
	
	return 0;
} 
