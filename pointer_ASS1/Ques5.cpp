#include<iostream>
using namespace std;
void apperenace(string s,char *f,char *l,int *a)
{
    
   *f=s[0];
   *l=s[s.size()-1];
   for(auto &ch:s)
   {
      if(ch=='t')
      a++;
   }
}
int main()
{
    char f,l;
    int a=0;
    string s;
    cout<<"enter your name";
    cin>>s;
    apperenace(s,&f,&l,&a);
cout<<f<<" "<<l<<" "<<a;
    return 0;
}