package oops;

public class MethodDemo {
	private static boolean isVowel(char ch) {
//		return  (ch =='a' || ch == 'e' || ch =='i' || ch == 'o' ||
//			ch == 'o' || ch =='A' ||ch=='E' ||ch=='I' || ch=='O' ||
//			ch == 'U');
		return "aeiouAEIOU".contains(""+ch);
	}
	private static boolean isPrime(int n) {
		if (n==1)
			return false;
		if (n > 3 && (n %2 == 0 || n % 3 == 0))
			return false;
		for (int i = 5; i<=Math.sqrt(n);i+=6 )
			if (n %i == 0 || n % (i+2)==0)
				return false;
		return true;
	}
	public static void main(String[] args) throws java.io.IOException {
//		char x = (char)System.in.read();
//		if (isVowel(x))
//			System.out.println("Vowel");
//		else
//			System.out.println("Not a vowel");
		int x = new java.util.Scanner(System.in).nextInt();
		System.out.println(isPrime(x)?"Prime":"Not Prime");
	}

}
