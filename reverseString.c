/* Takes in name from user.
Prints name backward.
*/

#include <stdio.h>
#include <string.h>

void cWarmup (){

  char name[50];
  printf("Please enter your name\n");
  fgets(name, sizeof(name), stdin); //scanf doesn't allow for whitespaces
  name[strcspn(name, "\n")] = '\0'; //removes hard return from name array

  for (int c=(strlen(name) -1); c >=0; c--){
    printf("%c", name[c]);
  }
  printf("\n");
}

int main(){

  cWarmup();

  return 0;
}
