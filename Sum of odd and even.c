#include <stdio.h>

int oddeven(int n);
int main(){
    int c,n,ans,odd,even;
    printf("Enter number of numbers: ");
    scanf("%d",&c);
    for (int i=1;i<=c;i++){
        printf("\nEnter number: ");
        scanf("%d",&n);
        ans = oddeven(n);
    }
    return 0;
}

int oddeven(int n){
    int ans=0,odd,even;
    if (n%2==0){
        printf("\nThe number is even");
        even+=n;
    } else {
        printf("The number is odd");
        odd+=n;
    }
    printf("\nThe sum of odd numbers %d",odd);
    printf("\nThe sum of even numbers %d",even);
    return 0;
}
