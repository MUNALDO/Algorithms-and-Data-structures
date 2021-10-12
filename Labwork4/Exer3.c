#include<stdio.h>
int main(){
	int sum=0,arr[1000],i,a;
	char str[1000];
	
	scanf("%s", &str);
	a = strlen(str);

	for(i=0;i<a;i++){
		arr[i] = str[i] - 48; //ASCII
		sum += arr[i];
		printf("%d ", arr[i]);
	}
	
	printf("%d", sum);
	return 0;
}