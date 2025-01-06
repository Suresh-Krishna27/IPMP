//https://www.geeksforgeeks.org/find-the-missing-number/
int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int sum = accumulate(arr.begin(), arr.end(), 0);
        return (n+2)*(n+1)/2-sum;
    }
