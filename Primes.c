#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primeTest(long unsigned number) {
    long unsigned primeList[number];
    long unsigned counter=1, primeCounter=0, c=0;
    while (number>=counter) {
      primeCounter++;
      if ((long unsigned)pow(counter,1.0/2)!=(long unsigned)pow(counter+1,1.0/2)) {
        primeList[c]=primeCounter; c++;
        primeCounter=0;
      }
      counter++;
    }
    if (number%2==0 && number!=2) {
      return 0;
    } else {
      if (number==3) {
        return 1;
      }
      for (long unsigned d = 0; d < c; d++) {
        if (number%primeList[d]==0 ) {
          return 0;
        }
      }
    }
    return 1;
}

int main() {
  long unsigned input;
  printf("Input : "); scanf("%lu", &input);
  for (long unsigned c = 1; c <= input; c++) {
    if (primeTest(c)==1) {
      printf("%lu = %lu - 1 = %lu - 2 = %lu - 3 = %lu - 4 = %lu - 5 \n", c, c+1, c+2, c+3, c+4, c+5);
    }
  }
  return 0;
}
