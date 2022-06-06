/***************
 * https://leetcode.com/problems/set-matrix-zeroes/submissions/
 * https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_3846774?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
 * ***********/
#include <bits/stdc++.h> 
#include<vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        
        int r = m.size(), c = m[0].size();
        vector<int> row(r,-1), col(c,-1);
        for(int i=0; i<r; i++)
        {   for(int j=0; j<c; j++)
            {   if(m[i][j] == 0)
                {
                    row[i]=0;   col[j]=0;
                }
            }
        }
        for(int i=0; i<r; i++)
        {   for(int j=0; j<c; j++)
                if(row[i]==0 || col[j]==0)
                    m[i][j]=0;
        }
    }
};