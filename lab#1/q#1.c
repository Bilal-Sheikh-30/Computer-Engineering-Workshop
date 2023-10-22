#include <stdio.h>
int main()
{
    int empId;
    float workingHours;
    float hourlyRate;
    printf("Enter your employ Id: ");
    scanf("%d", &empId);
    printf("Enter your working hours of the month: ");
    scanf("%f", &workingHours);
    printf("Enter your hourly wage: ");
    scanf("%f", &hourlyRate);
    printf("Hi %d, Your this month's salary is: %.2f", empId,workingHours * hourlyRate);
    return 0;
}