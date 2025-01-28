package fundamentals;

public class LabelBreakDemo {

	public static void main(String[] args) {
		Loop1:
		for (int i = 1; i<=10; i++) {
			Loop2:
			for (int j = 1; j<=10; j++) {
				if (j % 4 == 0)
					break Loop1;
				System.out.print(j);
			}
			System.out.println();
		}
	}
}
