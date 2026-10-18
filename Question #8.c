#include <stdio.h>

int main() {
    int n = 5;

    printf("========================================\n");
    printf(" PART 1: Right-Angled Triangles (Top)\n");
    printf("========================================\n\n");

    printf("1. Star Triangle:\n");
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            printf("  ");
        }
        for (int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }


    printf("\n2. Number Triangle:\n");
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            printf("  ");
        }
        for (int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }


    printf("\n3. Alphabet Triangle:\n");
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            printf("  ");
        }
        for (int j=1;j<=i;j++){
            printf("%c ", 'A' + j-1);
        }
        printf("\n");
    }

    printf("\n========================================\n");
    printf(" PART 2: Pyramid Patterns (Bottom)\n");
    printf("========================================\n\n");


    printf("4. Star Pyramid:\n");
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            printf("  ");
        }

        for (int j=1;j<=(2*i-1);j++){
            printf("* ");
        }
        printf("\n");
    }


    printf("\n5. Number Pyramid:\n");
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            printf("  ");
        }
        for (int j=1;j<=(2*i-1);j++){
            printf("%d ", j);
        }
        printf("\n");
    }


    printf("\n6. Alphabet Pyramid:\n");
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            printf("  ");
        }
        for (int j=1;j<=(2*i-1);j++){
            printf("%c ", 'A' + j-1);
        }
        printf("\n");
    }

    return 0;
}