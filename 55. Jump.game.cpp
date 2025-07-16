#include<iostream> 
#include<vector> 
#include<algorithm>

using namespace std; 

class Solution{
public: 
     bool canJump(vector<int>& nums){
       int m = nums.size(); 
       int n = 0; 
       for(int i=0; i<m; ++i){
         if(i>n) return false; 
         n = max(n, i+nums[i]); 
       }
       return true; 
     }
};
int main(){
  vector<int> nums = {2,3,1,1,4}; 
  Solution sol; 
  cout<< boolalpha << sol.canJump(nums) << endl; 
  return 0; 
}
