#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int somearrays[4];
    somearrays[0] = a;
    somearrays[1] = b;
    somearrays[2] = c;
    somearrays[3] = d;
    int max = somearrays[0];
    for(int i=1;i<4;i++){
        if(somearrays[i] > max){
            max = somearrays[i];
        }
    }
    return max;
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

/*
  INPUT
3
4
6
5

 OUTPUT
6
*/
