#include<bits/stdc++.h>
using namespace std;

 bool compare( int a, int b)
 {
    return a>b;
 }

void maximizeArray(int arr1[],int arr2[],int n)
{

    int arr3[n*2], k = 0;
    for(int i=0;i<n;i++)
    {
        arr3[k++]=arr1[i];
        arr3[k++]=arr2[i];

    }

    unordered_set<int> hash;

     sort(arr3,arr3+2*n,compare);

     int i = 0;
     while(hash.size()!=n)
     {
          if(hash.find(arr3[i])==hash.end())
          hash.insert(arr3[i]);
          i++;
     }

     k=0;
     for(int i = 0;i < n ; i++)
     {
          if(hash.find(arr2[i]) != hash.end())
          {
               arr3[k++]=arr2[i];
               hash.erase(arr2[i]);
          }
     }
     for(int i = 0;i < n ; i++)
     {
          if(hash.find(arr1[i]) != hash.end())
          {
               arr3[k++]=arr1[i];
               hash.erase(arr1[i]);
          }
     }
     for(int i = 0;i < n ;i++)
          arr1[i]=arr3[i];
}
  void printarray(int arr[],int n)
  {
       for(int i = 0;i < n ;i++)
          cout<<arr[i]<<" ";
       cout<<endl;
  }

int main()
{
    int  arr1[] = {7, 4, 8, 0, 1};
    int  arr2[] = {9, 7, 2, 3, 6};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    maximizeArray(arr1,arr2,size);
    cout<<endl;
    printarray(arr1,size);
    return 0;
}
