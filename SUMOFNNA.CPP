#include<iostream.h>
#include<conio.h>
int sumofN(int);
void main()
{
int num;
cout<<"Enter the number for till which u need the numbers to be added";
cin>>num;
cout<<"\n"<<"sum of N natural numbers is: "<<sumofN(num);
getch();
}
int sumofN(int number)
{
if(number>1)
{
return number+sumofN(number - 1);
}
else
{
return 1;
}
}
