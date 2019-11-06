#include<iostream>
using namespace std;
int main()
{
 int k,d,i;
 int a,b,c;
 cin>>a>>b>>c;
    cout<<a/b<<'.'; 
    k=a;
    for(i=0;i<c-1;i++)
    {
     k=(k%b)*10;
     cout<<k/b;
    }
    k=(k%b)*10;
    d=(k%b)*10/b; 
    if(d>=5) 
    {
     cout<<k/b+1<<endl;
    }
    else
    {
     cout<<k/b<<endl;
    }
 return 0;
}
