#include <stdio.h>

int main(){
    
    int seating_arrangement[10][4]={
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };

    int seats,rownum,seatnum,bookedrow=0,bookedentire=0;

    printf("Enter the number of seats to reserve (1-40): ");
    scanf("%d", &seats);

    printf("\n------RESERVATION DETAILS------\n");
    if(seats>=1 && seats<=40){
        while(seats>0){
            printf("Enter row number for reservation (1-10) ");
            scanf("%d",&rownum);
            printf("Enter seat number for reservation (1-4) ");
            scanf("%d",&seatnum);

            if((rownum>=1 && rownum<=10) && (seatnum>=1 && seatnum<=4)){
                if(seating_arrangement[rownum-1][seatnum-1]==0){
                    seating_arrangement[rownum-1][seatnum-1]=1;
                    seats-=1;
                }else{
                    printf("Seat is already booked.\n");
                    printf("Choose another seat.\n");
                }
            }else{
                printf("Row Number or Seat Number is not in the valid range.\n");
                printf("Enter again.\n");
            }
        }
    }else{
        printf("Invalid range for number of seats.\n");
    }

    printf("\n-----DISPLAYING SEATING ARRANGEMENT-----\n");
    for(int i=0;i<=9;i++){
        printf("Row#%d --> ",i+1);
        for(int j=0;j<=3;j++){
            printf(" %d ",seating_arrangement[i][j]);
        }
        printf("\n");
    }

    printf("\n------DISPLAYING WHICH ROWS ARE FULLY BOOKED-------\n");
    for(int i=0;i<=9;i++){
        for(int j=0;j<=3;j++){
            if(seating_arrangement[i][j]==1){
                bookedrow+=1;
                bookedentire+=1;
        }
        if(bookedrow==4){
            printf("Row#%d is entirely booked.\n",i+1);
        }
        bookedrow=0;
        }
    }
    printf("Total booked seats in entire hall are %d\n",bookedentire);








}

