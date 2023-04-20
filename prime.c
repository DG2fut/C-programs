// Program to find prime or composite using pointers
#include <stdio.h>

int isPrime(int num);

int main()
{
    int num;
    int *pnum = &num;

    printf("Enter a number to check if it's prime or composite: ");
    scanf("%d", pnum);

    while (*pnum != -1)
    {
        int result = isPrime(*pnum);

        if (result == 1)
            printf("%d is a prime number\n", *pnum);
        else
            printf("%d is a composite number\n", *pnum);

        printf("\nEnter a number to check if it's prime or composite (-1 to exit): ");
        scanf("%d", pnum);
    }

    return 0;
}

int isPrime(int num)
{
    if (num < 2)
        return 0;

    for(int i=2; i*i<=num; i++)
    {
        if(num % i == 0)
            return 0;
    }

    return 1;
}
