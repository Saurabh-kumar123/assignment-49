/*7. Given an array of strings arr[] of size N, the task is to print all the distinct strings present in
the given array. Examples: Input: arr[] = { “Good”, “God”, “Good”, “God”, “god” }
Output: god Good God */
#include<bits/stdc++.h>
using namespace std;
void findDistinct(vector<string> &arr,int n)
{
     unordered_set<string> DistString;
     for(int i=0;i<n;i++)
     {
          //if(!DistString.count(arr[i]))
          if(DistString.find(arr[i]) == DistString.end())
               DistString.insert(arr[i]);
     }
     for(auto String : DistString)
     {
          cout<<String <<" ";
     }
}
int main()
{
     vector<string> arr={"Good","God","Good","God","god"};
     int n = arr.size();
     findDistinct(arr,n);
     cout<<endl;
     return 0;
}
