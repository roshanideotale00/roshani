#include<stdio.h>

int main(void)
{
   even_odd(3);
   even_odd(30);
   divisible_by_4(12);
   divisible_by_4(334);
   show_bits(5);
		
   swap_number(13,49);
   
   
   
   lower_multiple_of_8(6);
   lower_multiple_of_8(7);
   lower_multiple_of_8(8);
   lower_multiple_of_8(9);
   lower_multiple_of_8(10);
   lower_multiple_of_8(12);
   lower_multiple_of_8(13);
   lower_multiple_of_8(14);
   lower_multiple_of_8(15);
   lower_multiple_of_8(16);
   lower_multiple_of_8(17);
 
   
   upper_multiple_of_8(0);
   upper_multiple_of_8(1);
   upper_multiple_of_8(2);
   upper_multiple_of_8(3);
   upper_multiple_of_8(4);
   upper_multiple_of_8(5);
   upper_multiple_of_8(6);
   upper_multiple_of_8(7);
   upper_multiple_of_8(8);
   upper_multiple_of_8(9);
   upper_multiple_of_8(10);
   upper_multiple_of_8(11);
   upper_multiple_of_8(12);
   upper_multiple_of_8(13);
   upper_multiple_of_8(14);
   upper_multiple_of_8(15);
   upper_multiple_of_8(16);
   return 0;
}




void even_odd(number)
{
	if((number & 1)==0)
		printf("\n number is even  ");
	else
		printf("\n number is odd ");

}



void divisible_by_4(number)
{
	if((number & 3)==0)
			printf("\n number is divisible by 4");

	else
	printf("\n number is not divisible by 4");

}



void show_bits(unsigned int( number))
{

	unsigned int mask=0X80;
	printf("\n %d = ",number);
	while(mask)
	{
			if ((number & mask)==0)
				printf("0");
			else
				printf("1");
		    mask=mask>>1;
	
	
	}
	printf("\n");
}






void swap_number(int a,int b)
{   printf("\n a=%d, b=%d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\n a=%d,b=%d",a,b);
}


void lower_multiple_of_8(int num)
{
	int res;
	res= num & ~7;
	printf("\n lower multiple of 8 for num %d is %d \n",num,res);

}



void upper_multiple_of_8(int num)
{
	int res;
	res=(num+7)&~7;
	printf("\n upper multiple of 8 for num %d is %d\n",num,res);
	
}
