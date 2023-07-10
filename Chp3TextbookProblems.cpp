#include <iostream>
#include <iomanip>
#include <string> 
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void number1(){
    int gallons, miles, mpg;

    cout << "How many gallons of gas can your car hold? ";
    cin >> gallons;
    cout << "How many miles can be driven on a full tank? ";
    cin >> miles;

    mpg = miles/gallons;

    cout << "Your cars miles per gallon is " << mpg << endl;
}

void number2(){
    double const seatACost = 15, seatBCost = 12, seatCCost = 9;
    double seatASold, seatBSold, seatCSold, total;

    cout << "How many tickets for Class A, B, and C seats were sold?\n";
    cin >> seatASold >> seatBSold >> seatCSold;

    total = (seatASold * seatACost) + (seatBSold * seatBCost) + (seatCSold * seatCCost);

    cout << "\nTotal sales generated was $" << setprecision(2) << fixed << total << endl;
}

void number3(){
    double test1, test2, test3, test4, test5;

    cout << "What was your first exam score? ";
    cin >> test1;
    cout << "\nWhat was your second exam score? ";
    cin >> test2;
    cout << "\nWhat was your third exam score? ";
    cin >> test3;
    cout << "\nWhat was your fourth exam score? ";
    cin >> test4;
    cout << "\nWhat was your fifth exam score? ";
    cin >> test5;

    double average = (test1 + test2 + test3 + test4 + test5) / 5;

    cout << "\nYour average exam score was " << setprecision(1) << fixed << average << endl;
}

void number4(){
    string month1, month2, month3;
    double averageRainfall, month1Rain, month2Rain, month3Rain; 

    cout << "What 3 months do you want to calculate the average rainfall for?\n";
    cin >> month1 >> month2 >> month3;
    cout << "\nHow much rain fell during each month? (in inches)\n";
    cin >> month1Rain >> month2Rain >> month3Rain;

    averageRainfall = (month1Rain + month2Rain + month3Rain)/3;

    cout << "\nThe average rainfall for " << month1 << ", " << month2 << ", " << month3 << " was " << setprecision(2) << fixed << averageRainfall << " inches\n";
}

void number5(){
    int maleCount, femaleCount;
    double malePercent, femalePercent;

    cout << "How many males are in the class? ";
    cin >> maleCount;
    cout << "How many females are in the class? ";
    cin >> femaleCount; 

    double totalStudents = maleCount + femaleCount;
    malePercent = (maleCount/totalStudents) * 100;
    femalePercent = (femaleCount/totalStudents) * 100;

    cout << setprecision(2) << fixed;
    cout << "The percentage of males in the class is " << malePercent << "%" << endl;
    cout << "The percentage of females in the class is " << femalePercent << "%" << endl;
}

void number6(){
    double const SUGAR = 1.5, BUTTER = 1, FLOUR = 2.75;
    double amountOfCookies, 
    cupsSugar, cupsButter, cupsFlour, 
    sugarPerCookie, butterPerCookie, flourPerCookie;

    sugarPerCookie = SUGAR/48;
    butterPerCookie = BUTTER/48;
    flourPerCookie = FLOUR/48;

    cout << "How many cookies do you want to make? ";
    cin >> amountOfCookies;

    cupsSugar = sugarPerCookie * amountOfCookies;
    cupsButter = butterPerCookie * amountOfCookies;
    cupsFlour = flourPerCookie * amountOfCookies;

    cout << setprecision(2) << fixed;
    cout << "\nYou will need " << cupsSugar << " cups of sugar.\n";
    cout << "You will need " << cupsButter << " cups of butter.\n";
    cout << "You will need " << cupsFlour << " cups of flour.\n";
}

void number7(){
    int adultSold = 382, childSold = 127;
    double grossProfit, netProfit, distributorPay; 
    const double adultPRICE = 10.00, childPRICE = 6.00;

    grossProfit = (adultPRICE * adultSold) + (childPRICE * childSold);
    netProfit = grossProfit * .20;
    distributorPay = grossProfit - netProfit;

    cout << "Movie Name:" << setw(40) << "\"Wheels of Fury\"\n"; 
    cout << "Adult Tickets Sold:" << setw(25) <<  adultSold << endl;
    cout << "Child Tickets Sold:" << setw(25) << childSold << endl;
    cout << setprecision(2) << fixed;
    cout << "Gross Box Office Profit:" << setw(16) << "$ " << grossProfit << endl;
    cout << "Net Box Office Profit:" << setw(19) << "$  " << netProfit << endl;
    cout << "Amount Paid to Distributor:" << setw(13) << "$ " << distributorPay << endl;
}

