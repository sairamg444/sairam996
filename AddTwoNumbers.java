import java.util.Scanner;

class AddTwoNumbers
{
    public static void main(String[] args)
    {
        int i, j, sum = 0;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter First No:");
        i = sc.nextInt();

        System.out.println("Enter second num:");
        j = sc.nextInt();

        sum = i + j;

        System.out.println("The sum of " + i + " and " + j + " is " + sum);
    }
}