#include <iostream>
#include <iomanip>
using namespace std;

// Description

int main ()
{
        cout << std::fixed << std::setprecision(2);

    /* 1. Convert the following pseudocode to C++ code. Be sure to define the appropriate variables.
    Store 20 in the speed variable. 
    Store 10 in the time variable. 
    Multiply speed by time and store the result in the distance variable. 
    Display the contents of the distance variable. */

        int speed = 20, time = 10, distance;

        distance = speed * time;

        cout << "1:\n"; //formatting cout for display

        cout << "Distance is " << distance << endl;

        cout << "\n";

    /* 2. Convert the following pseudocode to C++ code. Be sure to define the appropriate variables. 
    Store 172.5 in the force variable. 
    Store 27.5 in the area variable. 
    Divide area by force and store the result in the pressure variable. 
    Display the contents of the pressure variable. */

        double force = 172.5, area = 27.5, pressure;

        pressure = area/force;

        cout << "2:\n"; //formatting cout for display

        cout << "Pressure is " << pressure << endl;

        cout << "\n";

    // 3. Write a program that stores the integers 50 and 100 in variables, and stores the sum of these two in a varibale named total.

        int total, A = 50, B = 100;

        total = A + B;

        cout << "3:\n"; //formatting cout for display

        cout << "The sum of 50 + 100 is " << total << endl;

        cout << "\n";

    /* 4. Sales Prediction:
    The East Coast sales division of a company generates 58 percent of total sales. Based on that percentage, write a program that will predict how much the East Coast division will generate if the company has $8.6 million in sales this year. */

        double salesPercent = 0.58, sales = 8.6E6, generate;

        generate = sales * salesPercent;

        cout << "4:\n"; //formatting cout for display

        cout << "The company will generate $" << generate << " of the total sales for this year." << endl;

        cout << "\n";

    /* 5. Sales Tax: 
    Write a program that will compute the total sales tax on a $95 purchase. Assume the state sales tax is 4 percent, and the county sales tax is 2 percent. */

        double stateSalesTax = 0.04, 
        countySalesTax = 0.02, 
        taxDeductionState, 
        taxDeductionCounty, 
        salePrice, 
        price = 95, 
        totalTax;

        taxDeductionState = price * stateSalesTax;

        taxDeductionCounty = price * countySalesTax;

        totalTax = taxDeductionState + taxDeductionCounty;

        salePrice = price - totalTax;

        cout << "5:\n"; //formatting cout for display

        cout << "The total sales tax will be $" << totalTax << endl; 

        cout << "The total sale price will be $" << salePrice << endl;

        cout << "\n";

    /* 6. Restaurant Bill: 
    Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on the screen. */

        double mealCost = 88.67, 
        tax = 0.0675, 
        taxAmount, 
        tip = 0.20, 
        tipAmount, 
        totalBill, 
        mealCostWithTax;

        taxAmount = mealCost * tax;

        mealCostWithTax = mealCost + taxAmount;

        tipAmount = mealCostWithTax * tip;

        totalBill = mealCostWithTax + tipAmount;

        cout << "6:\n"; //formatting cout for display

        cout << "The meal cost is $" << mealCost << endl;

        cout << "The tax amount is $" << taxAmount << endl;

        cout << "The tip amount is $" << tipAmount << endl;

        cout << "The total bill is $" << totalBill << endl;

        cout << "\n";

    /* 7. Average of Values:
    To get the average of a series of values, you add the values up then divide the sum by the number of values. 
    Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33. The program should first calculate the sum of
    these five variables and store the result in a separate variable named sum. Then, the program should divide the sum variable by 5 to get tbe average. Display the average on the screen. */

        double a = 28, b = 32, c = 37, d = 24, e = 33, sum, average;

        sum = a + b + c + d + e;

        average = sum/5;

        cout << "7:\n"; //formatting cout for display

        cout << "The sum of the five numbers is " << sum << endl;

        cout << "The average of the five numbers is " << average << endl;

        cout << "\n";

    /* 8. Annual Pay:
    Suppose an employee gees paid every two weeks and earns $2,200 each pay period. In a year, the employee gees paid 26 times. Write a program that defines the following variables:

        - pay Amount: This variable will bold the amount of pay the employee earns each pay period. Initialize the variable with 2200.0.
        - payPeriods: This variable will hold the number of pay periods in a year. Initialize the variable with 26.
        - annual Pay: This variable will hold the employee's total a111mal pay, which will be calculated.

    The program should calculate the employee's total annual pay by multiplying the employee's pay amount by the number of pay periods in a year and store the result in the annual Pay variable. Display the total annual pay on the screen. */

        double payAmount = 2200.00, payPeriods = 26, annualPay;

        annualPay = payAmount * payPeriods;

        cout << "8:\n"; //formatting cout for display

        cout << "The employees annual pay will be $" << annualPay << endl;

        cout << "\n";

    /* 9. Ocean Levels:
    Assuming the ocean's level is currently rising at about 1.5 millimeters per year, write a program chat displays:

    • The number of millimeters higher than the current level that the ocean's level will be in 5 years.
    • The number of millimeters higher than the current level that the ocean's level will be in 7 years.
    • The number of millimeters higher than the current level that the ocean's level will be in 10 years. */

        const double milliPerYear = 1.5;

        cout << "9:\n"; //formatting cout for display

        cout << "After 5 years the ocean levels will rise by " << milliPerYear * 5 << endl;

        cout << "After 7 years the ocean levels will rise by " << milliPerYear * 7 << endl;

        cout << "After 10 years the ocean levels will rise by " << milliPerYear * 10 << endl;

        cout << "\n";

    /* 10. Total Purchase:
    A customer in a store is purchasing five items. The prices of the five items are as follows:

    Price of item 1 = $15.95
    Price of item 2 = $24.95
    Price of item 3 = $6.95
    Price of item 4 = $12.95
    Price of item 5 = $3.95 

    Write a program that holds the prices of the five items in five variables. Display each item's price, the subtotal of the sale, the amount of sales tax, and the total. Assume the sales tax is 7 percent. */

        double item1 = 15.95, 
        item2 = 24.95, 
        item3 = 6.95, 
        item4 = 12.95, 
        item5 = 3.05, 
        saleSubtotal, 
        totalSalesTaxAmount,
        totalSalePrice,
        salesTax = 0.07;
        
        saleSubtotal = item1 + item2 + item3 + item4 + item5;

        totalSalesTaxAmount = saleSubtotal * salesTax;

        totalSalePrice = saleSubtotal + totalSalesTaxAmount;

        cout << "10:\n"; //formatting cout for display

        cout << "Item 1 costs $" << item1 << endl;

        cout << "Item 2 costs $" << item2 << endl;

        cout << "Item 3 costs $" << item3 << endl;

        cout << "Item 4 costs $" << item4 << endl;

        cout << "Item 5 costs $" << item5 << endl;

        cout << "The subtotal for the sale is $" << saleSubtotal << endl;

        cout << "The total sales tax amount is $" << totalSalesTaxAmount << endl;

        cout << "The total price of all the items is $" << totalSalePrice << endl;

        cout << "\n";
    
    /* 11. Cyborg Data Type Sizes
    You have been given a job as a programmer on a Cyborg supercomputer. In order to accomplish some calculations, you need to know how many bytes the following data types use: char, int, float, and double. You do not have any technical documentation, so you can't look this information up. Write a C++ program that will determine the amount of memory used by these types and display the information on the screen. */
    cout << "A change goes here" << endl;


return 0;
}

//save file at the end