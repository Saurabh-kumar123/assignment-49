#include<bits/stdc++.h>
using namespace std;
void printallAP(int ar[],int n)
{
    unordered_set<int> s;
    for(int i = 0; i < n - 1 ; i++ ) 
    {
        for(int j = i+1 ; j < n ; j++ )
        {
            int diff = ar[j]-ar[i];
            if(s.find(ar[i] - diff) != s.end())
            cout<<ar[i]-diff<<" "<<ar[i]<<" "<<ar[j]<<endl;
        }
        s.insert(ar[i]);
    }
}
int main()
{
    int arr[]={2,6,9,12,17,22,31,32,35,42};
    int n = sizeof(arr)/sizeof(arr[0]);
    printallAP(arr,n);
    return 0;
}