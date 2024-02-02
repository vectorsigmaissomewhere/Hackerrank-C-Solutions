#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float c, d;
    scanf("%d%d",&a,&b);
    scanf("\n");
    scanf("%f%f",&c,&d);
    int summation = a + b;
    int difference = a - b;
    float summation1 = c + d;
    float difference1 = c - d;
    printf("%d %d\n",summation,difference);
    printf("%.01f %.1f",summation1, difference1);
    return 0;
}

/*
  INPUT
10 4
4.0 2.0
OUTPUT
14 6
6.0 2.0
*/
