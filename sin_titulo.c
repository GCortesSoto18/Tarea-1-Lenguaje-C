#include <stdio.h>
int main(int argc, char *argv[]) {
	int num1 , num2 ,num3;
	printf (" dame el primer numero ");
	scanf ("%d" , & num1);
	printf(" dame el segundo numero ");
	scanf("%d" , & num2);
	printf (" dame el tercer numero");
	scanf("%d" , & num3);
	
	
	
	if (num1>num2 && num1>num3){
		printf(" el numero 1 es el mayor de todos %d" , num1) ;
	}
	
	else if (num2>num1 && num2>num3){
		printf(" el numero 2 es el mayor de todos %d" , num2) ;
		
	}
	else if ( num3>num1 && num3>num2){
		printf( " el numero 3 es el mayor de todos %d" , num3 ) ;
		
	}
    
	if (num1>=0 && num2<=0 && num3<=0){
		printf(" los numero son iguales y nulos ") ;
	}
	
	else { 
		printf( " los numeros son iguales ");
	}
	
	
		 
	 
	
	
	
	return 0;
}

