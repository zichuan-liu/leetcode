package basic_study;

public class STL_string {
	public static void main(String[] args) {
		String ss = "";
		ss += "sdadasd";// 添加
		ss.charAt(2); // 当成数组取值，char
		ss += String.valueOf(ss.charAt(2));// 将char变成string
		String sssss = new String(ss.toCharArray());// 字符串和字符数组转换

		StringBuilder[] str = new StringBuilder[3];// 字符串数组
		for (int i = 0; i < 3; i++) {
			str[i] = new StringBuilder();
			str[i].append("adsasdasd");
		}
	}
}
