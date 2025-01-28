package fundamentals;

import java.util.Arrays;

public class ArrayDemo {

	public static void main(String[] args) {
////		int[] arr;
//		int []arr;
////		int arr[];
//		
//		int[] arr1, arr2, arr3;
		int arr[] = {10,3,4,6,25,678};
		Arrays.sort(arr);
		System.out.print("[");
		for (int i = 0; i<arr.length-1; System.out.print(arr[i++] + ","));
		System.out.print(arr[arr.length-1] +"]");
	}

}
