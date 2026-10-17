#include <stdio.h>

int main(){
    int salesdata[4][5];
    int totalSalesPerSalesman[4]={0};
    int totalSalesPerProduct[5]={0};
    int i,j,mostExpensiveProduct,mostExpensiveProductNumber,bonus=0;

    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("Enter sales for Product %d of Salesman %d:",j+1,i+1);
            scanf("%d",&salesdata[i][j]);
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            totalSalesPerSalesman[i]+=salesdata[i][j];
            totalSalesPerProduct[j]+=salesdata[i][j];
        }
    }

    printf("\n-----------------------FINAL SUMMARY-----------------------\n");

    printf("\nTotal Sales per Salesman:\n");
    for(i=0;i<4;i++){
        printf("Salesman %d: %d\n",i+1,totalSalesPerSalesman[i]);
    }
    
    printf("\nTotal Sales per Product:\n");
    for(j=0;j<5;j++){
        printf("Product %d: %d\n",j+1,totalSalesPerProduct[j]);
    }

    mostExpensiveProduct=totalSalesPerProduct[0];
    for(i=0;i<5;i++){
        if(totalSalesPerProduct[i]>mostExpensiveProduct){
            mostExpensiveProduct=totalSalesPerProduct[i];
            mostExpensiveProductNumber=i+1;
        }
    }
    printf("\nMost Expensive Product: Product %d\n",mostExpensiveProductNumber);

    for(i=0;i<4;i++){
        if(totalSalesPerSalesman[i]>10000){
            bonus+=0.1*totalSalesPerSalesman[i];
            totalSalesPerSalesman[i]+=bonus;
        }
        if(bonus>0){
            printf("\nSalesman %d received a bonus of: %d\n",i+1,bonus);
            printf("Total Sales for Salesman %d after bonus: %d\n",i+1,totalSalesPerSalesman[i]);
        }else{
            printf("\nSalesman %d did not receive a bonus, his total sales remain: %d\n",i+1,totalSalesPerSalesman[i]);
        }
        bonus=0;
        
    }

    return 0;
    
}