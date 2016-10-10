#include <math.h>
main()

{

float a,b,c,x,x1,x2,x3;

printf("Persamaan Kuadrat \n");
printf("Nilai a: ");
scanf("%f", & a);
if(a==0)
printf("Bukan persamaan kuadrat\n");

else

{

printf("Nilai b: ");
scanf("%f", &b);
printf("Nilai c: ");
scanf("%f", &c);
}

{
D=pow(b,2)-4*a*c;
if (d<0)
printf("Akar-akarnya imajiner \n");
}

if (d==0)

{

x=-b/2*a;

printf("Memiliki satu penyeleseaian %.2f \n", x);

}

else

{

x1=(-b+sqrt(d))/2*a;

x2=
(-b-sqrt(d))/2*a;

printf("x1 = %.2f \n",x1);

printf("x2 = %.2f \n",x2);

}

return 0 ;

