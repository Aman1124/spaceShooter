#include<iostream>
using namespace std;
int main()
{
int a,x;
cout<<"Welcome\n";
Start:
cout<<"Choose any one of the following:\n";
cout<<"1.Pattern 1\n2.Pattern 2\n";
cin>>a;
switch (a)
{
case 1:
{
for(x=1;x<=5;x++)
{
for(int x1=5;x1>x;x1--)
cout<<" ";
cout<<"*";
for(int x1=1;x1<=2*(x-1)-1;x1++)
cout<<" ";
if(x!=1)
cout<<"*";
cout<<"\n";
}
for(int x=4;x>=1;x--)
{
for(int x1=5;x1>x;x1--)
cout<<" ";
cout<<"*";
for(int x1=1;x1<=2*(x-1)-1;x1++)
cout<<" ";
if(x!=1)
cout<<"*";
cout<<"\n";
}
break;
}
case 2:
{
for(x=1;x<=5;x++)
{
for(int x2=5;x2>x;x2--)
cout<<" ";
for(int y=1;y<=2*x-1;y++)
cout<<"*";
cout<<"\n";
}
for(x=4;x>=1;x--)
{
for(int x2=4;x2>=x;x2--)
cout<<" ";
for(int y=1;y<=2*x-1;y++)
cout<<"*";
cout<<"\n";
}
break;
}
default:
{
cout<<"Wrong choice\n";
goto Start;
break;
}
}
return 0;
}
