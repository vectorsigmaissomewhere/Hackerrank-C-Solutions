#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int arrays[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arrays[i]);
    }  
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arrays[i];
    } 
    printf("%d",sum);
    return 0;
}

/*
input
6
16 13 7 2 1 12 
output
51
*/
