class Solution {
public:
	int mySqrt(int x) {
		if (x <= 1)return x;
		int res;
		for (res = 1; res < x&&x <= INT_MAX; res++) {
			if (res > x / res)break;
		}
		return res - 1;
	}
};
/*
res*res会导致溢出
要考虑x=INT_MAX的情况/