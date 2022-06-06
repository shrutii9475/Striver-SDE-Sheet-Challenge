/************
 * https://www.codingninjas.com/codestudio/problems/1089580?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
 * https://leetcode.com/problems/pascals-triangle/
 * ******/
class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> ret;
	    for (int i = 0; i < n; i++) 
        {
		    vector<int> row(i + 1, 1);
		    for (int j = 1; j < i; j++) {
			    row[j] = ret[i - 1][j] + ret[i - 1][j - 1];
		}
		ret.push_back(row);
	}
	return ret;
    }
};