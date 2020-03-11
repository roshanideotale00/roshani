#include<stdio.h>
int main()
{
		short a= -6;
		unsigned short b = 65530;
		printf("a=%hd, b=%hd\n", a,b);
        printf("a=%hu, b=%hu\n", a,b);
		printf("a=%d(%x), b=%d(%x)\n",a,a,b,b);
        if(a==b)
			printf("\n a and b are same");
		else
			printf("\n a and b aare different");


        if((short)a==(short)b)
			printf("\n a and b are same");
		else
			printf("\n a and b aare different");
        
		
		if((unsigned short)a==(unsigned short)b)
			printf("\n a and b are same");
		else
		    printf("\n a and b aare different");
	
		a=0XF4;
		printf("\na=%hd\n",a);
        
		a=0XFFF4;
		printf("\n a=%d\n",a);
		return 0;

}
