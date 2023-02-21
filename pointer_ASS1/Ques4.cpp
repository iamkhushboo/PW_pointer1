#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}
int main()
{
    int x,y;
    cout<<"enter two number";
    cin>>x>>y;
    swap(&x,&y);
    cout<<"after swapping the number x= "<<x<<" y = "<<y;
    return 0;
}