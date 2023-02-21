#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int a[n][n];
    cout<<"enter the element of the array";
    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
     }
    int sum=0;
    
     cout<<"sum of the primary row";
     for (int i = 0; i < n; i++)
     {
       sum=sum+ *(*(a+i)+i);
     }

     cout<<sum;

    return 0;
}