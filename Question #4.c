#include <stdio.h>
int main() {
int temperature[3][3][3];
int x,y,z,sum=0;
float average;

for(x=0;x<3;x++){
    for(y=0;y<3;y++){
        for(z=0;z<3;z++){
            printf("Enter temperature for position [%d][%d][%d]: ",x+1,y+1,z+1);
            scanf("%d",&temperature[x][y][z]);
        }
    }
}

for(x=0;x<3;x++){
    for(y=0;y<3;y++){
        for(z=0;z<3;z++){
            sum+=temperature[x][y][z];
        }
    }
    average=sum/27.0;
    printf("Average temperature for layer [%d]: %.2f\n",x+1,average);
    sum=0;
}

return 0;
}
