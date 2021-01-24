package str;

public class lc13 {
	public int romanToInt(String s) {
		int res = 0;
		char now = 0, pre;
		for (int i = 0; i < s.length(); i++) {
			pre = now;
			now = s.charAt(i);
			if (now == 'M') {
				res += 1000;
				if (pre == 'C') {
					res -= 200;
				}
			} else if (now == 'D') {
				res += 500;
				if (pre == 'C') {
					res -= 200;
				}
			} else if (now == 'C') {
				res += 100;
				if (pre == 'X') {
					res -= 20;
				}
			} else if (now == 'L') {
				res += 50;
				if (pre == 'X') {
					res -= 20;
				}
			} else if (now == 'X') {
				res += 10;
				if (pre == 'I') {
					res -= 2;
				}
			} else if (now == 'V') {
				res += 5;
				if (pre == 'I') {
					res -= 2;
				}
			} else if (now == 'I') {
				res += 1;
			} else {
				return -1;
			}
		}
		return res;
	}
}
