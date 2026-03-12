#include <stdio.h>


int main(void) {

  int ageUser = 66;
  float heightUser = 2.08;
  char initialUser = 'P';
  char nameUser[]= "Vincenzo";


  printf("=== USER DATA ===\n\n");

  printf("AGE OF USER: %d\n",ageUser);
  printf("HEIGHT OF USER: %.2f\n", heightUser);
  printf("INITIAL OF USER: %c\n", initialUser);
  printf("NAME OF USER: %s\n", nameUser);
  

  return 0;

}
