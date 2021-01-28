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
  long unsigned input, d=1, e=1, f=1, g=1, h=1, a=1, b=1, l=1, k=1, pr, gp=2, gap;
  printf("Input : "); scanf("%lu", &input);
  //printf("R5 \t \t \t"); //printf("R4 \t \t \t"); 
  //printf("R3 \t \t \t"); //printf("R2 \t \t \t"); 
  printf("N \t \t"); printf("P2 \t \t"); printf("P3 \t \t"); printf("P4 \t \t"); printf("P5 \t \t"); printf("Primes \n");
  for (long unsigned c = 1; c <= input; c++) {
    //printf("(%lu)^(1/5) \t \t", (long unsigned)pow(c,5)); 
    //printf("(%lu)^(1/4) \t \t", (long unsigned)pow(c,4)); 
    //printf("(%lu)^(1/3) \t \t", (long unsigned)pow(c,3)); 
    //printf("(%lu)^(1/2) \t \t", (long unsigned)pow(c,2)); 
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
      printf("%lu^5 \t \t", g); g++; l=1;
    } else {
      printf("%lu^4 + %lu \t", g-1, l); l++;
    }
    if (primeTest(c)==1) {
      printf("%lu || \t", c); k=1; pr=c; gap=nextPrime(c+1)-c;
      if (gp==gap) {
        printf("%lu = %lu - %lu \n", nextPrime(c+1)-c, nextPrime(c+1), c); gp=gp+2;
      } else {
        printf("\n");
      }

    } else {
      printf("%lu + %lu \n", pr, k); k++;
    }


  }

  return 0;

}
