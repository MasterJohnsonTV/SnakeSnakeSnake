#include <stdio.h>
#include <stdlib.h>

void clear_screen() {
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}

// TODO: Clear the input after getting the input
// TODO: Add a dot map
int main(void) {
  char input;
  printf("Welcome to snake game!\n");

  printf("@\n");

  printf("WSAD: ");

  while (1) {
    scanf(" %c", &input);
    switch (input) {
    case 'W':
    case 'w':
      clear_screen();
      printf("@\n");
      printf(".");
      break;
    case 'S':
    case 's':
      clear_screen();

      printf(".\n");
      printf("@");
      break;
    case 'A':
    case 'a':
      clear_screen();

      printf("@.");
      break;
    case 'D':
    case 'd':
      clear_screen();

      printf(".@");
      break;
    default:
      printf("wrong option");
    }
  }
}
