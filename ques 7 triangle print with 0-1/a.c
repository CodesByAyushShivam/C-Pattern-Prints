#include <stdio.h>

int main() {
    int n, number;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        number = 1;
        for(int j=1; j<=i; j++){
            printf("%d\t", number);
            
            if(number){
                number=0;
            }
            else{
                number=1;
            }
        }
        printf("\n");
    }
    
    return 0;
}