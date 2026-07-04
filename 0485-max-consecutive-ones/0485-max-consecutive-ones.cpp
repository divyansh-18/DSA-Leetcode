#include <bits/stdc++.h>

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

     int count =0;
     int maxl =0;
     for(int i =0;i<std::size(nums);i++ ){

        if(nums[i]==1){
            count++;
        }else{
            maxl = max(count,maxl);
            count =0;
        }
     } 
     return max(maxl,count);
    }
};