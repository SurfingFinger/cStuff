/*The program chooses 2 random integers from 1 to 10.
The user has to guess them in order.

    If the user guesses both in the correct order, they get 100 points.
    If they guess both in the opposite order, they get 50 points.
    If they guess exactly one in the correct order, they get 25 points.
    If they guess one in the wrong order, they get 10 points.
    If they don't guess either correctly, they get 0 points.*/

#include <stdio.h>
#include <stdlib.h>

int guessingGame(){
  int guess1, guess2, random1, random2;
  int points = 0;
  
  unsigned int seed; // use to generate random #

  printf("Enter the Seeding value: \n");  
  scanf("%u", &seed);

  srand (seed); // pass seed parameter to generate random

  random1 = rand() % 10 + 1;
  random2 = rand() % 10 +1;
  // printf("random 1: %u \n", random1); //included for testing purposes
  // printf("random 2: %u \n", random2); //included for testing purposes

  printf("Enter your first guess: \n");  
  scanf("%u", &guess1);

  printf("Enter your second guess: \n");  
  scanf("%u", &guess2);

  if (guess1 == random1 && guess2 == random2){
    points += 100;
  }

  else if (guess1 == random2 && guess2 == random1){
    points += 50;
  }
  
  else if (guess1 == random1 || guess2 == random2){
    points += 25;
  }

  else if (guess1 == random2 || guess2 == random1){
    points += 10;
  }

  printf("Your score was %d.\n", points);
  return points;
}

int main(){
  
  guessingGame();

  return 0;
}
