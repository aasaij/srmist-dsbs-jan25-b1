package fundamentals;

public class LabelContinueDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str = "Alok is cute";
		Loop1:
		for (int j = 1; j<=5; j++)
		for (int i = 0; i<str.length(); i++) {
			if (!"aeiouAEIOU".contains(""+str.charAt(i)))
				continue Loop1;
			System.out.print(str.charAt(i));
		}
	}
}
