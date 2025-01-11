/* numbers.c */
#include <stdio.h>
int main(){
	int x, y, answer;

	printf("input a number\n");
	scanf("%d", &x);
	
	printf("input another number\n");
	scanf("%d", &y);

	answer = x + y;
	printf("answer is %d\n", answer);

	return 0;
}
