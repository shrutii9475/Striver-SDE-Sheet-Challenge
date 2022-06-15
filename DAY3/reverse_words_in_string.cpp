/*************
 * https://leetcode.com/problems/reverse-words-in-a-string/submissions/
 * 151. Reverse Words in a String
Given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        
        string result;
        int i = 0, n = s.length();
        
        while(i < n){
			
            while(i < n && s[i] == ' ') i++;
            if(i >= n) break;
            int j = i;
            while(j < n && s[j] != ' ') j++;
            string sub = s.substr(i, j-i);
            if(result.length() == 0) result = sub;
            else result = sub + " " + result;
            i = j+1;
        }
        return result;
        
    }
};