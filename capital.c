// Write a C program that accepts the name of a country as input and displays the corresponding capital, and vice versa. Design the program so that it executes repeatedly, until the word End is entered as input. Use array of strings.
#include <stdio.h>
#include <string.h>



int main(){
    
    char country[7][20] = {"India","Australia","Bangladesh","Bhutan","Canada","China","Japan"};
    char capital[7][20] = {"New Delhi","Canberra","Dhaka","Thimpu","Ottawa","Beijing","Tokyo"};
    int n=7,pos;
    char ctr[30], str[]="End";
    for (int i=0;i<n;i++){
        scanf("%s",&ctr);
        pos = i;
        if (strcmp(str,ctr) == 0){
            break;
        }
        printf("%s\n",capital[i]);
    }
    return 0;
}
