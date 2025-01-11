/* dice.c */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int myRandom(int max){
    int x;
    /* create a random number between 1 and max */
    x = rand() % max + 1;
    return x;
}

int main(){
    
    int balance = 1000, bet, guess, dice;

    /* seeding the random number generator */
    srand(getpid());
    printf("your initial balance is %d\n", balance);

    while(1){
        printf("make your bet: ");
        fflush(stdout);
        scanf("%d", &bet);

        if(bet <= balance){
            printf("make your guess (between 1 to 6, and 0 means quit):\n");
            scanf("%d", &guess);
    
            if(guess == 0){
                return 0;        
            }
    
            printf("throwing the dice ...\n");
            sleep(2);

            dice = myRandom(6);
            printf("dice landed on %d\n", dice);

            if(dice == guess){
                printf("you won. congractulations\n");
                balance += 3 * bet;
            } else {
                printf("sorry. you lost\n");
                balance -= bet;
            }

            printf("your balance is %d\n", balance);
   
            if(balance <= 0){
                printf("game over!\n");
                return 0;
            }
        }else{
            printf("your bet is more than your balance\n");
        }   
    }
    return 0;
}
