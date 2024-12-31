//https://leetcode.com/problems/find-the-duplicate-number/solutions/1894339/C++-8-Different-solutions-to-this-problem-or-Do-you-have-another-one/
int findDuplicate(vector<int>& nums) {
	vector<int> seen(nums.size()+1);
	for(auto n: nums){
		if(seen[n]) 
			return n;
		seen[n] = true;
	}
	return 0; 
}
