#include <stdio.h>

int main(){
    int space=5;
    for(int i=1;i<=5;i++){
        for(int j=5;j>=1;j--){
            if(space==i){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}