#include<stdio.h>

int main()
{
    
    int birthDay, birthMonth, birthYear;
    int currentDay, currentMonth, currentYear;
    int age;

    // Get birth date
    printf("Enter your birth date (DD MM YYYY): ");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);

    // Get current date
    printf("Enter current date (DD MM YYYY): ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);

    // Calculate age
    age = currentYear - birthYear;

    // Adjust if birthday hasn't happened yet in the current year
    if (currentMonth < birthMonth || 
       (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    printf("Your age is: %d years\n", age);

    return 0;
}
    
