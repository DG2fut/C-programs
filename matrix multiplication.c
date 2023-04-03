#include <stdio.h>

int mat(int r, int c, int z[10][10]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&z[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}

int multiply(int r1,int c2, int a[10][10], int b[10][10], int res[10][10]){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<c2;k++){
                res[i][j]+=a[i][k]*b[k][i];
            }
        }
    }
    
}
int main() {
    int a[10][10],b[10][10],res[10][10],r1,r2,c1,c2;
    printf("Enter first matrix size ");
    scanf("%d %d",&r1,&c1);
    printf("\nEnter first matrix elements ");
    mat(r1,c1,a);
    
    printf("\nEnter second matrix size ");
    scanf("%d %d",&r2,&c2);
    printf("\nEnter second matrix elements ");
    mat(r2,c2,b);
    
    multiply(r1,c2,a,b,res);
    printf("\nResultant matrix:\n");
    for (int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            printf("%d",res[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
