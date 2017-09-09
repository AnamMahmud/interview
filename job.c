#include <stdio.h>
#include <stdlib.h>
#define DIV_3(x) (x%3)
#define DIV_5(x) (x%5)
#define DIV_15(x) (x%15)
int prime_finder(int); // prime number finder

/*Function to find Prime Numbers (if the fuctions ouput =1, the number is prime)*/
int prime_finder(int x){
	int n,m;
	n=x/2;
		if (n==0){
			return 1;
	    }
	for (m=2;m<=n;m++){
		if(x%m==0){
			return 0;
		}
	}
return 1;
}
/*-------------------------------------*/
int main(){

int N,temp,Fn,TEMP;
/*Entering Numbers*/
printf("Enter n=");
scanf("%d",& N);
printf("N=%d\n",N);
/*------------------------------------*/
TEMP=1;
temp=0;
while(Fn<=N){
	Fn=temp+TEMP;
	if (DIV_15(Fn)==0){
	 printf("FizzBuzz\n");	
	}	else if (DIV_5(Fn)==0){
			printf("Fizz\n");
		}else if (DIV_3(Fn)==0){
			printf("Buzz\n");

		}else if (prime_finder(Fn)==1){
			printf("BuzzFizz\n");
		}

	else{
	printf("%d\n",Fn);
	}
TEMP=temp;
temp=Fn;
}
return 0;
}