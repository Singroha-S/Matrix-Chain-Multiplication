#include<bits/stdc++.h>
using namespace std;

int static t[1001][1001];
int solve(int arr[],int i,int j)
{
   if(i>=j)
   {
       return 0;
   }
   int min=INT_MAX;
   for(int k=i;k<=j-1;k++)
   {
       int temp=solve(arr,i,k)+solve(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
       if(temp<min)
       {
           min=temp;
       }
   }
   return min;
}

int main()
{
    int arr[]={40,20,30,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
   memset(t,-1,sizeof(t));
   cout<<solve(arr,1,n-1);
   return 0;
}
