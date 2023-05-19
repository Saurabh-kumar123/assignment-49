/*8. Find all matrix elements which are minimum in their row and maximum in their column */

 #include<bits/stdc++.h>
 using namespace std;

 vector<int> minmaxNumber(vector<vector<int>> &matrix,vector<int> &reg)
 {
      unordered_set<int> set;
      for(int i=0;i<matrix.size();i++)
      {
           int minr = INT_MAX;
           for(int j=0;j<matrix[i].size();j++)
           {
                minr = min(minr,matrix[i][j]);
              //minr = matrix[i][j] < minr ? matrix[i][j] : minr;
           }
           set.insert(minr);
      }
      for(int j=0;j<matrix[0].size();j++)
      {
           int maxr = INT_MIN;
           for(int i=0;i<matrix.size();i++)
           {
                maxr = max(maxr,matrix[i][j]);
           }
           if(set.find(maxr)!=set.end())
               reg.push_back(maxr);
      }
      return reg;

 }

 int main()
 {
      vector<vector<int>> mat
      = {  {1 , 10 , 4},
           {29 ,33 , 28},
           {25 ,26 , 27}
        };

      vector<int> ans;
      minmaxNumber(mat,ans);
      if(ans.size()==0)
       cout<<" -1"<<endl;
     for(int i=0;i<ans.size();i++)
          cout<<ans[i]<<endl;
      return 0;
 }
