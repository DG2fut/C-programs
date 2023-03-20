#include <stdio.h>
int main(){
    int n,l[30],x;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\nEnter element: ")
        scanf("%d",&l[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (l[i]>l[j]){
                x=l[i];
                l[i]=l[j];
                l[j]=x;
            }
        }
    }
    printf("\nSorted array: [ ");
    for(int i=0;i<n;i++){
        printf("%d ",l[i]);
    }
    printf("]");
    
    return 0;
}
