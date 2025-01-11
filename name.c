/* name.c */
#include <stdio.h>
int main(){
	char name[5];
	printf("what is your name?\n");
	scanf("%4s", name);
	printf("hello %s\n", name);
	return 0;
}
