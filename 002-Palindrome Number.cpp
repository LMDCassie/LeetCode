class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) return false;
		else if (x == 0)return true;
		else {
			int temp = x;
			int pal = 0;
			while (x != 0) {
				if (pal > INT_MAX / 10)return false;
				pal *= 10;
				pal += x % 10;
				x /= 10;
			}
			if (pal == temp)return true;
			else return false;
		}
	}
};
/*
½è¼øReverse NumberµÄ×ö·¨*/