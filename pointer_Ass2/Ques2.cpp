#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    int *ptr=arr;
    cout<<"enter the element of the array"<<endl;
    for (int i = 0; i < n; i++)
    {
       cin>>*ptr;
       ptr++;
    }
    
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=*(arr+i);
    }
    cout<<"sum of the element"<<sum;
    
    return 0;
}