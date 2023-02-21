#include<iostream>
using namespace std;
int main()
{ 
    int n,k;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"enter the position";
    cin>>k;
    
    cout<<"enter the element of the array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"element at the "<<k<<" is"<<*(arr+k-1);
    
    return 0;
}