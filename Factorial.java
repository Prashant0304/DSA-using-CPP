// program to find factorial of n using recursion

import java.util.Scanner;

class Factorial{
	
	public static int factorial(int n){
		if(n==0 || n==1)
			return 1;
		return n * factorial(n-1);
	}
	
	
	
	public static void main(String args[]){
		System.out.println("Enter n value ");
		Scanner sc = new Scanner(System.in);
		int input = sc.nextInt();
		int fact = factorial(input);
		System.out.println("Factorial of number "+input+" is "+fact);
	}

}