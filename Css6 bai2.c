#include<stdio.h>
int main(){
	int number,even=0,odd=0;
	for(int i=1;i<=5;i++){
		printf("Please enter an integer");
		scanf("%d",&number);
		if(number%2==0){
			even++;}
			else{
				odd++;
			}	
	}
	printf("The entered even quantity is %d and odd number la %d",even,odd);
	return 0;}
