#include<iostream>
using namespace std;
struct fractie
{
int numarator;
int numitor;
};

int f1(fractie a)
{
if(a.numitor==0)
return 0;
else
return 1;
}

fractie f2(fractie a, fractie b, char o)
{
int aux;
switch (o)
{
case '+':
if(a.numitor!=b.numitor)
{
aux=a.numitor;
a.numitor*=b.numitor;
a.numarator=a.numarator*b.numitor+b.numarator*aux;
}
else
a.numarator+=b.numarator;
break;

case '-':
if(a.numitor!=b.numitor)
{
aux=a.numitor;
a.numitor*=b.numitor;
a.numarator=a.numarator*b.numitor-b.numarator*aux;
}
else
a.numarator-=b.numarator;
break;

case '*':
a.numarator*=b.numarator;
a.numitor*=b.numitor;
break;

case '/':
a.numarator*=b.numitor;
a.numitor*=b.numarator;
break;

default:
cout<<"operatia nu se poate efectua"<<endl;
return {0,0};
}
return a;
}

fractie f3(fractie a)
{
fractie n;
n=a;
while(n.numitor!=n.numarator)
{
if(n.numarator>n.numitor)
n.numarator-=n.numitor;
else
n.numitor-=n.numarator;

}
a.numarator/=n.numarator;
a.numitor/=n.numitor;
return a;

}

int main()
{
fractie a, b, r;
char o;
cout<<"prima fractie:";
cin>>a.numarator;
cout<<'/';
cin>>a.numitor;
cout<<"a doua fractie:";
cin>>b.numarator;
cout<<'/';
cin>>b.numitor;
if((f1(a)==0)||(f1(b)==0))
{
cout<<"numitor 0"<<endl;
return 0;
}
cout<<"operatia:";
cin>>o;
r=f2(a,b,o);
r=f3(r);
cout<<r.numarator<<'/'<<r.numitor<<endl;
return 0;
}
