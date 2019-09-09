class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		if (nums.empty())return 0;
		return findmax(nums, 0, (int)nums.size() - 1);
	}
	int findmax(vector<int>& nums, int left, int right) {
		if (left >= right)return nums[left];
		int mid = left + (right - left) / 2;
		int lmax = findmax(nums, left, mid - 1);
		int rmax = findmax(nums, mid + 1, right);
		int mmax = nums[mid];
		int temp = nums[mid];
		for (int i = mid - 1; i >= left; i--) {
			temp += nums[i];
			mmax = max(temp, mmax);
		}
		temp = mmax;
		for (int i = mid + 1; i <= right; i++) {
			temp += nums[i];
			mmax = max(temp, mmax);
		}
		return max(mmax, max(lmax, rmax));
	}
};