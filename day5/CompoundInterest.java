public class CompoundInterest{
    public static void main(String[] arg){
        long principalAmount = Long.parseLong(arg[0]);
        double rateOfInterest = Double.parseDouble(arg[1]); //
        double timeInYears = Double.parseDouble(arg[2]); //
        double interest = principalAmount * Math.pow( 1+ rateOfInterest / 100,timeInYears );
//        System.out.println("The compound interest is: " + interest);  // Output: The compound interest is: 1210.0
        System.out.printf("The compound interest is: %.2f", interest);  // Output: The compound interest is: 1210.0
        // System.out.println(arg[0]);
    }
}

// Naming Conventions

// 1. Class names should be in UpperCamelCase. For example: CompoundInterest.
// 2. Method names should be in lowerCamelCase. For example: calculateInterest.
// 3. Variable names should be in lowerCamelCase. For example: principalAmount.
// 4. Constants should be in all uppercase letters with underscores separating words. For example: PRINCIPAL_AMOUNT.
// 5. Package names should be in reverse domain name notation. For example: com.example.myproject.