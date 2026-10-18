#include <stdio.h>

int main(){

    int numOfClasses,numOfStudents,numOfSubs,marks,marksPerStud=0,failed=0,classTotal=0,totalMarksSchool=0,totalNumOfStuds=0;

    printf("Enter the number of classes: ");
    scanf("%d",&numOfClasses);

    for(int i=1;i<=numOfClasses;i++){

        printf("\n-----------------CLASS #%d----------------\n",i);

        printf("Enter the number of students in this class: ");
        scanf("%d",&numOfStudents);
        
        totalNumOfStuds+=numOfStudents;

        for(int j=1;j<=numOfStudents;j++){

            printf("Student #%d\n",j);
            printf("Enter the number of subjects: ");
            scanf("%d",&numOfSubs);

            for(int k=1;k<=numOfSubs;k++){

                printf("Subject #%d\n",k);
                printf("Enter marks obtained: ");
                scanf("%d",&marks);

                marksPerStud+=marks;
                totalMarksSchool+=marks;

                if(marks<40){
                    failed+=1;
                }

            }

            printf("\n-------------RESULT------------\n");

            printf("Student: %d | Total Marks: %d\n",j,marksPerStud);
            printf("Average: %d\n",marksPerStud/numOfSubs);
            if(failed>1){
                printf("Result: Fail\n");
            }else{
                printf("Result: Pass\n");
            }
            printf("\n--------------------------------\n");

            classTotal+=marksPerStud;
            marksPerStud=0;
            failed=0;

        }

        printf("\n============================================\n");
        printf("Total marks of student in this class is %d\n",classTotal);
        printf("Average mark of studets in this class is %d\n",classTotal/numOfStudents);
        printf("==============================================\n");

        classTotal=0;

    }

    printf("\n= = = = = = = = = = = = = = = = = = = = = = = = =\n");
    printf("Total marks of all students in school is %d\n",totalMarksSchool);
    printf("School average is %d\n",totalMarksSchool/totalNumOfStuds);
    printf("\n= = = = = = = = = = = = = = = = = = = = = = = = =\n");

    return 0;

}