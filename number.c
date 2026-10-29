#include<stdio.h>
int main()
{
    int secret=7;
    int guess;
    int i;
    printf("welcome to number guessing game!\n");
    for(i=1;i<=5;i++)
    {
        printf("guess a number between 1 and 10:");
        scanf("%d",&guess);
        if(guess==secret)
        {
            printf("congratulation! correct guess!\n");
            break;  
        }
        else if(guess<secret)
        {
            printf("Too iow!try again.\n");
        }
        else
        {
            printf("Too high!try again.\n");
        } 
    }
    if(guess!=secret)
    {
        printf("gme over!correct number was %d.\n",secret);

    }
    return 0;
}