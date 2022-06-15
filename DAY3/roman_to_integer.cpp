/*************
 * https://leetcode.com/problems/roman-to-integer/
 * https://www.codingninjas.com/codestudio/problems/981308?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
 * 13. Roman to Integer

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

Given a roman numeral, convert it to an integer.
**************/

#include<bits/stdc++.h>
#include<string>
using namespace std;


class Solution {
public:
    
    int valueofc(char c)
    {
        switch(c){
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
        }
        return 0;
    }
    
    int romanToInt(string s) {
        
        int n = s.length() -1;
        int sum = valueofc(s[n]);
        n -= 1;
        while(n >= 0)
        {
            if( valueofc(s[n]) >= valueofc(s[n+1]) )
               sum += valueofc(s[n]) ;
            else 
               sum -= valueofc(s[n]);
               n--;
        }
        return sum;
    }

};