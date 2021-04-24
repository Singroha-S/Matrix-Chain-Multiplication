#include <bits/stdc++.h>
using namespace std;

bool solve(string a,string b,int n)
{
    if(a.compare(b)==0)
    {
        return true;
    }
    if(n<=1)
    {
        return false;
    }
    bool flag=false;
    for(int i=1;i<=n-1;i++)
    {
        if((solve(a.substr(0,i),b.substr(n-i,i))==true && solve(a.substr(i,n-i),b.substr(0,n-i))==true)||(solve(a.substr(0,i),b.substr(0,i))==true && solve(a.substr(i,n-i),b.substr(i,n-i))==true))
        {
            flag=true;
            break;
        }
    }
    return flag;
}

int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    int m=a.length();
    int n=b.lemgth();
    if(m!=n)
    {
        cout<<"false";
    }
    if(m==0||n==0)
    {
        cout<<"false";
    }
    else
    {
        cout<<solve(a,b,m);
    }
}
