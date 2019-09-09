class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int res = INT_MIN;
		int temp = 0;
		for (int num : nums) {
			temp = max(temp + num, num);//ȡ���������ͣ����temp+num����ѵ�ǰnum�����������У���֮�������������¿�ʼȡ����
			res = max(temp, res);//res��¼���ǵ�����Ϊֹ�������������
		}
		return res;
	}
};

/*
for(int num : nums)��һ��foreachѭ������

��nums���������б������ж��ٸ������ͱ������ٱ顣

ÿ�α�����ʱ��Ͱ����е�һ��ֵ��num;
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