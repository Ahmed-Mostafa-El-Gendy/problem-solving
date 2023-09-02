/*
 ******************************************************************************
 * @file           : ps2.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : C program to perform all arithmetic operations
 * @date           : 2 / septamber / 2023 
 ******************************************************************************
 */
 #include<stdio.h>
 int main()
 {
	 int op1 , op2 , sum , mul , sub , reminder , division ;
	 printf("please enter the op1 :");
	 scanf("%d",&op1);
	 printf("please enter the op2 :");
	 scanf("%d",&op2);
	 sum=op1+op2;
	 mul=op1*op2;
	 sub=op1-op2;
	 reminder=op1%op2;
	 division=op1/op2;
	 printf("the result of %d + %d = %d \n",op1,op2,sum);
	 printf("the result of %d * %d = %d \n",op1,op2,mul );
	 printf("the result of %d - %d = %d \n",op1,op2,sub);
	 printf("the result of %d / %d = %d \n",op1,op2,division);
	 printf("the reminder = %d \n",reminder);
	 
	 
	 
 }