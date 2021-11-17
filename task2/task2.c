#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exitProgram (int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int operation;
	int solution;
	int (*operationsArray[5])() = {add, subtract, multiply, divide, exitProgram};
	
	printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit:\n");
	scanf("%d", &operation);
	
	solution = operationsArray[operation](10, 12);
	printf("x = %d \n", solution);
		
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }
int exitProgram (int a, int b) { printf ("Exiting program\n"); exit(0); return 0; }
