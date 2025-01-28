package oops;

public class Bank {
	//class data members
	//Instance variables
	//Attributes
	//Fields	
	//States of an object
	//Properties of an object
	private int accNo;
	private String accName;
	private double balance;
	
	//Member methods
	public void createAccount(int  number, String name, double initalAmount){
		accNo = number;
		accName = name;
		balance = initalAmount;
	}
	public boolean deposit(double amount) {
		if (amount% 100 == 0) {
			balance += amount;
			return true;
		}
		return false;
	}
	public byte withdraw(double amount) {
		if ( amount % 100 == 0) {
			if (balance>=amount) {
				balance-=amount;
				return 1;
			}
			return -1;
		}
		return 0;
	}
	public double getBalance() {
		return balance;
	}
}
