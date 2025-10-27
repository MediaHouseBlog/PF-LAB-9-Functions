#include <stdio.h>

int add(int num[] , int size){
	int i;
	int sum = 0;
	for(i = 0 ; i < size ; i++){
		sum += num[i];
	}
	return sum;
}

main(){
	int size = 5;
	int numbers[size];
	printf("Enter %d Numbers\n",size);
	int i;
	for(i = 0 ; i <size ; i++){
		scanf("%d",&numbers[i]);
	}
	printf("The Sum Of The Numbers Is %d",add(numbers,size));
}
