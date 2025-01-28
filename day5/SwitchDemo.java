public class SwitchDemo {
    public static void main(String[] args){
        // int f = 1;
        // switch(f){
        //     case 1:
        //         System.out.println("One");break;
        //     default:
        //         System.out.println("False");
        // }
        int day = new java.util.Scanner(System.in).nextInt();
        // switch(day){
        //     case 1 -> System.out.println("It's Monday. Concentrate on studies");
        //     case 2,3,4 -> System.out.println("Still it's week day only");
        //     case 5 -> System.out.println("It's Friday. Get ready for week-end");
        //     case 6, 7 -> System.out.println("Enjoy the week-end");
        //     default -> System.out.println("Invalid day");
        // }
        System.out.println(switch(day){
            case 1 -> "It's Monday. Concentrate on studies";
            case 2,3,4 -> "Still it's week day only";
            case 5 -> "It's Friday. Get ready for week-end";
            case 6, 7 -> "Enjoy the week-end";
            default -> "Invalid day";
        }
        );

    }
}

// day number
// 1 ==> print "It's Monday. Concentrate on studies"
// 2,3,4 => print "Still week day only"
// 5 ==> "It's Friday. Get ready for week-end"
// 6,7 ==> "Enjoy your week-end"
// otherwise ==> print "Invalid day!"

