#include <stdio.h>

int main(){
	float fuelAverage, costForward, costReturn, totalFuelcost, totaDistance, totalfuelConsumed, fuelConsumedForward, FuelConsumedReturn;
	float distanceSingleTrip = 1207;
	float fuelPriceForward = 118;
	float fuelPriceReturn = 123;
	
	// fuelAverage input must be positive >= 1 
	printf("enter the fuelAverage (km/L): ");
	scanf("%f",&fuelAverage);
	
	totaDistance = distanceSingleTrip*2;
	
	totalfuelConsumed = totaDistance / fuelAverage;
	
	fuelConsumedForward = distanceSingleTrip / fuelAverage;
	costForward = fuelConsumedForward * fuelPriceForward;
	
	FuelConsumedReturn = distanceSingleTrip / fuelAverage;
	costReturn = FuelConsumedReturn * fuelPriceReturn;
	
	totalFuelcost = costForward + costReturn;
	
	printf("The total fuel consumed is : %.2f liters\n", totalfuelConsumed);
	printf("The total fuel cost is %.2f Rupees\n", totalFuelcost);
	
	return 0;
}