/*
 ******************************************************************************
 * @file           : ps5.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : C program to find angles of triangle if two angles are given
 * @date           : 2 / septamber / 2023 
 ******************************************************************************
 */
 #include<stdio.h>
 int main()
 {   //a+b+c = 180 
	 int firnum ,secnum , thirnum ;
	 printf("please enter the first angle : ");
	 scanf("%d",&firnum);
	 printf("please enter the second angle : ");
	 scanf("%d",&secnum);
	 thirnum = 180 - (firnum + secnum );
	 printf("the third angle is %d",thirnum);
	 
 }