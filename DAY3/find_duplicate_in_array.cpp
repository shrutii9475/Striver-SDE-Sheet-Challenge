/*****
 * Find the duplicate in an array of N+1 integers
Problem Statement: Given an array of N + 1 size, where each element is between 1 and N. Assuming there is only one duplicate number, your task is to find the duplicate number.
  https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_1112602?topList=striver-sde-sheet-problems&leftPanelTab=0
 * 
 * 
 * *************/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int findDuplicate(vector<int> &arr, int n){
    sort(arr.begin(),arr.end());
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]==arr[i+1])  return arr[i];  
    }
    return 0; 
    
}
