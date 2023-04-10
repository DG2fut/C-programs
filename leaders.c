// Write a function in C to print all the LEADERS in the array. An element is a leader if it is greater than all the elements to its right side. Special rule  For example in the array {16, 17, 4, 3, 5, 2}, Leaders are 17, 5 and 2. Special rule says that the rightmost element in the array is always a leader. For example in the array {16, 17, 4, 3, 5, 2},  Leaders are 17, 5 and 2. 
#include <stdio.h>
  
void leader(int list[], int n){
    printf("Leaders are ");
    int k=0;
    int count = 0;
    int array[n];
    for(int i = 0; i < n; i++){
        int j;
        for(j = i+1; j < n; j++){
            if(list[i] <= list[j]){
                break;
            }
        }
        
        if(j==n){
            array[k++] = list[i];
            
            count++;
        }
        
    }
    for(int i=0;i<count;i++){
        if(i!=count-1){
            printf("%d, ",array[i]);
        }
        else{
            printf("%d",array[i]);
        }
    }
    
}
  
int main(){
    int n;
    scanf("%d",&n);
    int list[n];
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        list[i] = a;
    }
    leader(list, n);
    return 0;
}
