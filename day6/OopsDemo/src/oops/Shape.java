package oops;

public class Shape {
	//finding area of Circle
	public static double findArea(double radius) {
		return Math.PI * Math.pow(radius, 2);
	}
	//Method overloading
	//finding area of Rectangle
	public static double findArea(double length, double breadth) {
		return length * breadth;
	}
	//finding area of Triangle
	public static double findArea(double x, double y, double z) {
		double s = (x+y+z)/2;
		return Math.sqrt(s* (s-x) * (s-y) * (s-z));
	}
}
