class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int res = INT_MIN;
		int temp = 0;
		for (int num : nums) {
			temp = max(temp + num, num);//取子数组计算和，如果temp+num大则把当前num加入子数组中，反之丢弃子数组重新开始取数组
			res = max(temp, res);//res记录的是到现在为止的最大的子数组和
		}
		return res;
	}
};

/*
for(int num : nums)是一个foreach循环遍历

把nums这个数组进行遍历，有多少个数，就遍历多少遍。

每次遍历的时候就把其中的一个值给num;
[-2,1,-3,4,-1,2,1,-5,4]
temp=0
temp=-2;
res=-2;
temp=1;
res=1;
temp=-2;
res=1;
temp=4;
res=4;
temp=3;
res=4;
temp=5;
res=5;
temp=6;
res=6;

*/