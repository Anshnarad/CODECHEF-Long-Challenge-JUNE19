#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    std::cin>>t;
    unsigned long long int n;
    while(t--)
    {
        cin>>n;
        long int num=n;
        int sum=0;
        while(n!=0)
        {
            sum+=n%10;
            n/=10;
        }
        unsigned long long int i;
        for( i=1;i<18446744073709551615;i++)
        {
            if(sum<=10*i)
            {
                break;
            }
        }
        unsigned long int digit=(10*i)-sum;
        unsigned long int number=num*10 + digit;
        cout<<number<<endl;
    }
    return 0;
}
