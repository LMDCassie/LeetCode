class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.empty())return 0;
		int size = nums.size();
		int res = 0;
		for (int i = 0; i < size; i++) {
			if (nums[i] != nums[res])nums[++res] = nums[i];
		}
		return res + 1;
	}
};