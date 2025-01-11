/* floats.c */
#include <stdio.h>
int main(){
	float pi, r, answer;

	printf("what is R in cm\n");
	scanf("%f", &r);
	
	pi = 3.14;
	answer = r * r * pi;
	printf("area is %f\n", answer);

	return 0;
}
