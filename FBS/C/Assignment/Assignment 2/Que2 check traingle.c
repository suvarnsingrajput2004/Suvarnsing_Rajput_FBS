#include<stdio.h>
int main(){
	int side1 ,side2,side3;
	
	printf("Enter the tree side of traingle : ");
	scanf("%d%d%d",&side1,&side2,&side3);
	
	if(side1==side2 && side2==side3){
		printf("This is a Equlateral ");
		
	}else if(side1==side2 || side2==side3|| side1== side3){
		printf("This is a Isoscale ");
		
	}
	else
		printf("This is a Scalen");
	return 0;
}