void number8(){
    double palletWeight, palletWidgetWeight, widgetAmount; 
    const double widgetWEIGHT = 12.5;

    cout << "How much does the pallet weigh by itself? ";
    cin >> palletWeight;
    cout << "\nHow much does the pallet weigh with the widgets stacked on it? ";
    cin >> palletWidgetWeight;

    widgetAmount = (palletWidgetWeight - palletWeight) / widgetWEIGHT;

    cout << "\nThere are " << setprecision(0) << fixed << widgetAmount << " stacked on the pallet.\n";
}

void number9(){
    int cookiesAte, calories, servingPerCookies = 100;

    cout << "How many cookies did you eat? ";
    cin >> cookiesAte; 

    calories = cookiesAte * servingPerCookies;

    cout << "\nYou have consumed " << calories << " calories.";
}

void number10(){
    double replaceCost, insurance;
    const double insure = .80;

    cout << "What is the replacement cost of a building? ";
    cin >> replaceCost;

    insurance = replaceCost * insure;

    cout << "\nThis is the minimum amount of insurance you should buy for the property: $" << insurance << endl;
}

void number11(){
    double loanPayment, insurance, gas, oil, tires, maintenance, monthlyCost, yearlyCost; 

    cout << "What is your montly cost for loan payments? $";
    cin >> loanPayment;
    cout << "\nWhat is your montly cost for insurance? $";
    cin >> insurance; 
    cout << "\nWhat is your montly cost for gas? $";
    cin >> gas;
    cout << "\nWhat is your montly cost for oil? $";
    cin >> oil;
    cout << "\nWhat is your montly cost for tires? $";
    cin >> tires;
    cout << "\nWhat is your montly cost for maintenance? $";
    cin >> maintenance; 

    monthlyCost = loanPayment + insurance + gas + oil + tires + maintenance;
    yearlyCost = monthlyCost * 12;

    cout << setprecision(2) << fixed;
    cout << "\nYour monthly cost is $" << monthlyCost << endl;
    cout << "Your yearly cost is $" << yearlyCost << endl;
}

void number12(){
    double fahrenheit, celsius;

    cout << "How many degrees is it outside (in celsius): ";
    cin >> celsius;

    fahrenheit = (9.0/5.0 * celsius) + 32;

    cout << "\nIn fahrenheit, it is: " << fahrenheit << " degrees outside.\n";
}

void number13(){
    const double YEN_PER_DOLLAR = 98.93, EUROS_PER_DOLLAR = 0.74;
    double yen, euros, dollars;

    cout << "How many US dollars do you want to convert to yen? ";
    cin >> dollars;

    yen = dollars * YEN_PER_DOLLAR;
    
    cout << dollars << " dollars will be " << yen << " yen\n";

    cout << "\nHow many US dollars do you want to convert to euros? ";
    cin >> dollars;

    euros = dollars * EUROS_PER_DOLLAR;

    cout << dollars << " dollars will be " << euros << " euros\n";
}

void number14(){
    const double STATE_TAX = 0.04, COUNTY_TAX = 0.02;
    double monthlySale, yearlySale, totalCollected, sales, countySaleTax, stateSaleTax, totalSaleTax; 

    cout << "How much did you make in October? $";
    cin >> monthlySale;
    cout << "\nHow much did you make in one year? $";
    cin >> yearlySale;
    cout << "\nWhat is the total amount collected at the cash register? $";
    cin >> totalCollected;

    sales = totalCollected/1.06;
    countySaleTax = sales * COUNTY_TAX;
    stateSaleTax = sales * STATE_TAX;
    totalSaleTax = countySaleTax + stateSaleTax;

    cout << setprecision(2) << fixed;
    cout << "\nMonth: October\n";
    cout << "-----------------\n";
    cout << "Total Collected:" << setw(13)  << "$ " << totalCollected << endl;
    cout << "Sales:" << setw(23)  << "$ " << sales << endl;
    cout << "County Sales Tax:" << setw(14) << "$   " << countySaleTax << endl;
    cout << "State Sales Tax:" << setw(14) << "$  " << stateSaleTax << endl;
    cout << "Total Sales Tax:" << setw(14) << "$  " << totalSaleTax << endl;
}

void number15(){
    const double TAX = 0.60, TAX_RATE = 0.75;
    double actualValue, assessmentValue, propertyTax;

    cout << "What is the actual value of the piece of property? $";
    cin >> actualValue;

    assessmentValue = actualValue * TAX;
    propertyTax = (assessmentValue/100) * TAX_RATE;

    cout << setprecision(2) << fixed;
    cout << "\nThe assessment value is $" << assessmentValue << endl;
    cout << "The property tax is $" << propertyTax << endl;
}

