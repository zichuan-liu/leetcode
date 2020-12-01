package basic_study;

public class STL_string {
	public static void main(String[] args) {
		String ss = "";
		ss += "sdadasd";// 添加
		ss.charAt(2); // 当成数组取值，char
		ss += String.valueOf(ss.charAt(2));// 将char变成string

		StringBuilder[] str = new StringBuilder[3];// 字符串数组
		for (int i = 0; i < 3; i++) {
			str[i] = new StringBuilder();
			str[i].append("adsasdasd");
		}
	}
}
