/* Preprocessors 
(some are included to prevent unexpected errors) */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

/*

COP 3223C - Spring 2025

Programming Assignment 1

Student Name: ANH NHAT LE

File Name: pa1_le.c

DISCLAIMER: I hereby certify that this submission is my original work and has been completed independently by me without unauthorized assistance. I affirm that all sources consulted have been properly acknowledged, and no part of this work has been copied or plagiarized from any other source(s).

*/

// Compilation part starts here
char category;
double expense;
double conversion;

int main(void) {
    
    // Introduction to 3 main categories
    printf("F/f: Food\n");
    printf("T/t: Transportation\n");
    printf("A/a: Attraction\n\n");
    
    // Inputs and respective conditions
    printf("Enter Category: ");
    scanf("%c", &category); // Cat input
    if(category != 'f' 
        && category != 'F' 
            && category != 't' 
                && category != 'T' 
                    && category != 'a' 
                        && category != 'A') 
    {
        printf("Invalid Expense Category!\n");
        return 0;
        // If input was different than the 6 listed above, program would stop running
    }
    
    printf("Enter Expense Amount (in FC): ");
    scanf("%lf", &expense); // Exp input
    if(expense < 0) {
        printf("Invalid Expense Amount!\n");
        return 0;
        // If input was negative, program would stop running
    }
    
    printf("Enter Conversion Rate (from 1 FC to USD): ");
    scanf("%lf", &conversion); // Conv input
    if(conversion <= 0) {
        printf("Invalid Conversion Rate!\n");
        return 0;
        // If input was non-positive, program would stop running
    }
    
    printf("\n");
    switch(category) {
        
        // If the cat input was F (or f):
        case 'F':
        case 'f': printf("You spent FC %.2lf on FOOD, which is equivalent to USD %.2lf.\n", expense, expense * conversion);
        break;
        
        // If the cat input was T (or t):
        case 'T':
        case 't': printf("You spent FC %.2lf on TRANSPORTATION, which is equivalent to USD %.2lf.\n", expense, expense * conversion);
        break;
        
        // If the cat input was A (or a):
        case 'A':
        case 'a': printf("You spent FC %.2lf on ATTRACTION, which is equivalent to USD %.2lf.\n", expense, expense * conversion);
        break;
        
    }
    return 0; // Indicates that the program has had a successful run
}