void number16(){
    const double TAX = 0.60, TAX_EXEMPTION = 5000, TAX_RATE = 2.64;
    double actualValue, annualTax, quarterlyBill, assessmentValue;

    cout << "What is the actual value of the piece of property? $";
    cin >> actualValue;

    assessmentValue = (actualValue * TAX) - TAX_EXEMPTION;
    annualTax = (assessmentValue/100) * TAX_RATE;
    quarterlyBill = annualTax/4;

    cout << setprecision(2) << fixed;
    cout << "The annual property tax that will be charged is $" << annualTax << endl;
    cout << "The quarterly tax bill will be $" << quarterlyBill << endl;
}

void number17(){
    unsigned seed = time(0);
    srand(seed); 

    int numerator = rand() % 1000 - 1;
    int denominator = rand() % 1000 - 1;

    int answer = numerator + denominator; 
    char key;

    cout << setw(4) << numerator << endl;
    cout << "+" << denominator << endl;
    cout << "----";
    cin.get(key);
    cout << answer;
}

void number18(){
    double principal, interestRate, interestCompounded, amount, interest;

    cout << "What is the principal? $";
    cin >> principal;
    cout << "\nWhat is the interest rate? (in decicmal format) ";
    cin >> interestRate;
    cout << "\nWhat is the number of times the interest is compounded? ";
    cin >> interestCompounded;

    amount = principal * pow(1 + interestRate/interestCompounded, interestCompounded);
    interest = amount - principal; 

    cout << "Interest Rate:" << setw(18) << setprecision(2) << fixed << interestRate * 100 << "%" << endl;
    cout << "Times Compounded:" << setw(15) << setprecision(0) << fixed << interestCompounded << endl;
    cout << "Principal:" << setw(15) << setprecision(2) << fixed << "$ " << principal << endl;
    cout << "Interest:" << setw(18) << setprecision(2) << fixed << "$   " << interest << endl;
    cout << "Amount in Savings:" << setw(7) << setprecision(2) << fixed << "$ " << amount << endl;
}

void number19(){
    double loan, paymentsNumber, monthlyPayment, amountPaid, interestPaid, interestRate; 

    cout << "What is the loan amount? $";
    cin >> loan;
    cout << "\nWhat is the interest rate per month? (in decimal format) ";
    cin >> interestRate;
    cout << "\nWhat is the number of payments being made? ";
    cin >> paymentsNumber;

    monthlyPayment = (interestRate * pow(1 + interestRate, paymentsNumber)) / (pow(1 + interestRate, paymentsNumber) - 1) * loan;
    amountPaid = monthlyPayment * paymentsNumber;
    interestPaid = amountPaid - loan;


    cout << "\nLoan Amount:" << setw(18) << setprecision(2) << fixed << "$ " << loan << endl;
    cout << "Monthly Interest Rate:" << setw(16) << setprecision(0) << fixed << interestRate * 100 << "%" << endl;
    cout << "Number of Payments:" << setw(19) << setprecision(0) << fixed << paymentsNumber << endl;
    cout << "Monthly Payment:" << setw(16) << setprecision(2) << fixed << "$   " << monthlyPayment << endl;
    cout << "Amount Paid Back:" << setw(13) << setprecision(2) << fixed << "$ " << amountPaid << endl;
    cout << "Interest Paid:" << setw(17) << setprecision(2) << fixed << "$  " << interestPaid << endl;
}

void number20(){
    const double AREA = 14.125, PI = 3.14159;
    double diameter, slices;

    cout << "What is the diameter of the pizza in inches? ";
    cin >> diameter;

    slices = PI*(pow(diameter/2,2)) / AREA;

    cout << "You can have " << setprecision(1) << fixed << slices << " slices of pizza";
}

void number21(){
    const double SLICE_PER_PERSON = 4, AREA = 14.125, PI = 3.14159;
    double diameter, guestCount, pizzaAreaPerPerson, totalPizzaArea, pizzaAmount;

    cout << "How many people are attenting the party? ";
    cin >> guestCount;
    cout << "\nWhat is the diameter of the pizzas in inches? ";
    cin >> diameter;

    pizzaAreaPerPerson = SLICE_PER_PERSON * AREA;
    totalPizzaArea = pizzaAreaPerPerson * guestCount; 
    pizzaAmount = totalPizzaArea / (PI*(pow(diameter/2,2)));

    cout << "\nYou should purchase " << setprecision(0) << fixed << pizzaAmount << " pizzas for " << guestCount << " people.\n";
}

