#include <stdio.h>
#include <stdlib.h>


int main() {
  long unsigned input;
  printf("Input : "); scanf("%lu", &input);
  if (input==1) {
    for (long unsigned c = 1;  c <= input; c++) {
      printf("-------------------------------------\n");
      printf("[%lu = %lu + %lu] \n", input, c, input-c);
      printf("-------------------------------------\n");
    }
  }
  if (input==2) {
    for (long unsigned c = 1;  c <= input; c++) {
      for (long unsigned d = 1; d <= input-c; d++) {
        printf("-------------------------------------\n");
        printf("[%lu = %lu + %lu \t %lu = %lu + %lu + %lu] \n", input, c, input-c, input, c, d, input-c-d);
        printf("-------------------------------------\n");
      }
    }
  }
  if (input==3) {
    for (long unsigned c = 1;  c <= input; c++) {
      for (long unsigned d = 1; d <= input-c; d++) {
        for (long unsigned e = 1; e <= input-c-d; e++) {
          printf("-------------------------------------\n");
          printf("[%lu = %lu + %lu \t %lu = %lu + %lu + %lu \t %lu = %lu + %lu + %lu + %lu] \n", input, c, input-c, input, c, d, input-c-d, input, c, d, e, input-c-d-e);
          printf("-------------------------------------\n");
        }
      }
    }
  }
  if (input==4) {
    for (long unsigned c = 1;  c <= input; c++) {
      for (long unsigned d = 1; d <= input-c; d++) {
        for (long unsigned e = 1; e <= input-c-d; e++) {
          for (long unsigned f = 1; f <= input-c-d-e; f++) {
            printf("-------------------------------------\n");
            printf("[%lu = %lu + %lu \t %lu = %lu + %lu + %lu \t %lu = %lu + %lu + %lu + %lu \t %lu = %lu + %lu + %lu + %lu + %lu] \n", input, c, input-c, input, c, d, input-c-d, input, c, d, e, input-c-d-e, input, c, d, e, f, input-c-d-e-f);
            printf("-------------------------------------\n");
          }
        }
      }
    }
  }
  for (long unsigned c = 1;  c <= input; c++) {
    for (long unsigned d = 1; d <= input-c; d++) {
      for (long unsigned e = 1; e <= input-c-d; e++) {
        for (long unsigned f = 1; f <= input-c-d-e; f++) {
          for (long unsigned g = 1; g <= input-c-d-e-f; g++) {
            printf("-------------------------------------\n");
            printf("[%lu = %lu + %lu \t %lu = %lu + %lu + %lu \t %lu = %lu + %lu + %lu + %lu \t %lu = %lu + %lu + %lu + %lu + %lu \t %lu = %lu + %lu + %lu + %lu + %lu + %lu] \n", input, c, input-c, input, c, d, input-c-d, input, c, d, e, input-c-d-e, input, c, d, e, f, input-c-d-e-f, input, c, d, e, f, g, input-c-d-e-f-g);
            printf("-------------------------------------\n");
          }
        }
      }
    }
  }
  return 0;
}
