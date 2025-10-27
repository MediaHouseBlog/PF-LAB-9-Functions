#include <stdio.h>

int evenOdd(int num){
	if(num % 2 == 0){
	printf("%d Is Even",num);
	return 1; //1 represents even
	}
	else{
		printf("%d Is Odd",num);
		return 0; //0 represents Odd
	} 
}

main(){
	evenOdd(3);
}
