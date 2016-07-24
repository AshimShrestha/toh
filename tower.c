/*
* Program: To show the solution of Tower of Hanoi problem using recursive method.
*Author: Ashim Shrestha.
Date: July 25, 2016.
Reference:  Data structures using C and C++
*/

#include<stdio.h>
#include<stdlib.h>

 void tower(int, char , char , char); 
 
 int main()
 {
 	int n;
 	printf("Enter the no. of disk.\n");
 	scanf("%d",&n);
 	tower(n,'A','C','B');
 }
 
 void tower(int n, char A, char C, char B)
 {
 	if(n>0)
 	{
	 	tower(n-1,A,B,C);
		printf("\n %s %d %s %c %s %c","Move disk",n,"from peg",A,"to peg",C);
	 	tower(n-1,B,C,A);
 	}

}
