#include <stdio.h>

int main(){
    
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    
    int y=0;
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            y+=1;
            printf("%d",y);
        }
        y=0;
        printf("\n");
    }

    return 0;
}