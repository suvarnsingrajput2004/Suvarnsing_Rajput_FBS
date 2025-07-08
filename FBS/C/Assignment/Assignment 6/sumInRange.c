#include <stdio.h>
void sumInRange();

int main() {
    sumInRange();
    return 0;
}
void sumInRange(){
	int start,end,sum=0,i;
	printf("Enter the start and end number : ");
	scanf("%d%d",&start,&end);
	
	for(i=start;i<=end;i++){
		sum+=i;
		
	}
	printf("the sum of range is %d \n",sum);
}
