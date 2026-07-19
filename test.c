//test.c
//simple program that calculates daily driving cost
//formula is DAILY_DRIVING_COST = GASOLING_COST_PER_DAY + PARKING_FEES_PER_DAY + TOLLS_PER_DAY
//GASOLING_COST_PER_DAY = MILES_PER_DAY * GALLON_COST / MILES_PER_GALLON 
#include<stdio.h>

int main(void)
{
    printf("THIS PROGRAM CALCULATE DAILY DRIVING COST !\n");
    printf("Please input the following informations ^^\n");
    
    printf("Parking fees per day (DA):");
    int parking_per_day;
    scanf("%d",&parking_per_day);

    printf("Tolls per day (DA):");
    int tolls_per_day;
    scanf("%d",&tolls_per_day);

    printf("Miles per day :");
    int miles_per_day;
    scanf("%d",&miles_per_day);

    printf("Average miles per one gallon :");
    int miles_per_gallon;
    scanf("%d",&miles_per_gallon);

    printf("a Gallon of gasoline costs (DA):");
    int gallon_cost;
    scanf("%d",&gallon_cost);

    //calculating gasolin cost per day
    double gasolin_per_day = miles_per_day * gallon_cost /(double)miles_per_gallon;
    //calculating daily driving_cost
    double daily_driving_cost=gasolin_per_day+parking_per_day+tolls_per_day;

    printf("\nDAILY DRIVING COST IN YOUR CASE IS AROUND %f (DA)\n",daily_driving_cost);
    return 0;
}