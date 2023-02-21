#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
  
    cout<<"enter the element of the array"<<endl;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
       
    }
    cout<<"array after reverse traversing";
int*ptr=&arr[n-1];
    for (int i = n; i >0; i++)
    {
        cout<<*ptr;
        if(ptr==arr)
        break;
        ptr--;
    }
    
    return 0;
}