class Solution {
public:
	string addBinary(string a, string b) {
		string res = "";
		int m = a.size()-1;
		int n = b.size()-1;
		int carry = 0;
		while (m>=0 || n>=0) {
			int p;
			if (m >= 0)p = a[m--] - '0';
			else p = 0;
			int q;
			if(n >= 0)q = b[n--] - '0';
			else q = 0;
			int sum = p + q + carry;
			res = to_string(sum % 2) + res;
			carry = sum / 2;
		}
		if (carry)return '1' + res;
		else return res;
	}
};
/*
用%2和/2
取出数字，或直接补0*/

