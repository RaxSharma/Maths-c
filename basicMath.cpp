#include<stdio.h>

void basicMath(int a,int b,int op){ //Function to perform basic math operations
	
	switch(op){
		
		case 1:
			printf("\nAddition of %d and %d is : %d",a,b,(a+b));
			break;
			
		case 2:
			printf("\nSubstraction of %d and %d is : %d",a,b,(a-b));
			break;
			
		case 3:
			printf("\nMultiplication of %d and %d is : %d",a,b,(a*b));
			break;
			
		case 4:
			printf("\nDivision of %d and %d is : %d",a,b,(a/b));
			break;
			
		case 5:
			printf("\nModulo of %d and %d is : %d",a,b,(a%b));
			break;
			
		case 6:
			printf("\nIncrement of %d: %d",(a++),a);
			break;
			
		case 7:
			printf("\nDecrement of %d: %d",(a--),a);
			break;
			
		case 8:
			printf("\nUnary Plus of %d: %d",a,(+a));
			break;
			
		case 9:
			printf("\nUnary Minus of %d: %d",a,(-a));
			break;
			
		default:
			printf("\nOperation not defined");
		
	}
	
}
int main(){
	
	int a,b,op;
	
	//Getting input on the desired calculation from the user
	printf("\nBasic Math Operators\n");
	printf("--------------------------------------------------\n");
	printf("Addition : 1 , Substraction : 2 , Multiplication : 3 , Division : 4  \nModulo : 5 , Increment : 6 , Decrement : 7 , Unary Plus : 8 , Unary Minus : 9\n");
	
	printf("\nEnter the operation you wish to execute : ");
	scanf("%d",&op);

	printf("Enter operand 1 : ");
	scanf("%d",&a);
	
	//Since c does not offer default parameters, the variable b for operations with 1 operand with the zero parameter
	//If the operation requires two operands, another variable will be taken from the user
	 
	if(op<=5){
		printf("Enter operand 2 : ");
		scanf("%d",&b);
		basicMath(a,b,op);
	}
	else{
		basicMath(a,0,op);
	}

	return 0;
	
}
