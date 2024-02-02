/*  THIS CODE IS NOT WORKING   */
/*   SCROLL DOWN TO SEE WHICH CODE IS WORKING   */

#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    char *units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (a >= 1 && a <= 99) {
        if (a >= 1 && a <= 19) {
            printf("%s\n", units[a]);
        } else {
            printf("%s%s\n", tens[a / 10], units[a % 10]);
        }
    } else {
        printf("Number out of range for this example.\n");
    }

    if (b >= 1 && b <= 99) {
        if (b >= 1 && b <= 19) {
            printf("%s\n", units[b]);
        } else {
            printf("%s%s\n", tens[b / 10], units[b % 10]);
        }
    } else {
        printf("Number out of range for this example.\n");
    }

    if (a % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }

    if (b % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }

    return 0;
}








/*        THIS IS THE CODE WHICH IS WORKING PROPERLY   */
/* I DON'T KNOW HOW THE HELL THE BELOW CODE IS WORKING */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    char labels[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int labels_index;
      for (int i=a; i<=b; i++) {
        labels_index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", labels[labels_index]);
    }

    return 0;
}

/*
    INPUT
8
11

OUTPUT
eight
nine
even
odd
*/
