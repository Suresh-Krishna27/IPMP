class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Your Code Here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for (int i = 0; i < n - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue; 
        int l = i + 1, r = n - 1;
        int requiredSum = target - arr[i];
        while (l < r) {
            int currentSum = arr[l] + arr[r];
            if (currentSum == requiredSum) return true;
            else if (currentSum < requiredSum) l++;
            else r--;
        }
    }
    return false;
       
    }
};

