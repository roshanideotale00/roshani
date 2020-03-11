#include<stdio.h>

int main()
{
		int a=3,b=4,c;
		c=a&b;
		printf("\n %d & %d is %d\n",a,b,c);
        

		c=a|b;
		printf("\n %d & %d is %d\n",a,b,c);

		c=a^b;
		
		printf("\n %d & %d is %d\n",a,b,c);


		c=~a;
		printf("\n %d is %d(%x)", a,c,~a);

		
		printf("~b = %x\n",~b);

	
		
		return 0;



}
