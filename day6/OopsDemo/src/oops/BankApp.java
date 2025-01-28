package oops;

public class BankApp {

	public static void main(String[] args) {
		//Creating an object to Bank class
		Bank customer1 = new Bank();
		
		//Accessing class member via object
		customer1.createAccount(1001, "Roel", 100000);
		System.out.println("Curent Balance :" + customer1.getBalance());
		customer1.deposit(30000);
		System.out.println("Curent Balance :" + customer1.getBalance());
		int result = customer1.withdraw(21240);
		if (result == 1)
			System.out.println("Curent Balance :" + customer1.getBalance());
		else if (result == 0)
			System.out.println("Amount should be multiples of hundred!");
		else {
			System.out.println("Insufficient Fund!");
			System.out.println("Actual Balance : " + customer1.getBalance());
		}

	}
}
