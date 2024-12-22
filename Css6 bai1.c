#include<stdio.h>
int main(){
	int number,sum;
	for(int i=1;i<=5;i++){
		printf("moi ban nhap so nguyen: ");
		scanf("%d",&number);
		if(number%2!=0){
			sum+=number;
		}	
	}
	printf("tong gia tri so le da nhap la %d",sum);
	return 0;
	
	
	
	
	
	
}
