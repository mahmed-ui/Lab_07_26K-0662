#include <stdio.h>

int main() {
    
    int sudoku[3][3];
    int valid = 1;   
    int i, j, k, l;

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Enter value for cell [%d][%d] (0 for empty): ", i, j);
            scanf("%d", &sudoku[i][j]);
        }
    }

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (sudoku[i][j]<0 || sudoku[i][j]>9){
                valid=0;
            }
        }
    }

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            for (k=0;k<3;k++){
                for (l=0;l<3;l++){
                    if (sudoku[i][j]!=0 && (i!=k || j!=l)){
                        if (sudoku[i][j]==sudoku[k][l]){
                            valid=0;
                        }
                    }
                }
            }
        }
    }

    if(valid==1){
        printf("Valid Grid\n");
    }else{
        printf("Invalid Grid\n");
    }

    return 0;
}