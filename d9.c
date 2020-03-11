// COLLATZ CONJURE:





#include<stdio.h>
int main(void)

{  
	int num;
	printf("\n Enter any Integer Value : ");
	scanf("%d",&num);
	while(num!=1)
	{

		if((num & 1)==0)
		{
			 num=num>>1;
			printf("%d \t",num);
		
		}

		else
		{
		
			num =num+(num << 1)+1;
			printf("%d \t",num);

		}
	
	
}	
return 0;
}
