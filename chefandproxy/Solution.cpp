//100% AC Solution


#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int t,count;
    string s;
    std::cin>>t;
    int d;
    while(t--)
    {
        count=0;
        cin>>d;
        cin>>s;
        for(int i=0;i<d;i++)
        {
            if(s[i]=='P')
            {
                count++;
            }
        }
        float percentage=(float)count/d;
        if(percentage>=0.75)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(d<=4 && percentage <0.75)
            {
                cout<<"-1"<<endl;
            }
            int target=ceil(0.75*d);
            int count2=0;
            for(int i=2;i<d-2;i++)
            {
                if(s[i]=='A' && (s[i-2]=='P' || s[i-1]=='P' ) && (s[i+2]=='P' ||s[i+1]=='P'))
                {
                    s[i]='p';
                    count2++;
                }
                if(count2+count>=target)
                {
                    cout<<count2<<endl;
                    break;
                }
                else if(i==d-3 && count2+count<target)
                {
                    cout<<"-1"<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
