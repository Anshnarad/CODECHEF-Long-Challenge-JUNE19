// 100% AC Solution

#include<iostream>
#include<string.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b%a, a);
}
long long int aarray(long long int arr[], long long int n)
{
    long long int ans = 0;
    for(int i = 0; i < n-2; i++)
    {
        ans = gcd(ans, arr[i]);
    }
    return ans;
}
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==2)
        {
            cout<<arr[0]+arr[1]<<endl;
            continue;
        }
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]==arr[i])
            {
                arr[i-1]=0;
            }
        }
        sort(arr,arr+n);
        long long int diff=arr[n-1]-arr[n-2];
        long long int hcf=aarray(arr, n);
        long long int hccf,hccf1;
        long long int hccf2;
        hccf1=gcd(arr[n-1],hcf);
        hccf2=gcd(arr[n-2],hcf);
        if(hccf1>=hccf2)
        {
            hccf=hccf1;
        }
        else
        {
            hccf=hccf2;
        }
        if(hccf>diff)
        {
            if(hccf==hccf1)
            {
                cout<<hccf+arr[n-2]<<endl;
            }
            else
            {
                cout<<hccf+arr[n-1]<<endl;
            }
        }
        else
        {
            cout<<hccf2+arr[n-1]<<endl;
        }
    }
    return 0;
}
