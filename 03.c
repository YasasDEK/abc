#include<stdio.h>
#include<conio.h>
main(){
	int i,arr[20],j,no;
	printf("Enter size of array : ");
	scanf("%d",&no);
	printf("Enter any %d elements in array\n",no);
	for(i=0;i<no;i++){
		scanf("%d",&arr[i]);
	}
	printf("Duplicate elements are :\n");
	for(i=0;i<no;i++)
	{
		for(j=i+1;j<no;j++)
	{
		if(arr[i]==arr[j])
	{
		printf("%d\n",arr[i]);
	}
	}
	}
}
