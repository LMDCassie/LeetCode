class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) return false;
		else if (x == 0)return true;
		else {
			int div = 1;//x�Ǽ�λ��
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
				//��ͷȥβ
				div /= 100;
			}
		}
		return true;
	}
};
/*
ȡͷ��β�Ƚ�*/