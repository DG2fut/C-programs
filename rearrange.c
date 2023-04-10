// Write a C function rearrange(strs, n) that rearranges n strings strs (of variable sizes) in the alphabetical order. Use pointer notation.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int count = 5;
    char *name[5], temp[20];
    for(int i = 0; i < count; i++){
        name[i] = (char *)std::malloc(sizeof(char));
        scanf("%s",name[i]);
        }
    for (int i = 1; i <= count; i++){
        for (int j = 1; j <= count - i; j++){
            if (strcmp(name[j - 1], name[j]) > 0){
                strcpy(temp, name[j - 1]);
                strcpy(name[j - 1], name[j]);
                strcpy(name[j], temp);
                temp[0] = '\0';
                
                
            }
        }
    }
    
    
    for (int i = 0; i < count; i++){
        printf("\n%s", name[i]);
        }
    
    return 0;
   
}
