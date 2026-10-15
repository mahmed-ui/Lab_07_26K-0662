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

    int seats,rownum,seatnum;

    printf("Enter the number of seats to reserve (1-40): ");
    scanf("%d", &seats);

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
                printf("Row Number or Seat number is not in the valid range.\n");
                printf("Enter again.\n");
            }
        }
    }else{
        printf("Invalid range for number of seats.\n");
    }

}

