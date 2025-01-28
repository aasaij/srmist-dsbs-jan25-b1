package oops;
//Define a class CARRENTAL with the following details :
//Class Members are : CarId of int type, CarType of string type and Rent of float type.
//
//Define GetCar() method which accepts CarId and CarType.
//GetRent() method which return rent of the car on the basis of car type, i.e. Small Car = 1000, Van = 800, SUV = 2500
//
//ShowCar() method which allow user to view the contents of cars i.e. id, type and rent.


public class CarRental {
	//class data members
	private int carId;
	private String carType;
	private float rent;
	
	//class member methods
	public void getCar(int carId, String carType) {
		this.carId = carId;
		this.carType = carType.toUpperCase();
		this.rent  = switch(this.carType) {
			case "SMALL CAR" -> 1000.0F;
			case "VAN" -> 800.0F;
			case "SUV" -> 2500.0f;
			default -> 0.0f;
		};		
	}
	public float getRent() {
		return rent;
	}
	
	public String showCar() {
		return "[" + carId + ", '" + carType + "', " + rent + "]";
	}
	public String toString() {
		return  showCar();
	}
	
}

//[1234, 'SMALL CAR', 1000.0] 

