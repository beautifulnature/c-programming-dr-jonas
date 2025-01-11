/* switch.c */
#include <stdio.h>

int main(){
    int x;
    
    printf("choose between 1. apples, 2. pears or 3. bananas\n");
    scanf("%d", &x);
/*    
    if(x == 1){
        printf("apples\n");
    }else if(x == 2){
        printf("pears\n");
    }else if(x == 3){
        printf("bananas\n");
    }else{
        printf("something else\n");
    } 
*/
    switch(x){
        case 1:
            printf("apples\n");
            break;
        case 2:
            printf("pears\n");
            break;
        case 3:
            printf("bananas\n");
            break;
        default:
            printf("something else\n");
    }
}
