#include<stdio.h>
union pack 
{
 char a;
 int b;
double c;
};
void main()
{{
union pack p;
clrscr();
printf("\n" occpuied size by union pack :%";
sizeof(p));
printf("\n char ="d",sizeof(char));
printf("\n int =%d", sizeof(int));
printf("\n double=%d", sizeof(double));
}
getch();
}