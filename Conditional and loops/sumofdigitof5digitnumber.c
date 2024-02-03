#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,check;
    scanf("%d", &n);
    
    int count = 0;
    while(n >= 1){
        check = n % 10;
        count += check;
        n /= 10; 
    }
    printf("%d",count);
    return 0;
}

/*
  INPUT
10564
  OUTPUT
16
*/
