#include <stdio.h>

int main()
 {
    int num;
    long long factorial = 1;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        
        printf("%d! = ", num);
        for (int i = 1; i <= num; i++) {
            factorial *= i;
            
            if (i != 1) {
                printf(" * ");
            }
            printf("%d", i);
        }
        
        printf(" = %lld\n", factorial);
    }

    return 0;
}

