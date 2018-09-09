#include<stdio.h>
int main(){
	int num,i,a[100];
	printf("Enter the number of elements : ");
	scanf("%d",&num);
	printf("Enter the array elements \n");
	for(i=0;i<num;i++){
	scanf("%d",&a[i]);}
   printf("even numbers : ");
	for(i=0;i<num;i++)
	{
	if(a[i]%2==0)
	{
	printf("%d ",a[i]);
	}}
	   printf("\nodd numbers : ");
	for(i=0;i<num;i++)
	{
	if(a[i]%2!=0)
	{
	printf("%d ",a[i]);
	}}
}
