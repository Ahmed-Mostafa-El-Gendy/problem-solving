/*
 ******************************************************************************
 * @file           : ps4.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C program to enter radius of a circle and find its diameter, circumference and area.
 * @date           : 2 / septamber / 2023 
 ******************************************************************************
 */
 #include<stdio.h>
 int main()
 {
	 int radius ;
	 float area  , circumference , diameter;
	 printf("please enter the radius of circle : ");
	 scanf("%d",&radius);
	 area = 3.14 * radius * radius ;
	 circumference = 2 * 3.14 * radius ;
	 diameter = 2 * radius ;
	 printf("the area = %0.3f \n",area);
	 printf("the circumference = %0.3f \n",circumference);
	 printf("the diameter = %0.3f",diameter);
	 
 }