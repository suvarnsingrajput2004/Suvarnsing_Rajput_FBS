#include <stdio.h>
void checkPerfect();

int main() {
    checkPerfect();
    return 0;
}
void checkPerfect(){
	int i ,n,sum=0;
	printf("Enter the Numer : ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++){
		if(n%i==0) 
		sum+=i;		
	}
	if(sum ==n)
	printf("Perfect\n");
	else
	printf("Not Perfect");
}

