#include<iostream.h>
#include<conio.h>
void binary(int);
int remainder[100],i = 0,quotient = 2;
void main()
{
int decimal;
clrscr();
cout<<"Enter the decimal which is to be converted to integer";
cin>>decimal;
cout<<"\n"<<"The corresponding binary format is:";
binary(decimal);
getch();
}
void binary(int deci)
{
i = i+1;
if(quotient!=1&&quotient!=0)
{
quotient = deci/2;
remainder[i] = deci%2;
binary(quotient);
}
else
{
remainder[i] = quotient;
for(int j=i;j>=1;j--)
{
cout<<remainder[j];
}
}
}