/*************
 * https://www.codingninjas.com/codestudio/problems/630526?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
 * https://leetcode.com/problems/maximum-subarray/submissions/
 * ***********/

#include <bits/stdc++.h>
using namespace std;
 
long long maxSubarraySum(int arr[], int nums)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long MAX = arr[0];
    long long sum = 0;
    for(int i = 0; i < nums; i++) {
        sum += arr[i];
        MAX = max(sum, MAX);
        if(sum < 0) sum = 0;
    }
    return MAX;
}