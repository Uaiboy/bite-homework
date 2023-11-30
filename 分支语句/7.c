#include <stdio.h>
int main(){
	int a,b,i;
	scanf("%d %d",&a,&b);
	if(a>b){
		for(i=b+1;i>=1;i--){
			if(a % i==0 && b % i ==0){
			break;}
		}
	}
	else {for(i=a+1;i>=1;i--){
			if(a % i==0 && b % i ==0){
			break;
			}
		
	}
	}
	printf("%d",i);
	return 0;
}
