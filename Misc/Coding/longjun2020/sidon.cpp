#include<bits/stdc++.h>

using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();
    long long n = 250,ans[251],i,j,k;
    unordered_map <long long,int> m;

    ans[0]=1;
    m[1]=1;
    m[2]=1;
    for(i=1;i<n;i++)
    {
        j=ans[i-1]+1;
        while(1)
        {
            for(k=0;k<i;k++)
            {
                if(m[ans[k]+j]==1)
                {
                    break;
                }
            }
            if(k==i)
            {
                ans[i]=j;
                for(k=0;k<=i;k++)
                    m[ans[k]+ans[i]]=1;
                break;
            }
            j++;
        }
    }
    j=0;
    /*for(i=0;i<n;i++)
    {
        printf("%lld ",ans[i]);
        j+=ans[i];
    }*/
    printf("\n%lld",j);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
    return 0;
}