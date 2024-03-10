//--------------------------------------------------------------------------------------------------------------------------
// Student Name: Edric Baluyot
// Course: CMPE-30
// Term/Year: Spring 2024
// Date: 02/17/2024
// Project Number: 1
//--------------------------------------------------------------------------------------------------------------------------


#define _CRT_SECURE_NO_WARNINGS // prevent crashes with scanf() function
#include <stdio.h>


int main(int argc, const char* argv[]) {

	printf("Paycheck Calculator\n"); // header

//--------------------------------------------------------------------------------------------------------------------------
// Description: This paycheck calculator calculates a user's weekly gross and take-home pay based on the numbers selected. 
// Name: grossPay for gross pay
// Parameters: hoursWorked, hourlyRate (both manual input), then grossPay, and taxRate, and taxAmount to calculate take home pay.
// Return: takeHomePay
//--------------------------------------------------------------------------------------------------------------------------

	float hoursWorked; // make sure Hours Worked variable works, float is used over int as int does NOT read decimals but float does
	printf("Hours Worked: ");
	scanf("%f", &hoursWorked); // input Hours Worked

	float hourlyRate = 0; // float is used over int as int does NOT read decimals but float does
	printf("Hourly Rate: $");
	scanf("%f", &hourlyRate); // input Hourly Rate

	float grossPay;
	grossPay = hoursWorked * hourlyRate; // multiply hourly rate by hours worked
	printf("Gross Pay: $%.2f\n", grossPay); // spit out the product of rate times work to two decimal places

	int taxRate = 18; // fixed tax rate: 18%
	printf("Tax Rate: %d%%\n", taxRate); // must use this line of code printf("Tax Rate: %d%%\n", taxRate); - prints tax rate

	float taxAmount;
	taxAmount = taxRate * grossPay / 100; // calculates the tax amount by multiplying the tax rate by the gross pay and dividing it by 100
	printf("Tax Amount: $%.2f\n", taxAmount); // prints tax amount based on calculation

	float takehomePay; // initialize variable takehomePay
	takehomePay = grossPay - taxAmount; // subtracts the tax amount from take home pay
	printf("Take Home Pay: $%.2f\n", takehomePay); // Spits out the final amount to two decimal places.

	printf("\n");
	printf("...and that's it. Program terminated.\n"); // lol, want to end this in a funny way. This terminates the program.

	return 0;
}