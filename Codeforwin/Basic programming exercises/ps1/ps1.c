/*
 ******************************************************************************
 * @file           : ps1.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C program to enter two numbers and find their sum.
 * @date           : 2 / septamber / 2023 
 ******************************************************************************
 */
 #include<stdio.h>
 int main()
 {
	 int op1 , op2 , result;
	 printf("please enter the op1 :");
	 scanf("%d",&op1);
	 printf("please enter the op2 :");
	 scanf("%d",&op2);
	 result=op1+op2;
	 printf("the result of %d + %d = %d",op1,op2,result);
 }