void number22(){
    const double PI = 3.14159;
    double angleNumerator, angleDemoninator, sinOfAngle, cosOfAngle, tanOfAngle;

    cout << "Enter a angle in radians, use 3.14159 for PI: (enter numerator - multiply before entering, then denominator after clicking enter)\n";
    cin >> angleNumerator;
    cout << "-------\n";
    cin >> angleDemoninator;

    sinOfAngle = sin(angleNumerator / angleDemoninator);
    cosOfAngle = cos(angleNumerator / angleDemoninator);
    tanOfAngle = tan(angleNumerator / angleDemoninator);

    cout << setprecision(4) << fixed;
    cout << "\nsin " << angleNumerator / angleDemoninator << " = " << sinOfAngle << endl;
    cout << "cos " << angleNumerator / angleDemoninator << " = " << cosOfAngle << endl;
    cout << "tan " << angleNumerator / angleDemoninator << " = " << tanOfAngle << endl;
}

void number23(){
    const double shares = 1000, stockPrice = 45.50, brokerFee = 0.02, stockSellPrice = 56.90;
    double stockPayment, boughtCommissionPaid, stockSold, soldCommissionPaid, profit;

    stockPayment = shares * stockPrice;
    boughtCommissionPaid = stockPayment * brokerFee;
    stockSold = shares * stockSellPrice;
    soldCommissionPaid = stockSold * brokerFee;
    profit = (stockSold - soldCommissionPaid) - (stockPayment + boughtCommissionPaid);

    cout << setprecision(2) << fixed; 
    cout << "Amount paid for stock:" << setw(43) << "$ " << stockPayment << endl;
    cout << "Amount of commission paid to broker when stock was bought:" << setw(9) << "$   " << boughtCommissionPaid << endl;
    cout << "Amount sold for stock:" << setw(43) << "$ " << stockSold << endl;
    cout << "Amount of commission paid to broker when stock was sold:" << setw(10) << "$  " << soldCommissionPaid << endl;
    cout << "Profit made from selling stock after paying broker:" << setw(15) << "$  " << profit << endl;
}

void number24(){
    double length, spaceEndPost, spaceVines, grapevines;

    cout << "What is the length of the row in feet? ";
    cin >> length;
    cout << "\nWhat is the amount of space by an end-post assesmbly in feet? ";
    cin >> spaceEndPost;
    cout << "\nWhat is the amount of space between the vines? ";
    cin >> spaceVines;

    grapevines = (length - (2 * spaceEndPost)) / spaceVines;

    cout << "\n" << grapevines << " grapevines will fit in the row.\n";
}

void number25(){
    string name, city, college, profession, animal, petName, age;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    getline(cin, age);
    cout << "Enter a city: ";
    getline(cin, city);
    cout << "Enter a college: ";
    getline(cin, college);
    cout << "Enter a profession: ";
    getline(cin, profession);
    cout << "Enter a animal: ";
    getline(cin, animal);
    cout << "Enter a pet name: ";
    getline(cin, petName);

    cout << "\nThere once was a person named " << name << " who lived in " 
    << city << ". At the age of " << age << ", " << name << " went to college at " 
    << college << ". " << name << " graduated and went to work as a " << profession << ". Then, " 
    << name << " adopted a " << animal << " named " << petName << ". They both lived happily ever after!";
}

int main() {
    cout << "1. \n";
    number1();
    cout << "\n"; 
    
    cout << "2. \n";
    number2();
    cout << "\n";

    cout << "3. \n"; 
    number3();
    cout << "\n";

    cout << "4. \n";
    number4();
    cout << "\n";

    cout << "5. \n";
    number5();
    cout << "\n";

    cout << "6. \n";
    number6();
    cout << "\n";

    cout << "7. \n";
    number7();
    cout << "\n";

    cout << "8. \n";
    number8();
    cout << "\n";

    cout << "9. \n";
    number9();
    cout << "\n";

    cout << "10. \n";
    number10();
    cout << "\n";

    cout << "11. \n";
    number11();
    cout << "\n";

    cout << "12. \n";
    number12();
    cout << "\n";

    cout << "13. \n";
    number13();
    cout << "\n";

    cout << "14. \n";
    number14();
    cout << "\n";

    cout << "15. \n";
    number15();
    cout << "\n";

    cout << "16. \n";
    number16();
    cout << "\n";

    cout << "17. \n";
    number17();
    cout << "\n";

    cout << "18. \n";
    number18();
    cout << "\n";

    cout << "19. \n";
    number19();
    cout << "\n";

    cout << "20. \n";
    number20();
    cout << "\n";

    cout << "21. \n";
    number21();
    cout << "\n";

    cout << "22. \n";
    number22();
    cout << "\n";

    cout << "23. \n";
    number23();
    cout << "\n";

    cout << "24. \n";
    number24();
    cout << "\n";

    cout << "25. \n";
    number25();

    return 0;
}