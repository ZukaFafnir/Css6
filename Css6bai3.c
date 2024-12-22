#include<stdio.h>
int main(){
	int pass=1234,check;
	
	printf("please enter pass ");
	checkAgain:
	printf("please enter pass again ");
	scanf("%d",&check);
	if(check==pass){
		printf("right");
	}else{
		printf("wrong\n");
		goto checkAgain;
	}
	return 0;
	
	
}
