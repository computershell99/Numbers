#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Testing if a number is a prime (1) or not (0) using the square-root function
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
// Calculating the next prime after finding a prime
long unsigned nextPrime(long unsigned number) {
  while (primeTest(number)!=1) {
    number++;
  }
  return number;
}

// Calculating the elements of the sum of every number from 1 until the given number, from primes and prime gaps.
int main() {
  long unsigned input, g=0, f=0, e=1, a=0, primeSum=0;
  printf("Input : "); scanf("%lu", &input);
  long unsigned primeGaps[input], primes[input], list[input];
  printf("N \t \t"); printf("Primes \n");
  for (long unsigned c = 1; c <= input; c++) {
    printf("%lu \t \t", c);
    if (primeTest(c)==1) {
      primes[g]=c; primeSum+=c;
      primeGaps[g]=nextPrime(c+1)-c; g++;
      printf("%lu[%lu] \t \t", c, primeGaps[g-1]);
    } else {
      printf("--- \t \t");
    }
    if (c==e) {
      printf("%lu[%lu] \n", e, primes[f]);
      list[a]=e; a++; e = e + primes[f];
      f++;
    } else {
      printf("--- \n");
    }
    if (primeTest(c)==1) {
      printf("%lu = ", c);
      for (long unsigned d = 0; d < g-1; d++) {
        printf("%lu + ", primeGaps[d]);
      }
      printf("1\n");
      printf("%lu = ", primeSum);
      for (long unsigned d = 0; d < g-1; d++) {
        printf("%lu + ", primes[d]);
      }
      printf("%lu \n", primes[g-1]);
    }
    printf("%lu = ", c);
    for (long unsigned d = 0; d < f-1; d++) {
      printf("%lu + ", primes[d]);
    }
    printf("%lu\n", c-list[a-1]+1);
  }
  return 0;
}
