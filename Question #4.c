#include <stdio.h>

int main(){

    int temperature[3][3][3];
    int x,y,z,sum=0;
    float average;
    float averageTemp[3];

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
        averageTemp[x]=average;
        average=0.0;
        sum=0;
    }

    float maxAvgTemp=averageTemp[0];
    int maxIndex=0;

    for(int i=0;i<3;i++){
        if(averageTemp[i]>maxAvgTemp){
            maxAvgTemp=averageTemp[i];
            maxIndex=i+1;
        }
    }
    printf("Layer %d has the highest average temperature of %.2f\n",maxIndex,maxAvgTemp);

    int maxTemperatureEntire=temperature[0][0][0];
    int a,b,c;
    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            for(z=0;z<3;z++){
                if(temperature[x][y][z]>maxTemperatureEntire){
                    maxTemperatureEntire=temperature[x][y][z];
                    a=x+1;
                    b=y+1;
                    c=z+1;
                }
            }
        }
    }
    printf("The highest temperature across all layers is: %d\n",maxTemperatureEntire);
    printf("It is located at position [%d][%d][%d]\n",a,b,c);

    
    return 0;
}

