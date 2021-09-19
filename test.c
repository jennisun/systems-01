#include<stdio.h>

int even(int n) {
  if (n % 2 == 1) return 1;
  return 0;
}

int main() {
    unsigned int a = 10;
    printf("unsigned int a is: %d \n", a);

    short n = 2148129481;
    printf("short n is: %d \n", n);

    printf("1931 mod 2 is %d \n", even(1931));

    return 1;
}
