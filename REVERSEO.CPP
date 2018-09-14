#include<iostream.h>
#include<conio.h>
void main()
{
int remainder,reversedString = 0,num;
cout<<"Enter the number to be reversed";
cin>>num;
while(num!=0)
{
remainder = num%10;
reversedString = reversedString*10 + remainder;
num = num/10;
}
cout<<"\n"<<"The reversed String is:"<<reversedString;
getch();
}