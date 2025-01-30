//https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        unordered_map<int,int> p;
        for(int i=0;i<n;i++){
            int k=target-arr[i];
            if(p.find(k)!=p.end()){
                return true;
            }
            p.insert({arr[i],i});
        }
        return false;
    }
};
