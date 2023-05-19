/*10.Unordered set operators in C++ STL(== and !=)  */

 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
      unordered_set<int> sample1 = {10,20,30,40,50};
      unordered_set<int> sample2 = {80,30,50,40,20};
      unordered_set<int> sample3 = {20,40,30,50,80};
      if(sample1==sample2)
          cout<<"sample 1  & sample 2  are equal"<<endl;
      else if(sample2==sample3)
          cout<<"sample 2  & sample 3  are equal"<<endl;
      else if(sample1==sample3)
         cout<<"sample 1  &  sample 3  are equal"<<endl;
      else
          cout<<"no one sample are equal"<<endl;

      return 0;
 }
