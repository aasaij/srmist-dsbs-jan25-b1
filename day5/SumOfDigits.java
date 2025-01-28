import java.util.Scanner;

public class SumOfDigits {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        System.out.print("Enter an integer : ");
        int num = in.nextInt();
        System.out.println(num%9==0?9:num%9);
        in.close();  // Close the scanner after use.
    }

}

// Scanner class methods
//     next()  ==> Get string  --> word
//     nextLine() ==> get string --> sentence
//     nextInt() ==> get integer
//     nextDouble() ==> get double
//     nextFloat() ==> get float
//     nextBoolean() ==> get boolean
//     nextLong() ==> get long
//     nextByte() ==> get byte
//     nextShort() ==> get short
