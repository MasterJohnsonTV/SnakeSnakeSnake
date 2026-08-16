#include <stdio.h>

// TODO: implement the rest os WSAD (SAD)
int main(void) {
  char input;
  printf("Welcome to snake game!\n");

  printf("@\n");

  printf("WSAD: ");
  scanf("%c", &input);
  switch (input) {
  case 'A':
  case 'a':
    printf("@.");
    break;
  default:
    printf("wrong option");
  }
}
