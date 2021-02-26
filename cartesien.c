#include <stdio.h>

int main(){
    int m;
    int n;
    int i;
    int j;


    printf("Enter number of elements of A ");
    scanf("%d",&m);

    printf("Enter number of elements of B ");
    scanf("%d",&n);

    int A[m];
    int B[n];
    // for axb
    for (i=0;i<m;i++){
        printf("Enter the %dth term of set A ",i+1);
        scanf("%d",&A[i]);
        printf("\n");
    }

    for (i=0;i<n;i++){
        printf("Enter the %dth term of set B ",i+1);
        scanf("%d",&B[i]);
        printf("\n");
    }
    printf(" AxB = { ");
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf("( %d, %d ) ",A[i],B[j]);
        }
    }
    printf("}");
    printf("\n");
}
