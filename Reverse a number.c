#include <stdio.h>

int revnum(int n){
    int x=0,rev=0;
    while (n>0){
        x = n%10;
        n = n/10;
        rev = rev*10 + x;
    }
    return rev;
}
int main() {
    int n,r=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    r = revnum(n);
    printf("\n Reversed number: %d",r);
    return 0;
}
