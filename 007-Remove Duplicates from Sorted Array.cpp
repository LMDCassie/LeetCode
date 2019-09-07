class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		vector<int>::iterator vector_iterator;
		vector_iterator = unique(nums.begin(), nums.end());
		if (vector_iterator != nums.end()) {
			nums.erase(vector_iterator, nums.end());
		}
		return nums.size();
	}
};/**
std::unique
功能： 对有序的容器重新排列， 将第一次出现的元素从前往后排， 其亻也重复出现的元素依次排在后面
返回值： 返回迭代器， 迭代器指向的是重复元素的首地址
  */