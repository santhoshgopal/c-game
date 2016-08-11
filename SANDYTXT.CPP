#include<iostream.h>
//#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
//#include<dos.h>
unsigned int Time,Time2,T=5000;
int POINT=10000,n,i,POINTI=5000,POINTF=1000,G,POINTY=0,j,k,l,m,o,h,g,q,f,v,x,z,t,c,q1,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1,r1,s1,t1,u1,v1,w1,x1,y1;
char decision,name[30];
double VIJAY,VICKY,SRUTHI,YOU;
void init()
{
POINT=10000;n=0,i=0,POINTI=5000,POINTF=1000,G=0,POINTY=0;
j=k=l=m=o=h=g=q=f=v=x=z=t=c=q1=0;
a1=b1=c1=d1=e1=f1=g1=h1=i1=j1=k1=l1=m1=n1=o1=p1=r1=s1=t1=u1=v1=w1=x1=y1=0;
}
int main()
{
//clrscr();
cout<<"TIME TO PLAY RAJA RANI \n \n";
cout<<"\nYour Name : ";
cin>>name;
cout<<"Enter the Time(seconds) : ";
cin>>Time2;
do
{
init();
//clrscr();
in:cout<<"ENTER YOUR CHOICE \n \n";
cin>>n;
if(n<0||n>3)
{
cout<<"\nInvalid Input \n";
goto in;
}
//randomize();
n=rand()%4;
if(n==0)
{
//randomize();
i=rand()%3+4;
}
else if(n==1)
{
//randomize();
j=rand()%3+7;
}
else if(n==2)
{
//randomize();
k=rand()%3+10;
} else if(n==3)
{
//randomize();
l=rand()%3+12;
}
if((n==0)&&(i==4))
{
//randomize();
m=rand()%2+16;
}
if((n==0)&&(i==5))
{
//randomize();
o=rand()%2+18;
}
if((n==0)&&(i==6))
{
//randomize();
h=rand()%2+20;
}
if((n==1)&&(j==7))
{
//randomize();
g=rand()%2+22;
}
if((n==1)&&(j==8))
{
//randomize();
q=rand()%2+24;
}
if((n==1)&&(j==9))
{
//randomize();
f=rand()%2+26;
}
if((n==2)&&(k==10))
{
//randomize();
v=rand()%2+28;
}
if((n==2)&&(k==11))
{
//randomize();
x=rand()%2+30;
}
if((n==2)&&(k==12))
{
//randomize();
z=rand()%2+32;
}
if((n==3)&&(l==13))
{
//randomize();
t=rand()%2+34;
}
if((n==3)&&(l==14))
{
//randomize();
c=rand()%2+36;
}
if((n==3)&&(l==15))
{
//randomize();
q1=rand()%2+38;
}
if((n==0)&&(i==4)&&(m==16))
{
a1=40;
}
if((n==0)&&(i==4)&&(m==17))
{
b1=41;
}
if((n==0)&&(i==5)&&(o==18))
{
c1=42;
}
if((n==0)&&(i==5)&&(o==19))
{
d1=43;
}
if((n==0)&&(i==6)&&(h==20))
{
e1=44;
}
if((n==0)&&(i==6)&&(h==21))
{
f1=45;
}
if((n==1)&&(j==7)&&(g==22))
{
g1=46;
}
if((n==1)&&(j==7)&&(g==23))
{
h1=47;
}
if((n==1)&&(j==8)&&(q==24))
{
i1=48;
}
if((n==1)&&(j==8)&&(q==25))
{
j1=49;
}
if((n==1)&&(j==9)&&(f==26))
{
k1=50;
}
if((n==1)&&(j==9)&&(f==27))
{
l1=51;
}
if((n==2)&&(k==10)&&(v==28))
{
m1=52;
}
if((n==2)&&(k==10)&&(v==29))
{
n1=53;
}
if((n==2)&&(k==11)&&(x==30))
{
o1=54;
}
if((n==2)&&(k==11)&&(x==31))
{
p1=55;
}
if((n==2)&&(k==12)&&(z==32))
{
r1=56;
}
if((n==2)&&(k==12)&&(z==33))
{
s1=57;
}
if((n==3)&&(l==13)&&(t==34))
{
t1=58;
}
if((n==3)&&(l==13)&&(t==35))
{
u1=59;
}
if((n==3)&&(l==14)&&(c==36))
{
v1=60;
}
if((n==3)&&(l==14)&&(c==37))
{
w1=61;
}
if((n==3)&&(l==15)&&(q1==38))
{
x1=62;
}
if((n==3)&&(l==15)&&(q1==39))
{
y1=63;
}
switch(n)
{
case 0:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n\n";
YOU+=POINT;
break;
}
case 1:
{
cout<<"RANI \n \n";
cout<<POINTI<<"\n\n";
YOU+=POINTI;
break;
}
case 2:
{
in1:cout<<" YOU THE POLICE \n \n";
cout<<"CHOOSE YOUR THIEF \n \n";
cin>>G;
if(G<0||G>3)
{
cout<<"\nInvalid Input..\n";
goto in1;
}
if(G==n)
{
cout<<" YOU FIND THAT \n \n";
cout<<POINTF<<"\n\n";
YOU+=POINTF;
}
else
{
int POINTF=0;
cout<<"YOU NOT FIND THAT \n \n";
cout<<POINTF<<"\n\n";
YOU+=POINTF;
}
break;
}
case 3:
{
cout<<"YOU THE THIEF \n \n";
cout<<POINTY<<"\n\n";
YOU+=POINTY;
break;
}
}
cout<<"\t\t\t"<<name<<"  "<<YOU<<"\n";
switch(i)
{
case 4:
{
cout<<"RANI \n \n";
cout<<POINTI<<"\n\n";
VICKY+=POINTI;
break;
}
case 5:
{
cout<<"POLICE \n \n";
cout<<POINTF<<"\n\n";
VICKY+=POINTF;
break;
}
case 6:
{
cout<<"THIEF \n \n";
cout<<POINTY<<"\n\n" ;
VICKY+=POINTY;
}
}
switch(j)
{
case 7:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n\n";
VICKY+=POINT;
break;
}
case 8:
{
cout<<"POLICE \n \n";
cout<<POINTF<<"\n\n";
VICKY+=POINTF;
break;
}
case 9:
{
cout<<"THIEF \n \n";
cout<<POINTY<<"\n\n";
VICKY+=POINTY;
}
}
switch(k)
{
case 10:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n\n";
VICKY+=POINT;
break;
}
case 11:
{
cout<<"RANI \n \n";
cout<<POINTI<<"\n \n";
VICKY+=POINTI;
break;
}
case 12:
{
cout<<"THIEF \n \n";
cout<<POINTY<<"\n \n";
VICKY+=POINTY;
break;
}
}
switch(l)
{
case 13:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n\n";
VICKY+=POINT;
break;
}
case 14:
{
cout<<"RANI \n \n";
cout<<POINTI<<"\n\n";
VICKY+=POINTI;
break;
}
case 15:
{
cout<<"POLICE \n \n";
cout<<POINTF<<"\n\n";
VICKY+=POINTF;
break;
}
}
cout<<"\t\t\tVICKY :  "<<VICKY<<"\n";
switch(m)
{
case 16:
{
cout<<"POLICE\n \n";
cout<<POINTF<<"\n \n";
VIJAY+=POINTF;
break;
}
case 17:
{
cout<<"THIEF \n \n" ;
cout<<POINTY<<"\n \n";
VIJAY+=POINTY;
break;
}
}
switch(o)
{
case 18:
{
cout<<"RANI \n \n";
cout<<POINTI<<"\n \n";
VIJAY+=POINTI;
break;
}
case 19:
{
cout<<"THIEF \n \n";
cout<<POINTY<<"\n \n";
VIJAY+=POINTY;
break;
}
}
switch(h)
{
case 20:
{
cout<<"RANI\n \n";
cout<<POINTI<<"\n \n";
VIJAY+=POINTI;
break;
}
case 21:
{
cout<<"POLICE \n \n";
cout<<POINTF<<"\n \n";
VIJAY+=POINTF;
break;
}
}
switch(g)
{
case 22:
{
cout<<"POLICE \n \n";
cout<<POINTF<<"\n \n";
VIJAY+=POINTF;
break;
}
case 23:
{
cout<<"THIEF \n \n";
cout<<POINTY<<"\n \n";
VIJAY+=POINTY;
break;
}
}
switch(q)
{
case 24:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n \n";
VIJAY+=POINT;
break;
}
case 25:
{
cout<<"THIEF \n \n";
cout<<POINTY<<"\n \n";
VIJAY+=POINTY;
break;
}
}
switch(f)
{
case 26:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n \n";
VIJAY+=POINT;
break;
}
case 27:
{
cout<<"POLICE \n \n";
cout<<POINTF<<"\n \n";
VIJAY+=POINTF;
break;
}
}
switch(v)
{
case 28:
{
cout<<"RANI\n \n";
cout<<POINTI<<"\n \n";
VIJAY+=POINTI;
break;
}
case 29:
{
cout<<"THIEF \n \n";
cout<<POINTY<<"\n \n";
VIJAY+=POINTY;
break;
}
}
switch(x)
{
case 30:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n \n";
VIJAY+=POINT;
break;
}
case 31:
{
cout<<"THIEF \n \n";
cout<<POINTY<<"\n \n";
VIJAY+=POINTY;
break;
}
}
switch(z)
{
case 32:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n \n";
VIJAY+=POINT;
break;
}
case 33:
{
cout<<"RANI \n \n ";
cout<<POINTI<<"\n \n";
VIJAY+=POINT;
break;
}
}
switch(t)
{
case 34:
{
cout<<"RANI\n \n" ;
cout<<POINTI<<"\n \n";
VIJAY+=POINTI;
break;
}
case 35:
{
cout<<"POLICE \n \n";
cout<<POINTF<<"\n \n";
VIJAY+=POINTF;
break;
}
}
switch(c)
{
case 36:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n \n";
VIJAY+=POINT;
break;
}
case 37:
{
cout<<"POLICE \n \n";
cout<<POINTF<<"\n \n";
VIJAY+=POINTF;
break;
}
}
switch(q1)
{
case 38:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n \n";
VIJAY+=POINT;
break;
}
case 39:
{
cout<<"RANI \n \n ";
cout<<POINTF<<"\n \n";
VIJAY+=POINTF;
break;
}
}
cout<<"\t\t\tVIJAY : "<<VIJAY<<"\n";
switch(a1)
{
case 40:
{
cout<<"THIEF\n \n";
cout<<POINTY<<"\n \n";
SRUTHI+=POINTY;
}
}
switch(b1)
{
case 41:
{
cout<<"POLICE\n \n";
cout<<POINTF<<"\n \n";
SRUTHI+=POINTF;
}
}
switch(c1)
{
case 42:
{
cout<<"THIEF \n \n";
cout<<POINTY<<"\n \n";
SRUTHI+=POINTY;
}
}
switch(d1)
{
case 43:
{
cout<<"RANI \n \n";
cout<<POINTI<<"\n \n";
SRUTHI+=POINTI;
}
}
switch(e1)
{
case 44:
{
cout<<"POLICE\n \n";
cout<<POINTF<<"\n \n";
SRUTHI+=POINTF;
}
}
switch(f1)
{
case 45:
{
cout<<"RANI \n \n";
cout<<POINTI<<"\n \n";
SRUTHI+=POINTI;
}
}
switch(g1)
{
case 46:
{
cout<<"THIEF \n \n";
cout<<POINTY<<"\n \n";
SRUTHI+=POINTY;
}
}
switch(h1)
{
case 47:
{
cout<<"POLICE \n \n";
cout<<POINTF<<"\n \n";
SRUTHI+=POINTF;
}
}
switch(i1)
{
case 48:
{
cout<<"THIEF \n \n";
cout<<POINTY<<"\n \n";
SRUTHI+=POINTY;
}
}
switch(j1)
{
case 49:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n \n";
SRUTHI+=POINT;
}
}
switch(k1)
{
case 50:
{
cout<<"POLICE \n \n";
cout<<POINTF<<"\n \n";
SRUTHI+=POINTF;
}
}
switch(l1)
{
case 51:
{
cout<<"RAJA\n\n";
cout<<POINT<<"\n\n";
SRUTHI+=POINTF;
}
}
switch(m1)
{
case 52:
{
cout<<"THIEF \n\n";
cout<<POINTY<<"\n\n";
SRUTHI+=POINTY;
}
}
switch(n1)
{
case 53:
{
cout<<"RANI \n\n";
cout<<POINTI<<"\n\n";
SRUTHI+=POINTI;
}
}
switch(o1)
{
case 54:
{
cout<<"THIEF \n \n";
cout<<POINTY<<"\n \n";
SRUTHI+=POINTY;
}
}
switch(p1)
{
case 55:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n \n";
SRUTHI+=POINT;
}
}
switch(r1)
{
case 56:
{
cout<<"RANI \n \n";
cout<<POINTI<<"\n \n";
SRUTHI+=POINTI;
}
}
switch(s1)
{
case 57:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n \n";
SRUTHI+=POINT;
}
}
switch(t1)
{
case 58:
{
cout<<"POLICE \n \n";
cout<<POINTF<<"\n \n";
SRUTHI+=POINTF;
}
}
switch(u1)
{
case 59:
{
cout<<"RANI \n \n";
cout<<POINTI<<"\n \n";
SRUTHI+=POINTI;
}
}
switch(v1)
{
case 60:
{
cout<<"POLICE \n \n";
cout<<POINTF<<"\n \n";
SRUTHI+=POINTF;
}
}
switch(w1)
{
case 61:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n \n";
SRUTHI+=POINT;
}
}
switch(x1)
{
case 62:
{
cout<<"RANI \n \n";
cout<<POINTI<<"\n \n";
SRUTHI+=POINTI;
}
}
switch(y1)
{
case 63:
{
cout<<"RAJA \n \n";
cout<<POINT<<"\n \n";
SRUTHI+=POINT;
}
}
cout<<"\t\t\tSRUTHI : "<<SRUTHI<<"\n";
cout<<"\nDo You WAnt To Continue Playing This Game ?(y/n) : ";
cin>>decision;
Time=clock();
if(Time>=Time2*100)
{
cout<<"\nYour Game Is Stopped\n";
//sleep(T);
exit(0);
}
}while(decision=='y');
//getch();
return 0;
}

