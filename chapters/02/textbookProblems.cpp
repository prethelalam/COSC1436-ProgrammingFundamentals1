#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
        cout << std::fixed << std::setprecision(2);

    /* 1. Convert the following pseudocode to C++ code. Be sure to define the appropriate variables.
    Store 20 in the speed variable. 
    Store 10 in the time variable. 
    Multiply speed by time and store the result in the distance variable. 
    Display the contents of the distance variable. */

        cout << "1:\n"; //formatting cout for display. Not apart of the problem.

        int speed = 20, time = 10, distance;

        distance = speed * time;

        cout << "Distance is " << distance << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 2. Convert the following pseudocode to C++ code. Be sure to define the appropriate variables. 
    Store 172.5 in the force variable. 
    Store 27.5 in the area variable. 
    Divide area by force and store the result in the pressure variable. 
    Display the contents of the pressure variable. */

        cout << "2:\n"; //formatting cout for display. Not apart of the problem.

        double force = 172.5, area = 27.5, pressure;

        pressure = area/force;

        cout << "Pressure is " << pressure << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    // 3. Write a program that stores the integers 50 and 100 in variables, and stores the sum of these two in a varibale named total.

        cout << "3:\n"; //formatting cout for display. Not apart of the problem.

        int total, A = 50, B = 100;

        total = A + B;

        cout << "The sum of 50 + 100 is " << total << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 4. Sales Prediction:
    The East Coast sales division of a company generates 58 percent of total sales. Based on that percentage, write a program that will predict how much the East Coast division will generate if the company has $8.6 million in sales this year. */
        
        cout << "4:\n"; //formatting cout for display. Not apart of the problem.

        double salesPercent = 0.58, sales = 8.6E6, generate;

        generate = sales * salesPercent;

        cout << "The company will generate $" << generate << " of the total sales for this year." << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 5. Sales Tax: 
    Write a program that will compute the total sales tax on a $95 purchase. Assume the state sales tax is 4 percent, and the county sales tax is 2 percent. */

        cout << "5:\n"; //formatting cout for display. Not apart of the problem.

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

        cout << "The total sales tax will be $" << totalTax << endl; 
        cout << "The total sale price will be $" << salePrice << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 6. Restaurant Bill: 
    Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on the screen. */

        cout << "6:\n"; //formatting cout for display. Not apart of the problem.

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

        cout << "The meal cost is $" << mealCost << endl;
        cout << "The tax amount is $" << taxAmount << endl;
        cout << "The tip amount is $" << tipAmount << endl;
        cout << "The total bill is $" << totalBill << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 7. Average of Values:
    To get the average of a series of values, you add the values up then divide the sum by the number of values. 
    Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33. The program should first calculate the sum of
    these five variables and store the result in a separate variable named sum. Then, the program should divide the sum variable by 5 to get tbe average. Display the average on the screen. */

        cout << "7:\n"; //formatting cout for display. Not apart of the problem.

        double a = 28, b = 32, c = 37, d = 24, e = 33, sum, average;

        sum = a + b + c + d + e;
        average = sum/5;

        cout << "The sum of the five numbers is " << sum << endl;
        cout << "The average of the five numbers is " << average << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 8. Annual Pay:
    Suppose an employee gees paid every two weeks and earns $2,200 each pay period. In a year, the employee gees paid 26 times. Write a program that defines the following variables:

        - pay Amount: This variable will bold the amount of pay the employee earns each pay period. Initialize the variable with 2200.0.
        - payPeriods: This variable will hold the number of pay periods in a year. Initialize the variable with 26.
        - annual Pay: This variable will hold the employee's total a111mal pay, which will be calculated.

    The program should calculate the employee's total annual pay by multiplying the employee's pay amount by the number of pay periods in a year and store the result in the annual Pay variable. Display the total annual pay on the screen. */

        cout << "8:\n"; //formatting cout for display. Not apart of the problem.

        double payAmount = 2200.00, payPeriods = 26, annualPay;

        annualPay = payAmount * payPeriods;

        cout << "The employees annual pay will be $" << annualPay << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 9. Ocean Levels:
    Assuming the ocean's level is currently rising at about 1.5 millimeters per year, write a program chat displays:

    • The number of millimeters higher than the current level that the ocean's level will be in 5 years.
    • The number of millimeters higher than the current level that the ocean's level will be in 7 years.
    • The number of millimeters higher than the current level that the ocean's level will be in 10 years. */

        cout << "9:\n"; //formatting cout for display. Not apart of the problem.

        const double milliPerYear = 1.5;

        cout << "After 5 years the ocean levels will rise by " << milliPerYear * 5 << endl;
        cout << "After 7 years the ocean levels will rise by " << milliPerYear * 7 << endl;
        cout << "After 10 years the ocean levels will rise by " << milliPerYear * 10 << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

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

        cout << "10:\n"; //formatting cout for display. Not apart of the problem.

        cout << "Item 1 costs $" << item1 << endl;
        cout << "Item 2 costs $" << item2 << endl;
        cout << "Item 3 costs $" << item3 << endl;
        cout << "Item 4 costs $" << item4 << endl;
        cout << "Item 5 costs $" << item5 << endl;
        cout << "The subtotal for the sale is $" << saleSubtotal << endl;
        cout << "The total sales tax amount is $" << totalSalesTaxAmount << endl;
        cout << "The total price of all the items is $" << totalSalePrice << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.
    
    /* 11. Cyborg Data Type Sizes:
    You have been given a job as a programmer on a Cyborg supercomputer. In order to accomplish some calculations, you need to know how many bytes the following data types use: char, int, float, and double. You do not have any technical documentation, so you can't look this information up. Write a C++ program that will determine the amount of memory used by these types and display the information on the screen. */

        /*
        char: 1 byte
        int: 4 bytes
        float: 4 bytes
        double: 8 bytes
        */
        
    /* 12. Miles per Gallon:
    A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.
    Hint: Use the following formula to calculate miles per gallon (MPG):
    MPG = Miles Driven/Gallons of Gas Used */

        cout << "12:\n"; //formatting cout for display. Not apart of the problem.

        int MilesDriven = 375, GallonsUsed = 14, MPG;

        MPG = MilesDriven/GallonsUsed;
        
        cout << "The cars miles per gallon is: " << MPG << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 13. Distance per Tank of Gas:
    A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town, and 28.9 miles per gallon when driven on the highway. Write a program that calculates and displays the distance the car can travel on one tank of gas when driven in town and when driven on the highway. 
    Hint: The following formula can be used to calculate the distance: 
    Distance = Number of Gallons X Average Miles per Gallon */

        cout << "13.\n"; //formatting cout for display. Not apart of the problem.

        double TownMPG = 23.5, CityMPG = 28.9, GallonsInGasTank = 20, Distance, AverageMPG;

        AverageMPG = (TownMPG + CityMPG) / 2;
        Distance = AverageMPG * GallonsInGasTank;

        cout << "The car will be able to travel " << AverageMPG << " miles" << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 14. Land Calculation: 
    One acre of land is equivalent to 43,560 square feet. Write a program that calculates the number of acres in a tract of land with 391,876 square feet. */

        cout << "14.\n"; //formatting cout for display. Not apart of the problem.

        double Acre = 43560, Tract = 391876, AcresInTract;

        AcresInTract = Tract / Acre;

        cout << "There are " << AcresInTract << " arces in 391,876 square feet tracts of land.\n";
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 15. Circuit Board Price:
    An electronics company sells circuit boards at a 35 percent profit. Write a program that will calculate the selling price of a circuit board that costs $14.95. Display the result on the screen. */

        cout << "15.\n"; //formatting cout for display. Not apart of the problem.

        double CircuitBoardCost = 14.95, SellingPrice, ThirtyFivePercentProfit;

        ThirtyFivePercentProfit = CircuitBoardCost * 0.35;
        SellingPrice = CircuitBoardCost + ThirtyFivePercentProfit;

        cout << "The selling price of the circuit board at 35% profit will be $" << SellingPrice << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 16. Personal Information: 
    Write a program that displays the following pieces of information, each on a separate line:
    Your name
    Your address, with city, state, and ZIP code
    Your telephone number
    Your college major
    Use only a single cout statement to display all of this information. */

        cout << "16.\n"; //formatting cout for display. Not apart of the problem.

        string Name = "Prethel Alam", Address = "1234 Savannah Drive, Dallas, Texas, 75089", Telephone = "214-572-4399", CollegeMajor = "Healthcare Management (but soon Computer Science)";

        cout << Name << "\n" << Address << "\n" << Telephone << "\n" << CollegeMajor << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 17. Triangle Pattern:
    Write a program that displays a triangle pattern with asterisks. */

        cout << "17.\n"; //formatting cout for display. Not apart of the problem.

        int n = 4;

        for (int i = 1;i<=n;i++) //outer loop
        {
            for (int j = i; j<=n; j++) //colums loop
            {
                cout << "  ";
            }
            for (int j = 1; j<i; j++) //colums loop
            {
                cout << "* ";
            }
            for (int j = 1; j<=i; j++) //colums loop
            {
                cout << "* ";
            }
            cout << "\n";
        }
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 18. Diamond Pattern:
    Write a program that displays the a diamong pattern with asterisks. */


        cout << "18.\n"; //formatting cout for display. Not apart of the problem.

        int x = 4;

        for (int i = 1;i<x;i++) //outer loop
        {
            for (int j = i; j<=x; j++) //colums loop
            {
                cout << "  ";
            }
            for (int j = 1; j<i; j++) //colums loop
            {
                cout << "* ";
            }
            for (int j = 1; j<=i; j++) //colums loop
            {
                cout << "* ";
            }
            cout << "\n";
        }

        for (int i = 1;i<=x;i++) //outer loop
        {
            for (int j = 1; j<=i; j++) //colums loop
            {
                cout << "  ";
            }
            for (int j = i; j<x; j++) //colums loop
            {
                cout << "* ";
            }
            for (int j = i; j<=x; j++) //colums loop
            {
                cout << "* ";
            }
            cout << "\n"; 
        }

        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 19. Stock Commission:
    Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her stockbroker a 2 percent commission for the transaction. Write a program that calculates and displays the following:
    • The amount paid for the stock alone (without the commission).
    • The amount of the commission.
    • The total amount paid (for the stock plus the commission). */

        cout << "19.\n"; //formatting cout for display. Not apart of the problem.

        double StockPrice = 35.00, SharesOfStock = 750, Commission = 0.02, CommissionPrice, TotalPrice, StockPriceWithoutCommission;

        StockPriceWithoutCommission = StockPrice * SharesOfStock;
        CommissionPrice = StockPriceWithoutCommission * Commission;
        TotalPrice = StockPriceWithoutCommission + CommissionPrice;

        cout << "The amount paid for the stock without commission is $" << StockPriceWithoutCommission << endl;
        cout << "The amount of the commission is $" << CommissionPrice << endl;
        cout << "The total amount paid is $" << TotalPrice << endl;
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 20. Energy Drink Consumption: 
    A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the following:
    • The approximate number of customers in the survey who purchase one or more  
    energy drinks per week.
    • The approximate number of customers in the survey who prefer citrus-flavored
    energy drinks. */

        cout << "20.\n"; //formatting cout for display. Not apart of the problem.

        double Surveryed = 16500, BoughtOneOrMore, PreferCitrus;

        BoughtOneOrMore = Surveryed * 0.15;
        PreferCitrus = BoughtOneOrMore * 0.58;

        cout << "There are " << BoughtOneOrMore << " customers who bought one or more energy drinks per week.\n";
        cout << "Of those customers who bought one or more energy drinks per week, " << PreferCitrus << " prefer citrus.\n";
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 21. Annual High Temperatures:
    The average July high temperarure is 85 degrees Fahrenheit in New York City, 88 degrees Fahrenheit in Denver, and 106 degrees Fahrenheit in Phoenix. Write a program that calculates and reports what the new average July high temperature would be for each of these cities if temperatures rise by 2 percent. */

        cout << "21.\n"; //formatting cout for display. Not apart of the problem.

        double NewYorkTemperture, NewYorkAverageTemperture, PhoenixTemperture, PhoenixAverageTemperture, DenverTemperture, DenverAverageTemperture;
        const double TempertureIncrease = 0.02;

        NewYorkTemperture = 85 * TempertureIncrease;
        NewYorkAverageTemperture = 85 + NewYorkTemperture;
        DenverTemperture = 88 * TempertureIncrease;
        DenverAverageTemperture = 88 + DenverTemperture;
        PhoenixTemperture = 106 * TempertureIncrease;
        PhoenixAverageTemperture = 106 + PhoenixTemperture;

        
        cout << "The new average temperture in New York during the month of July will be " << NewYorkAverageTemperture << " degrees.\n";
        cout << "The new average temperture in Denver during the month of July will be " << DenverAverageTemperture << " degrees.\n";
        cout << "The new average temperture in Phoenix during the month of July will be " << PhoenixAverageTemperture << " degrees.\n";
        cout << "\n"; //formatting cout for display. Not apart of the problem.

    /* 22. How Much Paint:
    A particular brand of paint covers 340 square feet per gallon. Write a program to determine and report approximately how many gallons of paint will be needed to paint two coats on a wooden fence that is 6 feet high and 100 feet long. */ 

        cout << "22.\n"; //formatting cout for display. Not apart of the problem.

        double WoodenFence = 1200, OneGallon = 340, GallonsOfPaintUsed;

        GallonsOfPaintUsed = WoodenFence / OneGallon;

        cout << "In order to paint two coats of the wooden fence, you would require " << GallonsOfPaintUsed << " gallons of paint.\n";
        cout << "\n";





return 0;
}