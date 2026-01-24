class Solution {
  public:
    int search(vector<int>& arr, int x) {
        int N = arr.size();
        for(int i = 0; i < N; i++) {
            if(arr[i] == x)
                return i;
        }
        return -1;
    }
};
