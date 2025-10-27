#include <stdio.h>

float calculateTotal(float itemPrices[], int itemsNumber);
float applyDiscount(float totalCost);
void printBill(float totalCost);

main(){
	int itemsNumber = 6;
	float itemPrices[itemsNumber];
	printf("Enter Prices Of Items In Cart\n");
	int i;
	for(i = 0 ; i < itemsNumber ; i++){
		scanf("%f",&itemPrices[i]);
	}
	float total = calculateTotal(itemPrices , itemsNumber);
	float finalAmount = applyDiscount(total);
	printBill(finalAmount);
	 
}


float calculateTotal(float itemPrices[], int itemsNumber){
	int i;
	float totalCost = 0;
	for(i = 0 ; i < itemsNumber ; i++){
		totalCost += itemPrices[i];
	}
	return totalCost;
}

float applyDiscount(float totalCost){
	float finalAmount;
	if(totalCost > 5000){
		float discount = totalCost*10/100;
		printf("You Got A Discount Of %0.2f\n",discount);
		finalAmount = totalCost - discount;
		return finalAmount;
	}
	return totalCost;
}
void printBill(float finalAmount){
	printf("The Total Bill Is %0.2f",finalAmount);
}



