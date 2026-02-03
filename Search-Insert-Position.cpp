1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int s = 0;
5        int e = nums.size() - 1;
6        int index = nums.size(); // default insert at end
7
8        while (s <= e) {
9            int mid = s + (e - s) / 2;
10
11            if (nums[mid] == target) {
12                return mid;
13            }
14            else if (nums[mid] < target) {
15                s = mid + 1;
16            }
17            else {
18                index = mid;   // possible insert position
19                e = mid - 1;
20            }
21        }
22        return index;
23    }
24};
25