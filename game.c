#include <stdio.h>
#include <stdlib.h> // FOR THE FUNCTION RAND()
#include <time.h>   // FOR DIFFERENT RANDOM NUMBER

int main()
{
    int a, b, i = 0;
    srand(time(NULL));
    a = rand() % 50;
    printf("\n\nHey! Wanna play a gussing game?\nI have a Number(0-50) in my Mind.Can You guss it? \n\n");
    while (1)
    {
        i++;
        printf("Enter Your Number : ");
        scanf("%d", &b);

        if (a == b)
        {
            printf("Congrulations You Got it. It took %d attempt \n", i);
            break;
        }
        else if (a > b)
        {
            printf("My number is greater than %d. Try Again\n\n", b);
        }
        else if (a < b)
        {
            printf("My number is Smallar than %d Try Again\n\n", b);
        }
    }
    return 0;
}
// BY AASHRAYA KHANAL
