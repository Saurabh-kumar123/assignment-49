/*6. Given an array arr[] consisting of N positive integers, the task is to find the number of
pairs such that the Greatest Common Divisor(GCD) of the pairs is not a prime number.
 The pair (i, j) and (j, i) are considered the same. Examples:
 Input: arr[] ={ 2, 3, 9}
  Output: 10
  Explanation: Following are the possible pairs whose GCD is not prime: (0, 1):
  The GCD of arr[0](= 2) and arr[1](= 3) is 1. (0, 2):
  The GCD of arr[0](= 2) and arr[2](= 9) is 1.
   Therefore, the total count of pairs is 2.
   Input: arr[] = {3, 5, 2, 10} Output: 4    */

#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b)
{
     for(int i=1;i<=a*b;i++)
          if(i%a==0&&i%b==0)
               return (a*b)/i;
}
bool prime(int n)
{
     int ct=0;
     for(int i=1;i<=n;i++)
     {
          if(n%i==0)
          ct++;
     }

     if(ct==2)
          return true;
     else
          return false;
}
int main()
{
      int arr[]={3,5,2,10};
      int ctt=0;
      int n = sizeof(arr)/sizeof(arr[0]);
      for(int i=0;i<n-1;i++)
      {
           for(int j=i+1;j<n;j++)
           {
                int h = hcf(arr[i],arr[j]);
                if(prime(h)==false)
                ctt++;
           }

      }
      cout<<"Output  :  "<<ctt<<endl;
     return 0;
}

