/*
 ******************************************************************************
 * @file           : lab1.c - lab2.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : function to do 3 tasks set , clear and toggle bits_number 
 * @date           : 17 / 2 / 2024 
 ******************************************************************************
*/
#include<stdio.h>
#include"lab1.h"
int num1 , num2 , s , c, t ;
int main ()
{
	printf(" hello \n ");
	printf("please enter the number \n ");
	scanf("%d",&num1);
	printf("please enter the bit number \n ");
	scanf("%d",&num2);
	s=set(num1,num2);
	c=clear(num1,num2);
	t=toggle(num1,num2);
	printf("set = %d \n ", s );
	printf("clear = %d \n ", c );
	printf("toggle = %d ",t );
}