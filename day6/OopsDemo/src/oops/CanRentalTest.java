package oops;

public class CanRentalTest {

	public static void main(String[] args) {
		CarRental myCar1 = new CarRental();
		myCar1.getCar(7065, "SUV");
		System.out.println("Rent : " + myCar1.getRent());
		String str = ""+myCar1;
//		System.out.println(myCar1);
		System.out.println(str);
//		System.out.println("Car Details : " + myCar1.showCar());
	}
}
