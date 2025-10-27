#include <stdio.h>

float calculateInterest(float principal, float annualRate, float timeYear){
	float interest;
	interest = (principal*annualRate*timeYear)/100;
	return interest;
}

float updateBalance(float principal, float interest){
	float updateBalance = principal + interest;
	return updateBalance;
} 

int main(){
	float principal = 5000;
	float annualRate = 4;
	float timeYear = 2;

	float interest = calculateInterest(principal,annualRate,timeYear);
	printf("The Every Day Interest Is %.3f\n",interest) ;
	float newBalance = updateBalance(principal, interest);
	printf("The New Balance Is %0.2f\n",newBalance);
}
