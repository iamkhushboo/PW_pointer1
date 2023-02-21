#include<iostream>
using namespace std;
void max_min(int *x,int *y)
{
    int a,b,c;
    cout<<"enter three number ";
    cin>>a>>b>>c;
    if(a>b && a>>c)
     { *x=a;
      if(b>c)
       *y=c;
       else
       *y=b;
     }
     else if(b>a && b>>c)
     {
        *x=b;
        if(a>c)
        *y=c;
        else
        *y=a;
     }
     else
     {
        *x=c;
        if(a>b)
        *y=b;
        else
        *y=a;
     }
}
int main()
{
    int x,y;
    max_min(&x,&y);
    cout<<"maximum value "<<x<<" minimum value "<<y;
    return 0;
}