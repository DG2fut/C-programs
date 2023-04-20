// Program to find mean of n numbers
#include <stdio.h>

int main()
{
    int n, sum = 0;
    int *pnums;
    float mean;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter the elements:\n");
    for (pnums = nums; pnums < nums + n; pnums++) {
        scanf("%d", pnums);
        sum += *pnums;
    }

    mean = (float) sum / n;

    printf("The mean of the elements is %.2f\n", mean);

    return 0;
}
