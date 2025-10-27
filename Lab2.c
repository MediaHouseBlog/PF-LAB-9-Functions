#include <stdio.h>

int maxNumber(int num1 , int num2){
	if(num1 > num2) return num1;
	else return num2;
}

int main(){
	printf("%d",maxNumber(20 , 50));
}
