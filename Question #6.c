#include <stdio.h>

int main(){

    int dataMatrix[3][3];
    int keyMatrix[3][3];
    int encryptionMatrix[3][3];
    int i,j;

    printf("\n----------DATA MATRIX----------\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter value to store at [%d][%d] ",i+1,j+1);
            scanf("%d",&dataMatrix[i][j]);
        }
    }

    printf("\n----------KEY MATRIX----------\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter value to store at [%d][%d] ",i+1,j+1);
            scanf("%d",&keyMatrix[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            encryptionMatrix[i][j]=(dataMatrix[i][j]*keyMatrix[i][j])+(i+j);
        }
    }

    printf("\n--------DISPLAYING ENCRYPTION MATRIX---------\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",encryptionMatrix[i][j]);
        }
        printf("\n");
    }

    int highestValue=encryptionMatrix[0][0];
    int highrow=0,highcolumn=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(encryptionMatrix[i][j]>highestValue){
                highestValue=encryptionMatrix[i][j];
                highrow=i+1;
                highcolumn=j+1;
            }
        }
        printf("\n");
    }
    printf("\nMaximum encrypted value is %d at index[%d][%d]\n",highestValue,highrow,highcolumn);

    return 0;

}