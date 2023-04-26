#include <stdio.h>

int main()
{

    int x;
        printf("Enter an integer to determine whether it is even or odd.\n");
        scanf("%d \n", &x);
        printf("You entered, %d.\n",x);
        if ( x % 2 == 0) {
            printf("EVEN\n");
        }
        else if ( x % 2 == 1) {
            printf("ODD\n");
        }
}
