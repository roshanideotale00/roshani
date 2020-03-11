#include<stdio.h>
#pragma pack(2)

struct test1{
		int a;
		char b;
		short c;
		short d;
		char e;
		short f;
};


int main()
{
		struct test1 st1;
		printf("\n size of st1 is %u",sizeof(st1));
		printf("&t1= %p\n",&st1);
		printf("&t1.a=%p\n" ,&st1.a);
		printf("&t1.b=%p\n ",&st1.b);
		printf("&t1.c=%p\n ",&st1.c);
		printf("&t1.d=%p\n ",&st1.d);
		printf("&t1.e=%p\n ",&st1.e);
		printf("&t1.f=%p\n ",&st1.f);
		return 0;

}




