/*
*  Author: Dominik Novický
*  Date: 11-10-2017
*  Description: Is a triangle right angled?
*  
*/

#include <stdio.h>

int main (){
	float a,b,c;
	printf("Enter a,b,c parameter (Whole numbers): \n");
	scanf("%f %f %f",&a, &b, &c);
	if(a==0 || b==0 || c==0){
		printf("Cannot construct a right angled triangle of given sides.");
	}
	else {
		if (c*c==a*a+b*b || a*a==c*c+b*b || b*b==c*c+a*a ){
			printf("A triangle is right angled!");
		}
		else {
			printf("Cannot construct a right angled triangle of given sides.");
		}
	}
}
