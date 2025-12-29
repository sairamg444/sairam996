import java.util.Scanner;
public class Armstrong
{
public static void main(String[] args)
{
int sum=0,num,digits=0,temp;
Scanner sc = new Scanner(System.in);
System.out.print("Enter a number :");
num = sc.nextInt();

//count digits
temp=num;
while(temp>0)
{
digits++;
temp/=10;
}
//calculate Armstrong sum
temp=num;
while(temp>0)
{
int remainder = temp % 10;
sum += Math.pow(remainder,digits);
temp/=10;
}
//check condition
if(sum==num)
{
System.out.println(num + " is an Armstrong number.");
}
else
{
System.out.println(num + " is not an Armstrong number.");
}
}
}

