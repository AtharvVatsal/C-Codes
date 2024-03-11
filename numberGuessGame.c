#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    int guess = 101; //no garbage value
    int count = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("The Number is %d\n",number);
    while (guess != number)
    {
        printf("Guess Number Between 1 And 100: ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number Please!\n");
        }
        else if (guess < number)
        {
            printf("Higher Number Please!\n");
        }
        else
        {
            printf("Correct Guess!!\n");
            printf("You Guessed the number right in in %d attempts", count + 1);
        }
        count = count + 1;
    }

    return 0;
}