#include<iostream.h>
#include<conio.h>
class fraction
{
int num;
int deno;
public:
fraction()
{
}
fraction(int a,int b)
{
num=a;
deno=b;
}
void display()
{
cout<<"\n The numerator is:"<<num;
cout<<"\n the denominator is :"<<deno;
cout<<"\n The fraction is :"<<num<<"/"<<deno;
}
friend fraction operator+(fraction &, fraction &)
};
fraction operator+(fraction &p,fraction &q)
{
fraction a;
a.num=p.num+q.num;
a.deno=p.deno+q.deno;
return a;
}
void main()
{
fraction f1(2,1);
fraction f2(12,11);
fraction f3;
clrscr();
f1.display();
f2.display();
f3=f1+f2;
cout<<"\n After addition";
f3.display();
getch();
}