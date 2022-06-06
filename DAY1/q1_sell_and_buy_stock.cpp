/************
 * https://www.codingninjas.com/codestudio/problems/893405?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
 ***********/

#include <bits/stdc++.h> 
#include<vector>
using namespace std;

int maximumProfit(vector<int> &pr){
    
    int n=pr.size(), mini= pr[0], profit=0;
    
    for(int i=0; i<n; i++)
    {
        if(pr[i] < mini)    mini=pr[i];
        if(pr[i]-mini > profit)
            profit=pr[i]-mini;
    }
    return profit;
}
