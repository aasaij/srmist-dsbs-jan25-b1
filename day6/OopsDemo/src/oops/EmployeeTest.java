package oops;

public class EmployeeTest {
	public static void main(String[] args) {
		Employee e1 = new Employee();
		Employee e2 = new Employee();
		Employee e3 = new Employee();
		Employee e4 = new Employee(1001, "Sidhansu", 1000000);
		//e4 object is ready for garbage collector
		e4 = null;
		e1 = null;
		e2 = null;
		System.gc();
//		System.out.println(e2.getCompanyName());
		System.out.println(e3.getCompanyName());
	}
}
