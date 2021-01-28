#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  long unsigned input;
  long unsigned counter=1, primeCounter=0, c=0;
  printf("Input : "); scanf("%lu", &input);
  long unsigned primeList[input];
  for (double v = 1; v <= 9; v++) {
    counter=1, primeCounter=0, c=0;
    while (input>=counter) {
      primeCounter++;
      if ((long unsigned)pow(counter,1.0/v)!=(long unsigned)pow(counter+1,1.0/v)) {
        primeList[c]=primeCounter; c++;
        primeCounter=0;
      }
      counter++;
    }
    if (v==2) {
      printf("[P2] : %lu = ", input);
      for (long unsigned d = 0; d < c; d++) {
        printf("%lu + %lu + ", (primeList[d]-1)/2, (primeList[d]-1)/2 + 1);
      }
      printf("%lu\n", primeCounter);
    }
    printf("[P%0.f] : %lu = ", v, input);
    for (long unsigned d = 0; d < c; d++) {
      printf("%lu + ", primeList[d]);
    }
    printf("%lu\n", primeCounter);
  }
  //
  counter=1, primeCounter=0, c=0;
  while (input>=counter) {
    primeCounter++;
    if ((long unsigned)exp(counter)!=(long unsigned)exp(counter+1)) {
      primeList[c]=primeCounter; c++;
      primeCounter=0;
    }
    counter++;
  }
  printf("[P10] : %lu = ", input);
  for (long unsigned d = 0; d < c; d++) {
    printf("%lu + ", primeList[d]);
  }
  printf("%lu\n", primeCounter);
  //
  counter=1, primeCounter=0, c=0;
  while (input>=counter) {
    primeCounter++;
    if ((long unsigned)log(counter)!=(long unsigned)log(counter+1)) {
      primeList[c]=primeCounter; c++;
      primeCounter=0;
    }
    counter++;
  }
  printf("[P11] : %lu = ", input);
  for (long unsigned d = 0; d < c; d++) {
    printf("%lu + ", primeList[d]);
  }
  printf("%lu\n", primeCounter);
  //
  counter=1, primeCounter=0, c=0;
  while (input>=counter) {
    primeCounter++;
    if ((long unsigned)log10(counter)!=(long unsigned)log10(counter+1)) {
      primeList[c]=primeCounter; c++;
      primeCounter=0;
    }
    counter++;
  }
  printf("[P12] : %lu = ", input);
  for (long unsigned d = 0; d < c; d++) {
    printf("%lu + ", primeList[d]);
  }
  printf("%lu\n", primeCounter);
  return 0;
}
