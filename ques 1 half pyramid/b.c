#include <stdio.h>

int main() {
    int n;
    char letter='A';
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        letter = 'A';
        for(int j=1; j<=i; j++){
            printf("%c\t", letter);
            letter++;
        }
        printf("\n");
    }
    
    return 0;
}