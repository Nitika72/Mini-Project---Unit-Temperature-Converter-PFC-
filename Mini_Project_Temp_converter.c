/*
===========================================================
MINI PROJECT : UNIT-AWARE TEMPERATURE CONVERTER
===========================================================

AIM:
To create a C program that converts temperature values between
Celsius, Fahrenheit and Kelvin using menu driven program and
user-defined functions.

TOOLS USED:
- C Language
- VS Code

FEATURES:
- Modular design using functions
- Menu based temperature scale selection
- Handles Celsius ↔ Fahrenheit ↔ Kelvin conversion

-----------------------------------------------------------
CONVERSION FORMULAS:
Celsius to Fahrenheit  : F = (C * 9/5) + 32
Fahrenheit to Celsius  : C = (F - 32) * 5/9
Celsius to Kelvin      : K = C + 273.15
Kelvin to Celsius      : C = K - 273.15
Fahrenheit to Kelvin   : K = (F - 32) * 5/9 + 273.15
Kelvin to Fahrenheit   : F = (K - 273.15) * 9/5 + 32
-----------------------------------------------------------
*/

#include <stdio.h>

/* Function Declarations */
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);
float celsiusToKelvin(float c);
float kelvinToCelsius(float k);
float fahrenheitToKelvin(float f);
float kelvinToFahrenheit(float k);

int main()
{
    int choice;
    float temp, result;

    do
    {
        printf("\n========== TEMPERATURE CONVERTER ==========\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("3. Celsius to Kelvin\n");
        printf("4. Kelvin to Celsius\n");
        printf("5. Fahrenheit to Kelvin\n");
        printf("6. Kelvin to Fahrenheit\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 6)
        {
            printf("Enter temperature value: ");
            scanf("%f", &temp);
        }

        switch(choice)
        {
            case 1:
                result = celsiusToFahrenheit(temp);
                printf("Result = %.2f Fahrenheit\n", result);
                break;

            case 2:
                result = fahrenheitToCelsius(temp);
                printf("Result = %.2f Celsius\n", result);
                break;

            case 3:
                result = celsiusToKelvin(temp);
                printf("Result = %.2f Kelvin\n", result);
                break;

            case 4:
                result = kelvinToCelsius(temp);
                printf("Result = %.2f Celsius\n", result);
                break;

            case 5:
                result = fahrenheitToKelvin(temp);
                printf("Result = %.2f Kelvin\n", result);
                break;

            case 6:
                result = kelvinToFahrenheit(temp);
                printf("Result = %.2f Fahrenheit\n", result);
                break;

            case 7:
                printf("Thank You for using Temperature Converter!\n");
                break;

            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 7);

    return 0;
}

/* Function Definitions */

float celsiusToFahrenheit(float c)
{
    return (c * 9/5) + 32;
}

float fahrenheitToCelsius(float f)
{
    return (f - 32) * 5/9;
}

float celsiusToKelvin(float c)
{
    return c + 273.15;
}

float kelvinToCelsius(float k)
{
    return k - 273.15;
}

float fahrenheitToKelvin(float f)
{
    return (f - 32) * 5/9 + 273.15;
}

float kelvinToFahrenheit(float k)
{
    return (k - 273.15) * 9/5 + 32;
}

/*
================ SAMPLE OUTPUT ================

========== TEMPERATURE CONVERTER ==========
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Celsius to Kelvin
4. Kelvin to Celsius
5. Fahrenheit to Kelvin
6. Kelvin to Fahrenheit
7. Exit
Enter your choice: 1
Enter temperature value: 25
Result = 77.00 Fahrenheit

Enter your choice: 7
Thank You for using Temperature Converter!
*/
