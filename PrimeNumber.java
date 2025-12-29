import java.util.Scanner;
class PrimeNumber
{
   public static void main(String[] args)
   {
     int num;
     boolean isPrime =  true;
     Scanner SC=new Scanner(System.in);
     System.out.println("Enter the number : ");
     num=SC.nextInt();
     for(int i=2;i<num;i++)
     {
       if(num % i == 0)
       {
         isPrime = false;
         break;
       }
     }
     if(isPrime == true)
     {
       System.out.println("The given number "+num+" is a prime");
     }
      else
     {
      System.out.println("The given number "+num+" is not a prime");
     }
   }
}
