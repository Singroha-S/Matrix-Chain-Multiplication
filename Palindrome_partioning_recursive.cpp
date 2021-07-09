#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s,int i,int j)
{
    if(i>j||i==j)
    {
        return true;
    }
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return false;
            i++;
            j--;
        }
        else
        {
            return true;
        }
    }
}

int solve (string s,int i,int j)
{
    if(i>=j)
    {
        return 0;
    }
    int min=INT_MAX;
    if(ispalindrome(s,i,j)==true)
    {
        return 0;
    }
    for(int k=i;k<=j-1;k++)
    {
        int temp=solve(s,i,k)+solve(s,k+1,j)+1;
        if(temp<min)
        {
            min=temp;
        }
    }
    return min;
}
