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
���ܣ� ������������������У� ����һ�γ��ֵ�Ԫ�ش�ǰ�����ţ� ����Ҳ�ظ����ֵ�Ԫ���������ں���
����ֵ�� ���ص������� ������ָ������ظ�Ԫ�ص��׵�ַ
  */