#include<stdio.h>
int max(int a,int b)
{
    if(a>=b)return a;
    else return b;
}
int main()
{
    int m,n,k,i,t,ans;
    float j;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d %d",&n,&m,&k);
        if(m<=n/k)
            printf("%d\n",m);
        else
        {
            ans=max(0,n/k-(m-n/k+k-2)/(k-1));
            printf("%d\n",ans);
        }
    }
    return 0;
}
