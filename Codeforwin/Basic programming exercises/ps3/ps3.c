/*
 ******************************************************************************
 * @file           : ps3.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C program to enter length in centimeter and convert it into meter and kilometer.
 * @date           : 2 / septamber / 2023 
 ******************************************************************************
 */
 #include<stdio.h>
 int main()
 {
	 float centimeter , meter , kilometer ;
	 printf("please enter the value by centimeter :");
	 scanf("%f",&centimeter);
	 // 1 meter have 100 centimeter
     // 1 kilometer have 1000 meter 	 
	 meter = centimeter / 100.0 ;
	 kilometer = meter / 1000.0 ;
	 printf("%0.3f  cm \n",centimeter);
	 printf("%0.3f  m\n",meter);
	 printf("%0.3f  km",kilometer);
	 
	 
 }