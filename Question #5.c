#include <stdio.h>
int main(){
    int academicRecords[2][3][3];
    int i,j,k;

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("Enter for student %d of subject %d in class %d",j+1,k+1,i+1);
                scanf("%d",&academicRecords[i][j][k]);
            }
        }
    }
}