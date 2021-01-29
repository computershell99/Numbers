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

long unsigned nextPrime(long unsigned c) {
  while (primeTest(c)!=1) {
    c++;
  }
  return c;
}

int main() {
  long unsigned input, k=1, pr, gp=2, gap;
  printf("Input : "); scanf("%lu", &input);
  printf("N \t \t"); printf("O \t \t"); printf("P \t \t"); printf("E \n");
  for (long unsigned c = 1; c <= input; c++) {
    printf("%lu \t \t", c);
    if ((c%2)!=0) {
      printf("%lu \t \t", c);
    } else {
      printf("\t \t");
    }
    if (primeTest(c)==1) {
      printf("%lu  \t \t", c); k=1; pr=c; gap=nextPrime(c+1)-c;
      if (gp==gap) {
        printf("%lu = %lu - %lu \n", nextPrime(c+1)-c, nextPrime(c+1), c); gp=gp+2;
      } else {
        printf("\n");
      }
    } else {
      printf("\n", pr, k); k++;
    }
  }
  return 0;
}
