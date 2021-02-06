#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Illustrating Fermat's last theorem using the root funtion
// For a given number : (a^(1/n) + b^(1/n)= f^(n) != c^(n) + d^(n)
int main() {
  long unsigned input, d=1, e=1, f=1, g=1, h=1, a=1, b=1, l=1;
  printf("Input : "); scanf("%lu", &input);
  printf("R5 \t \t \t"); printf("R4 \t \t \t"); printf("R3 \t \t \t"); printf("R2 \t \t \t"); 
  printf("N \t \t"); printf("P2 \t \t"); printf("P3 \t \t"); printf("P4 \t \t"); printf("P5 \n");
  for (long unsigned c = 1; c <= input; c++) {
    printf("(%lu)^(1/5) \t \t", (long unsigned)pow(c,5)); printf("(%lu)^(1/4) \t \t", (long unsigned)pow(c,4)); 
    printf("(%lu)^(1/3) \t \t", (long unsigned)pow(c,3)); printf("(%lu)^(1/2) \t \t", (long unsigned)pow(c,2)); 
    printf("%lu \t \t", c);
    if (c==pow(d,2)) {
      printf("%lu^2 \t \t", d); d++; h=1;
    } else {
      printf("%lu^2 + %lu \t", d-1, h); h++;
    }
    if (c==pow(e,3)) {
      printf("%lu^3 \t \t", e); e++; a=1;
    } else {
      printf("%lu^3 + %lu \t", e-1, a); a++;
    }
    if (c==pow(f,4)) {
      printf("%lu^4 \t \t", f); f++; b=1;
    } else {
      printf("%lu^4 + %lu \t", f-1, b); b++;
    }
    if (c==pow(g,5)) {
      printf("%lu^5 \n", g); g++; l=1;
    } else {
      printf("%lu^5 + %lu \n", g-1, l); l++;
    }
  }
  return 0;
}
