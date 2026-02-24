// gcc pieleak.c -o pieleak -fno-stack-protector -pie -fPIE -Wl,-z,relro,-z,now
#include <stdio.h>
#include <unistd.h>

void win() { printf("You win!\n"); }

int main(int argc, char **argv) {
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stdin, NULL, _IONBF, 0);

  char input[32];
  scanf("%31s", input);
  printf(input);
  printf("\n");

  char input2[32];
  scanf("%s", input2);
}
