package basic_study;

import java.util.LinkedList;
import java.util.Queue;

public class STL_queue {
	public static void main(String[] args) {
		Queue<Integer> queue = new LinkedList<Integer>();// 创造队列
		queue.isEmpty();// 判断队列为空
		queue.add(1);// 添加
		queue.offer(1);// 添加
		queue.poll();// 弹出第一个 FIFO

	}
}
