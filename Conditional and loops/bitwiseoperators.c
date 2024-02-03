#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k) {
    int maxforAnd = 0;
    int maxforOr = 0;
    int maxforXor = 0;

    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            if (((i&j) > maxforAnd) && ((i&j) < k)) {
                maxforAnd = i&j;
            }
            if (((i|j) > maxforOr) && ((i|j) < k)) {
                maxforOr = i|j;
            }
            if (((i^j) > maxforXor) && ((i^j) < k)) {
                maxforXor = i^j;
            }
        }
    }

    printf("%d\n%d\n%d\n", maxforAnd, maxforOr, maxforXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}


/*
  INPUT
5 4 

  OUTPUT
2
3
3
*/
