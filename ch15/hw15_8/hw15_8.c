#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void show_decimal(char *arr, int n);


int main(void)
{
	char *arr,ch,input;
	int n;
	int i=0;
	printf("Number of binary number:");
	scanf("%d",&n);
	
	arr=(char *)malloc(sizeof(char)*n);
	

	do
	{
		while(ch=getchar()!='\n' && ch!=EOF);
		printf("Input a binary number 0 or 1\n");
		printf("arr[%d]= ",i);
		input=getchar();
		if(input=='0' || input=='1')
		{
			arr[i]=input;
			i++;
		}
		else
			printf("Your input is not binary number, Please enter again");
			
		
	}while(i<n);
	
	printf("Your input binary number is ");

	for(i=0;i<n;i++)
		printf("%c ",*(arr+i));
	show_decimal(arr,n);
	printf("\n");
	return 0;
}

void show_decimal(char *arr, int n)
{
	int decimal=0;
	for(int i=1;i<=n;i++)
		decimal+=(arr[i-1]-48)*pow(2,n-i);

	printf("\nBinary to decimal number is %d\n",decimal);

}

