#include<stdio.h>
int main(){
	int n;
	printf("Please enter a integer ");
	scanf("%d",&n);
	printf("Divisors of the entered integer is:\n ");
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%d  ",i);	
		}
		}
	
	return 0;
}
