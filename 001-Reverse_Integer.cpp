class Solution {
public:
	int reverse(int x) {
		int reverse_num = 0;
		while (x != 0) {
			if (abs(reverse_num) > INT_MAX / 10)return 0;
			reverse_num *= 10;
			reverse_num += (x % 10);
			x /= 10;
		}
		return reverse_num;
	}
};
/*不需要处理负号
需要判断是否溢出
*/