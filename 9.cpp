/*9. Given N strings of equal lengths. The strings contain only digits (1 to 9).
The task is to count the number of strings that have an index position such that the digit at
this index position is greater than the digits at the same index position of all the other strings.
 Examples: Input: arr[] = {“223”, “232”, “112”} Output: 2 First digit of the 1st and 2nd strings are
 the largest. Second digit of the string 2nd is the largest. Third digit of the string 1st is the largest.
Input: arr[] = {“999”, “122”, “111”} Output: 1  */

#include<bits/stdc++.h>
using namespace std;
int countString(int n,int m,string s[])
{
     unordered_set<int> ind;
     for(int j=0;j<m;j++)
     {
          int mx = 0;
          for(int i=0;i<n;i++)
               mx = max(mx,(int)s[i][j] - '0');
          for(int i=0;i<n;i++)
               if(s[i][j] - '0' == mx)
               ind.insert(i);

     }
     return ind.size();
}
int main()
{
     string s[] ={"999","122","111","211"};
     int n = sizeof(s)/sizeof(s[0]); //n = 4
     int m = s[0].length();          //m = 3;
     cout<<countString(n,m,s)<<endl;
     return 0;
}

