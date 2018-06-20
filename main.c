/* 
 * A program that makes change using Canadian currency denominations
 * 
 * File:   main.c
 * Author: C0374314
 * Created on January 16, 2018, 2:03 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(void) {

    double price, tendered, changeDue, nickels;
    int numOfChangeItems;

    printf("Enter the amount of the purchase: ");
    scanf("%lf", &price);
    printf("Enter the amount tendered: ");
    scanf("%lf", &tendered);
    
    changeDue = tendered - price;
    
    printf("Change due is $%.2lf\n", changeDue); // Calculated change
    
    nickels = round(changeDue*20.0)/20.0;
    
    printf("Rounded to the nearest nickel $%.2lf", nickels); // Calculated nickels
    
    double changeItemValue = 20;    
    
    numOfChangeItems = changeDue / changeItemValue;
    changeDue = changeDue - numOfChangeItems * changeItemValue;   
    printf("\n %d Twenties", numOfChangeItems);
    
    changeItemValue = 10;
    numOfChangeItems = changeDue / changeItemValue;
    changeDue = changeDue - numOfChangeItems * changeItemValue;
    printf("\n %d Tens", numOfChangeItems);
         
    changeItemValue = 5;
    numOfChangeItems = changeDue / changeItemValue;
    changeDue = changeDue - numOfChangeItems * changeItemValue; 
    printf("\n %d Fives", numOfChangeItems);
      
    changeItemValue = 2;
    numOfChangeItems = changeDue / changeItemValue;
    changeDue = changeDue - numOfChangeItems * changeItemValue;   
    printf("\n %d Toonies", numOfChangeItems);
    
    changeItemValue = 1;
    numOfChangeItems = changeDue / changeItemValue;
    changeDue = changeDue - numOfChangeItems * changeItemValue;  
    printf("\n %d Loonies", numOfChangeItems);
    
    changeItemValue = 0.25;
    numOfChangeItems = changeDue / changeItemValue;
    changeDue = changeDue - numOfChangeItems * changeItemValue;  
    printf("\n %d Quarters", numOfChangeItems);
    
    changeItemValue = 0.10;
    numOfChangeItems = changeDue / changeItemValue;
    changeDue = changeDue - numOfChangeItems * changeItemValue;
    printf("\n %d Dimes", numOfChangeItems);
    
    changeItemValue = 0.05;
    numOfChangeItems = changeDue / changeItemValue;
    changeDue = changeDue - numOfChangeItems * changeItemValue;
    printf("\n %d Nickels", numOfChangeItems);
            
    return (EXIT_SUCCESS);
}

