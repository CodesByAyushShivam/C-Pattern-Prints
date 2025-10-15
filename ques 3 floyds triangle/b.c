#include <stdio.h>

void main() {
    int n, number=1;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int k=(n-i); k>0; k--){
            printf("\t");
        }
        for(int j=1; j<=i; j++){
            printf("%d\t", number);
            number++;
        }
        printf("\n");
    }
}