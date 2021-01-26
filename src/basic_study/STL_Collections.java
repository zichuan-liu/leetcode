package basic_study;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class STL_Collections {
	public static void main(String[] args) {
		// Instatiates a array list object
		List<Integer> arr_l = new ArrayList<Integer>();

		// By using add() method is to add
		// objects in an array list
		arr_l.add(10);
		arr_l.add(20);
		arr_l.add(30);
		arr_l.add(40);
		arr_l.add(50);

		// Display ArrayList
		System.out.println("Array List : " + arr_l);

		// By using reverse() method is to
		// reverse the order of elements
		Collections.reverse(arr_l); // 反转list

		// Display Reversible ArrayList
		System.out.println("Collections.reverse(arr_l): " + arr_l);

	}
}
