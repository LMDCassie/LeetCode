class Solution {
public:
	string addBinary(string a, string b) {
		string res;
		int a_size = a.size();
		int b_size = b.size();
		int size = max(a_size, b_size);
		if (a_size < b_size) {
			for (int i = a_size; i < size; i++) {
				a.insert(a.begin(), '0');
			}
		}
		if (a_size > b_size) {
			for (int i = b_size; i < size; i++) {
				b.insert(b.begin(), '0');
			}
		}
		bool carry = false;
		for (int i = size - 1; i >= 0; i--) {
			int temp = 0;
			if (carry)temp = a[i] - '0' + b[i] - '0' + 1;
			else temp = a[i] - '0' + b[i] - '0';
			if (temp == 0) {
				carry = false;
				res.insert(res.begin(), '0');
			}
			else if (temp == 1) {
				carry = false;
				res.insert(res.begin(), '1');
			}
			else if (temp == 2) {
				carry = true;
				res.insert(res.begin(), '0');
			}
			else {
				carry = true;
				res.insert(res.begin(), '1');
			}
		}
		if (carry)res.insert(res.begin(), '1');
		return res;
	}
};

/*
要注意string与int的转换
计算要考虑进位*/