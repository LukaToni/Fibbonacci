#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int first = 0;
    int second = 1;
    int fibo;

    for(i = 1; i <= 10; i++)
    {
        if(i == 1)
            fibo = first;
        else if(i == 2)
            fibo = second;
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }

        if(i != 10)
            printf("%d, ", fibo);
        else
            printf("%d\n", fibo);
    }
    return 0;
}
