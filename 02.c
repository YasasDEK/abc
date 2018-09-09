#include<stdio.h>
int main(){
	int num,i,d,a[100],b[100];
	printf("Enter the number of elements : ");
	scanf("%d",&num);
	printf("Enter the array elements \n");
	for(i=0;i<num;i++)
	scanf("%d",&a[i]);
	for(i=num-1,d=0;i>=0;i--,d++) //optional 
	b[d]=a[i];
	
	for(i=0;i<num;i++)
	a[i]=b[i];
	
	printf("reverse array is\n");
	
	for(i=0;i<num;i++)
	printf("%d\n",a[i]);
}
