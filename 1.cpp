#include<bits/stdc++.h>
using namespace std;
int countpair(vector<int> ar,int target)
{
    unordered_set<int> set;
    unordered_set<int> seen;
    int count = 0;
    for( int num : ar)
    {
        if(set.find(target - num) != set.end() && seen.find(num) == seen.end())
        {
            count++;
            seen.insert(num);
            seen.insert(target - num);
        }
        set.insert(num);
    }
    return count;
}
int main()
{
    vector<int> arr = {1,5,1,5,};
    int k = 6;
    cout<<"total pairs  :  "<<countpair(arr,k);
    return 0;
}