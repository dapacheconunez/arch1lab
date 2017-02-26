#include <stdio.h>

void main(){

  char string[100];
  char c;
  int i = 0;
  printf("Enter a string of characters;");
  while((c = getchar()) != '\n'){
    *(string + i) = c;
    i++;
  }
  *(string + i + 1) = '\0';
  i = 0;
  while(string[i] != '\0'){
    printf("%c\t", string[i]);
    printf("%p\n", string[i]);
    i++;
  }
  printf("\n");
}
