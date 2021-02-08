#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,test=1;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string array;
        cin>>array;
        char checkCharacter1 = 'A';
        char checkCharacter2 = 'B';
        int count1 = 0, count2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (array[i] ==  checkCharacter1)
            {
                ++ count1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (array[i] ==  checkCharacter2)
            {
                ++ count2;
            }
        }
        if(abs(count2-count1)==1){
            cout<<"Case"<<" "<<"#"<<test<<":"<<" "<<"Y"<<"\n";
            test++;
        }
        else{
            cout<<"Case"<<" "<<"#"<<test<<":"<<" "<<"N"<<"\n";
            test++;
        }
    }
    return 0;
}