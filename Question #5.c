#include <stdio.h>

int main(){
    
    int academicRecords[2][3][3];
    int i,j,k,summarks=0;
    int totalMarks[2][3];

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("Enter for student %d of subject %d in class %d : ",j+1,k+1,i+1);
                scanf("%d",&academicRecords[i][j][k]);
            }
        }
    }

    for(i=0;i<2;i++){
        printf("\nClass %d Students total\n", i+1);
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                summarks+=academicRecords[i][j][k];
            }
            printf("Student %d got %d in total of all subjects\n",j+1,summarks);
            totalMarks[i][j]=summarks;
            summarks=0;
        }
    }

    int highestMarks,highStudent=0;
    for(i=0;i<2;i++){
        highestMarks=totalMarks[i][0];
        for(j=0;j<3;j++){
            if(totalMarks[i][j]>highestMarks){
                highestMarks=totalMarks[i][j];
                highStudent=j+1;
            }
        }
        printf("\nTop Performer of Class %d: Student %d with %d marks\n",i+1,highStudent,highestMarks);
    }

    int highOverallMarks=totalMarks[0][0];
    int overallHighStudent=0,overallHighClass;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            if(totalMarks[i][j]>highOverallMarks){
                highOverallMarks=totalMarks[i][j];
                overallHighStudent=j+1;
                overallHighClass=i+1;

            }
        }
    }
    printf("\nOverall topper is Student %d from Class %d \n",overallHighStudent,overallHighClass);

    return 0;


}
