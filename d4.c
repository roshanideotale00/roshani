#include<stdio.h>
#pragma pack(2)

struct test2{

			char a;
			char b;
			int c;
			char d;
			short e;
			int f;




};

int main(void)

{
 struct test2 st;
 printf("\n sizeof(st) is %ld",sizeof(st));
 printf("\n &st.a=%p",&st.a);

 printf("\n &st.b=%p",&st.b);
 printf("\n &st.c=%p",&st.c);
 printf("\n &st.d=%p",&st.d);
 printf("\n &st.e=%p",&st.e);
 printf("\n &st.f=%p",&st.f);

 return 0;
}
