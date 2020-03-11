#include<stdio.h>

int main(void)
{
	check_nth_bit();	 	
  	
	clear_nth_bit();
	return 0;	
}
 
void check_nth_bit(void)
{	
	int r ,n;
    printf("enter any integer value : ");
	scanf("%d",&r);

	printf("\n enter the nth bit want to check: ");
	scanf("%d",&n);

	if((r & (1<<n))==0)
			printf("\n bit is : 0");
	else
			printf("\n bit is :  1");


}


void clear_nth_bit(void)
{

	int r ,n,c;
    printf("enter any integer value : ");
	scanf("%d",&r);

	printf("\n enter the nth bit want to clear: ");
	scanf("%d",&n);
	

	if((r & (1<<n))==0)
			printf("\n bit is : 0");
	else
			printf("\n bit is :  1");

	printf("\n Clearing the bit  ");
    c	=( r & (~ (1 << n)));

	printf("\n %d bit is cleared to %d ", n,c);


}
