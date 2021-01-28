#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void addition(long unsigned number) {
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
    printf("[+] %lu = ", number);
    for (long unsigned d = 0; d < c; d++) {
      printf("%lu + ", primeList[d]);
    }
    printf("%lu \n", primeCounter);
    printf("[+] %lu = ", number);
    for (long unsigned d = 0; d < c; d++) {
      printf("%lu + %lu + ", (primeList[d]-1)/2, (primeList[d]-1)/2 + 1);
    }
    printf("%lu\n", primeCounter);
}

void substraction(long unsigned number) {
    printf("[-] %lu = %lu - 1 \n", number, number+1);
}

void multiplication(long unsigned number) {
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
    if (number%2==0) {
      printf("[*] %lu = %lu * 2 \n", number, number/2);
    }
    for (long unsigned d = 0; d < c; d++) {
      if (number%primeList[d]==0) {
        printf("[*] %lu = %lu * %lu \n", number, number/primeList[d], primeList[d]);
      }
    }
}

void division(long unsigned number) {
    for (long unsigned d = 1; d <= number; d++) {
      printf("[/] %lu = %lu * %lu + %lu \n", number, number/d, d, number%d);
    }
}

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
  long unsigned input, d=0;
  printf("Input : "); scanf("%lu", &input);
  addition(input); substraction(input); multiplication(input); division(input);
  for (long unsigned c = 1; c <= input; c++) {
    if (primeTest(c)==1) {
      printf("[P] %lu = %lu - 1 = %lu - 2 = %lu - 3 = %lu - 4 = %lu - 5 \n", c, c+1, c+2, c+3, c+4, c+5);
      d++;
    }
  }
  printf("The number of primes up to %lu is : %lu \n", input, d);
  return 0;
}
