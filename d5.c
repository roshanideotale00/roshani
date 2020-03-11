#include<stdio.h>

struct demo
{
		char a;
		char b;
		int c;
		double d;
		short e;
		float f;

};


int main(void)
{
	struct demo d;
	printf("\n size=%ld",sizeof(d));
	printf("\n &d.a=%p",&d.a);
	printf("\n &d.b=%p",&d.b);
	printf("\n &d.c=%p",&d.c);
	printf("\n &d.d=%p",&d.d);
	printf("\n &d.e=%p",&d.e);
	printf("\n &d.f=%p",&d.f);
	return 0;

}

