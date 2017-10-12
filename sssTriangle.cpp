/*
*  Author: Dominik Novický
*  Date: 11-10-2017
*  Description: Is it possible to construct a triangle with these sides?
*  
*/

#include <stdio.h>

int main (){
	int a,b,c;
	printf("Enter a,b,c parameter: \n");
	scanf("%d %d %d",&a, &b, &c);
	if(a==0 || b==0 | c==0){
		printf("Cannot construct a triangle of given sides.");
	}
	else {
		if (a+b<=c || b+c<=a || a+c<=b){
			printf("Cannot construct a triangle of given sides.");
		}
		else {
			printf("Can construct a triangle of given sides!");
		}
	}
}
