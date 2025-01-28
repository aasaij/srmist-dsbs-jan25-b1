package fundamentals;

import java.util.Scanner;
//Program to print unique element of list
public class UniqueElements {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int arr[], n;
//		arr = new int[10];
//		arr[0] = 100;
//		arr[1] = 200;
//		arr[2] = 300;
////		String str = ""+100;
//		
//		System.out.println(arr[0]+ " " + arr[1]);
		//Getting size of the list
		n = in.nextInt();
		//allocating memory for list of N integers
		arr = new int[n];
		//Getting list of integers from the user
		for (int i = 0; i<n; i++)
			arr[i] = in.nextInt();
		for (int i = 0; i<n; i++) {
			boolean found = false;
			for (int j = i-1; j>=0; j--)
				if (arr[i]==arr[j]) {
					found = true; break;
				}
			if(!found)
				System.out.println(arr[i]);
		}
	}

}
