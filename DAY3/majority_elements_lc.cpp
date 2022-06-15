/**********
 * 169. Majority Element
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

https://leetcode.com/problems/majority-element/
****************/
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority, count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                majority = nums[i];
            }
            if(majority == nums[i]) count++;
            else count--;
        }
        return majority;
    }
};