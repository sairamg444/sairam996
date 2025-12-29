/* sum of even terms in Fibonacci sequence*/
import java.util.Scanner;
public class Fibonacci
{
public static void main(String[] args)
{
int n,first=0,second=1,sum=0,next;
Scanner sc=new Scanner(System.in);
System.out.println("Enter the range : ");
n=sc.nextInt();
System.out.println("Fibonacci sequence upto "+n+" : ");
//print first number within the range
if(first <= n)
{
System.out.print(first + " ");
}
if
(second<=n)
{
System.out.print(second + " ");
}
while(true)
{
next = first + second;
if(next>n)
{
break;
}
//print the term
System.out.print(next + " ");
//Add even terms to sum
if(next % 2 == 0)
{
sum+=next;
}
first=second;
second=next;
}
System.out.println("\nSum of even Fibonacci numbers upto "+ n +" : " +sum);
}
}


