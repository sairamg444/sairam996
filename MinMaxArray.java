import java.util.Scanner;
public class MinMaxArray{
public static void main(String[] args){
Scanner sc = new Scanner(System.in);

System.out.print("Enter no of elements :");
int n = sc.nextInt();
int[] arr = new int[n];
 //read array elements
System.out.println("Enter array elements : ");
for(int i=0;i<n;i++)
{
  arr[i] = sc.nextInt();
}
//Display given order of elements
System.out.println("\nGiven array of elements:");
for(int i=0;i<n;i++)
{
 System.out.print(arr[i] + " ");
}
//Initialize max and min with first element
int max =arr[0];
int min = arr[0];
//find max and min
for(int i=1;i<n;i++)
{
if(arr[i] > max)
{
max = arr[i];
}
if(arr[i] < min)
{
min=arr[i];
}
}
//Display results
System.out.println("\n\nMaximum element = " + max);
System.out.println("minimum element = " + min);
}
}
