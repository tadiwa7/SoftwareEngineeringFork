#include <stdio.h>

int main()
{
    //Counter variable
    int i;


    //For loop (pre-C99 standard)
    for (i = 0; i < 5; i++)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }

    for (i = 10;i >= 0;i = i--)
    {
        puts("Hello world");
        puts("-----------");

    }
        printf("Exit with i=%d\n",i); //TASK A - count from 10 down to 0 in steps of - 1


        for (p = 10;p >= -10;p -= 2)
        {
         puts("Hello world");
         puts("-----------");
         }

        printf("Exit with p=%d\n", p);

    // TASK B - count from 10 down to -10 in steps of -2

    // TASK C - count from 10 to 200 in steps of 10

    // TASK D - count from -10 down to 20 in steps of 5

    // TASK E - can you predict the largest value of i that is displayed?
    for (i = 0; i < 12; i += 3)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }
}