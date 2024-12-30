#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int n, rando;
   int count = 0;
   printf("Welcome to the guessing game.\n ");
   srand(time(NULL)); //seed

   //generating a random number between 1 to 500 
   rando = rand() % 500 +1;
   printf("\nGuess a number between 1 and 500.");

   do{
    printf("\nEnter your number(1 to 500): ");
    scanf("%d",&n);
    count++;

    if(n>rando){
        printf("\nGo for smaller number.");
    }
    else if(n<rando){
        printf("\nGo for larger number. ");
    }

    else{
        printf("\nCongratulations! The number was %d You guessed the number in %d attempts.",rando,count);
    }
   } while(n!=rando); 

    printf("\nIt was a wonderfull session. Hoping to see you again. bye bye.");
    printf("\nDeveloped by Niminraj.");

    return 0;
}
