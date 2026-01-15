1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4
5
6        if(n<1)
7        return 0;
8
9        while(n!=1)
10        {
11            if(n%2==1)
12            
13                return 0;
14                n=n/2;
15            
16        }
17        return 1;
18    }
19};