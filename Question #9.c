#include <stdio.h>

int main(){
    
    int numOfDept,numOfEmployees,numOfDays,salary,totalsalary=0;

    printf("Enter the number of departments: ");
    scanf("%d",&numOfDept);

    for(int i=1;i<=numOfDept;i++){

        printf("\n--------------------DEPARTMENT #%d--------------------\n",i);
        
        printf("Enter the number of employees in department %d: ",i);
        scanf("%d",&numOfEmployees);
        
        for(int j=1;j<=numOfEmployees;j++){
            
            printf("Enter the number of days employee %d worked: ",j);
            scanf("%d",&numOfDays);
            
            salary=numOfDays*500;
            
            if(numOfDays>25){
                salary+=2000;
            }
            
            printf("\n--------SALARY SLIP-------\n");
            printf("Department: %d \n",i);
            printf("Employee: %d \n",j);
            printf("Days worked: %d \n",numOfDays);
            printf("Salary: Rs.%d \n",salary);
            printf("----------------------------\n");
            
            totalsalary+=salary;
            salary=0;
            

        }
        
        printf("\n=======================================================================\n");
        printf("Total salary paid to employees in department %d is Rs.%d \n",i,totalsalary);
        printf("=======================================================================\n");
        
        totalsalary=0;

    }
    return 0;

    

}