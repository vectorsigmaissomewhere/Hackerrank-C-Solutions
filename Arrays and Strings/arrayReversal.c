#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);
  int arrays[n];
  int newarrays[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &arrays[i]);
  }
  for(int i = n; i > 0; i--) {
    newarrays[i-1] = arrays[n-i];
  }    
  for(int i = 0; i < n; i++) {
    printf("%d ", newarrays[i]);
  }
  return 0;
}


/*
input
6
16 13 7 2 1 12

output
12 1 2 7 13 16 
*/
