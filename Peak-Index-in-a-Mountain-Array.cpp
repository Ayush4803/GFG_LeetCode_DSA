1class Solution {
2public:
3    int peakIndexInMountainArray(vector<int>& arr) {
4        int start = 1;
5        int end = arr.size() - 2; // peak cannot be at ends
6
7        while (start <= end) {
8            int mid = start + (end - start) / 2;
9
10            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
11                return mid; // peak found
12            }
13            else if (arr[mid] > arr[mid - 1]) {
14                start = mid + 1; // move right
15            }
16            else {
17                end = mid - 1; // move left
18            }
19        }
20        return -1; // safety
21    }
22};
23