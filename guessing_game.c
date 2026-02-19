
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));
    printf("welcome to the world of guessing no.\n");
    random=rand()%100+1;
    do{
        printf("enter your guess (1 to 100):");
        scanf("%d",&guess);
        no_of_guess++;
        if(guess>random){
            printf("too high!try a small no.\n");
        }
        else if(guess<random){
            printf("too low!try a bigger no.\n");
        }
        else{
            printf("correct guess");
            printf("you guessed it right%d attempts\n",no_of_guess);
        }}
        while(guess!=random);
        printf("bye,bye, thanks for playing\n");
        printf("developed by :astha shukla\n");
        return 0;
    }