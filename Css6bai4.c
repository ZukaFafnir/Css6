#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("Moi ban nhap 3 so ");
	scanf("%f %f %f",&a,&b,&c);
	float delta=b*b-4*a*c;
	if(delta<0){
		printf("Phuong trinh vo nghiem");
	}
	else if(delta==0){
		printf("Phuong trinh 1 nghiem kep x=%.1f",-b/(2*a));
		
	}else{
		printf("Phuong trinh co 2 nghiem phan biet x1=%.1f,x2=%.1f",(-b-sqrt(delta))/2*a,(-b+sqrt(delta))/2*a);
	}
	return 0;	
}
