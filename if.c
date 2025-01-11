/* if.c */

#include <stdio.h>

int main(){
    
    int speed;
    
    printf("how fast are yu driving? (km/h)\n");
    scanf("%d", &speed);

    if(speed > 100){
        printf("you are driving too fast\n");
    } else if(speed > 80){
        printf("you are driving perfectly fine\n");
    } else {
        printf("OK\n");
    }
    return 0;
}
