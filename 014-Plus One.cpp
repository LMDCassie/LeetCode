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
������Ҫ��ԭ�������ʾ�����ּ������
ֱ���ж����һλ�Ƿ�Ϊ9
��9���Ϊ0
������ǰ�ظ��ж�
����ͷΪ0
���1��
��ĩλ����9
ֱ����ĩλ��һ����*/