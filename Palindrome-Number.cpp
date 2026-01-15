1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if(x<0)
5        return 0;
6        int num=x,rem,ans=0;
7        while(num)
8        {
9            rem=num%10;
10            num/=10;
11            if(ans>INT_MAX/10)
12            return 0;
13            ans=ans*10+rem;
14        }
15        if(ans==x)
16            return 1;
17            else 
18            return 0;
19        
20    }
21};