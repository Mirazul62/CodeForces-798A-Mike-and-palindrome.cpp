#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,len,flag=1,count=0;
    string a;
    cin>>a;
    len=a.length();
    for(i=0,j=len-1; i<len/2; ++i,--j)
    {
        if(a[j]!=a[i])
            count++;
    }
   /// cout<<count<<endl;

   if(count==1)
    cout<<"YES";
    else if(count==0 && len%2!=0)
        cout<<"YES";
   else
    cout<<"NO";

}
