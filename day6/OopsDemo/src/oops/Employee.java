package oops;

public class Employee {
	private static String companyName = "Aaron Technologies";
	//Instance variables
	private int empId;
	private String empName;
	private double salary;	
	
	//Constructor
	//default constructor
	public Employee(){
	}
	public Employee (int id, String name) {
		//Calling the same class constructor which is having three parameters
		this(id, name, 0);
	}
	//parameterized constructor
	//constructor overloading
	public Employee(int id, String name, double salary) {
		empId = id;
		empName = name;
		this.salary = salary;
	}
	
	public String getCompanyName() {
		return companyName;
	}
	protected void finalize() {
		System.out.println("Object destroyed!");
	}
}
