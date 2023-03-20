// convert a floating point number to integer

#include <stdio.h>

int main() {
    float x;
    printf("Enter number here: ");
    scanf("%f",&x);
    int a;
    a = (int)(x+0.5);
	  printf("\nInteger value of number: %d",a);

    return 0;
}
