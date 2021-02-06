#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Using the square-root function to figure-out the sum of a number
int main() {
  long unsigned input;
  printf("Input : "); scanf("%lu", &input);
  for(long unsigned a=1; a<=input;a++)
  {
  	for (double v = 2; v <= 9; v++) {
    long unsigned primeList[a];
    long unsigned counter=1, primeCounter=0, c=0;
    while (a>=counter) {
      primeCounter++;
      if ((long unsigned)pow(counter,1.0/v)!=(long unsigned)pow(counter+1,1.0/v)) {
        primeList[c]=primeCounter; c++;
        primeCounter=0;
      }
      counter++;
    }
    if (v==2) {
      printf("[S2] : %lu = ", a);
      for (long unsigned d = 0; d < c; d++) {
        printf("%lu + %lu + ", (primeList[d]-1)/2, (primeList[d]-1)/2 + 1);
      }
      printf("%lu\n", primeCounter);
    }
    printf("[S%0.f] : %lu = ", v, a);
    for (long unsigned d = 0; d < c; d++) {
      printf("%lu + ", primeList[d]);
    }
    printf("%lu\n", primeCounter);
  }
  }
  
  return 0;
}
