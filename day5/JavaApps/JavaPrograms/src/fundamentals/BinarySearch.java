package fundamentals;

import java.util.Arrays;

public class BinarySearch {

	public static void main(String[] args) {
		int arr[] = {10,3,4,6,25,678};
		int key = new java.util.Scanner(System.in).nextInt();
		Arrays.sort(arr);
		int lb, ub, mid;
		lb = 0; ub = arr.length - 1;
		while(lb <=ub) {
			mid = (lb+ub)/2;
			if (arr[mid]==key) {
				System.out.println("Found!");
				System.exit(0); //Terminate the application
			}
			else if (arr[mid] < key)
				lb = mid+1;
			else
				ub = mid -1;
		}
		System.out.println("Not Found!");
	}
}
