#include <stdio.h>
int main(){
	int i,arr[3],t;
	scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
	for (i=0;i<3;i++){
		if (arr[i]<arr[i+1]){
			t=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=t;
		}
	}
	printf("%d %d %d",arr[0],arr[1],arr[2]);
}
