#include <stdio.h>

void printGreetings(){ //Non parameterized function
	printf("Hello User\n");
}

int sumOffNumbers(int a , int b){ //parameterized function
	return a + b;
}

main(){
	printGreetings();
	printGreetings();
	printf("%d",sumOffNumbers(10,20)); //parameter 1 is a and its argument is 10
										////parameter 2 is b and its argument is 20
										
}									
