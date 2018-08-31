//Carlos Yael Hernandez Alcala
//A01412016
//a01412016@itesm.mx

#include <stdio.h>
int main() {
    int month, year;  //DECLARATION OF VARIABLES
    printf("give me the number of the month \n");
    scanf("%d",&month); //Variable "Month" request
    printf("give me the year \n");
    scanf("%d",&year); //Variable "year" request

//this Switch evaluates the variable "month"
    switch (month){
        case 1:
            printf("The month of January has 31 Days");
            break;
        case 2:
            if (year % 4 == 0 & year % 100 != 0 || year % 400 == 0){ //this if evaluates whether the year is a leap-year

                printf("The month of February has 29 Days");
            }
            else {
                printf("The month of February has 28 Days");
            }
            break;
        case 3:
            printf("The month of March has 31 Days");
            break;
        case 4:
            printf("The month of April has 30 Days");
            break;
        case 5:
            printf("The month of May has 31 Days");
            break;
        case 6:
            printf("The month of June has 30 Days");
            break;
        case 7:
            printf("The month of July has 31 Days");
            break;
        case 8:
            printf("The month of August has 31 Days");
            break;
        case 9:
            printf("The month of September has 30 Days");
            break;
        case 10:
            printf("The month of October has 31 Days");
            break;
        case 11:
            printf("The month of November has 30 Days");
            break;
        case 12:
            printf("The month of December has 31 years");
            break;
        default:
            printf("That month doesn't exist"); //numbers that doesn't exist in the numeration of the months
            break;
    }
    return 0;
}