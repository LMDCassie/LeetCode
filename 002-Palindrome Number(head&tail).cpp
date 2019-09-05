class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) return false;
		else if (x == 0)return true;
		else {
			int div = 1;//x是几位数
			while (x / div >= 10)div *= 10;
			int left;
			int right;
			while (x > 0)
			{
				right = x % 10;
				left = x / div;
				if (right != left)return false;
				x = x % div;
				x /= 10;
				//掐头去尾
				div /= 100;
			}
		}
		return true;
	}
};
/*
取头和尾比较*/