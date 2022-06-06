/**************
 * https://leetcode.com/problems/sort-colors/
 * https://www.codingninjas.com/codestudio/problems/631055?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
 * */

#include <bits/stdc++.h> 
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& a) {
        
    //void sort012(int *a, int n)
        int n =a.size();
        int zero=0, one=0, two=0;
        for(int i=0; i<n; i++)
        {
            if( a[i]==0)    zero++;
            else if( a[i]==1 )    one++;
            else    two++;
        }
        for(int i=0; i<n; i++)
        {
            if(i<zero)    a[i]=0;
            else if(i<zero+one)    a[i]=1;
            else a[i]=2;
        }
    }
        
};