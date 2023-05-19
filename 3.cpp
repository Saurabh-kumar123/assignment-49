#include<bits/stdc++.h>
using namespace std;
int counttriplet(int ar[],int n)
{
    unordered_set<int> s;
    for(int i = 0 ; i < n ; i++ )
    s.insert(ar[i]);
    int count = 0;
    for(int i = 0 ; i < n - 1; i++ )
    {
        for(int j = i+1 ; j < n ; j++ )
        {
            int xr = ar[i] ^ ar[j];
            if(s.find(xr) != s.end() && xr != ar[i] && xr != ar[j])
            count++;
        }
    }
    return  count / 3;
}
int main()
{
    //int ar[]={1,3,5,10,14,15};
    int ar[]={4,7,5,8,3,9};
    int n = sizeof(ar) / sizeof(ar[0]);
    cout<<counttriplet(ar,n)<<endl;
    return 0;
}