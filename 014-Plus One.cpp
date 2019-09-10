class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int n = digits.size();
		for (int i = n-1; i >= 0; i--) {
			if (digits[i] == 9)digits[i] = 0;
			else {
				digits[i] += 1;
				return digits;
			}
		}
		if (digits.front() == 0)digits.insert(digits.begin(), 1);
		return digits;
	}
};
/*
并不需要把原来数组表示的数字计算出来
直接判断最后一位是否为9
是9则改为0
继续向前重复判断
若开头为0
则加1；
若末位不是9
直接在末位加一返回*/