/* while.c */
#include <stdio.h>

int main(){
    
    int x = 0;

    while(x == 0){
        printf("do you want to quit? press 1\n");
        scanf("%d", &x);
    }
    
    return 0;
}
