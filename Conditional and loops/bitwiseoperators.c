#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int maxforand = 0;
    int maxforor = 0;
    int maxforxor = 0;
    
    for(int i = 1;i <= n;i++){
        for(int j = i+1;j<n;j++){
            if(((i&j) > maxforand) && ((i&j) < k)){
                maxforand = i&j;
            }
            if(((i|j)> maxforor) && ((i|j) < k)){
                maxforor = i|j;
            }
            if(((i^j) > maxforxor) && ((i^j) < k)){
                maxforxor = i^j;
            }
        }
    }
    printf("%d\n%d\n%d\n",maxforand,maxforor,maxforxor);
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
