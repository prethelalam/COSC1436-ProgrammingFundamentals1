#include <iostream>
#include <iomanip>
#include <string> 
#include <cmath>
using namespace std;

//function prototypes

// 1.
double calcRetail(double, double);

// 2.
double getLength(int);
double getWidth(int);
double getArea(int, int);
void displayData(int, int, int);

// 3.
double getSales(string);
void findHighest(double, double, double, double);

// 4.
int getNumAccidents(string);
void findLowest(int, int, int, int, int);

// 5.
double fallingDistance(int);

// 6.
double kineticEnergy(double, double);

// 7.
double convertToCelsius(int);

// 8. 
void coinToss(int);

// 9.
double presentValue(double, double, int);

// 10.
double calcFutureValue(double, double, int);

// 11.
void getScore(double&);
void calcAverage(double, double, double, double, double);
int findLowest(double, double, double, double, double);

// 12.
void getJudgeData(double&);
void calcScore(double, double, double, double, double);
int find_Lowest(double, double, double, double, double);
int find_Highest(double, double, double, double, double);

// 13.
int getEmployeeNumber();
int getDaysMissed(int);
double calcAvgDaysMissed(int, int);

// 14.                  //come back to this one
int getOrderStatus();
double calcOrder(int);

// 15.
double calcHospitalCharges(int, double, double, double);
double calcHospitalCharges(double, double);

// 16.
void getPopulationSize(int, int, int, int);

// 17.
void getPopulationSize(int, int, int, int, int, int);

// 18.
int getRooms();
double getSquareFeet(int);
double getPaintPrice();
void calcJobPrice(int, double, double);


int main(){
    // cout << "1.\n";

    // double wholesaleCost, markUp;

    // cout << "Enter an item's wholesale cost: ";
    // cin >> wholesaleCost; 

    // while (wholesaleCost <= 0)
    // {
    //     cout << "\nEnter a valid wholesale cost: ";
    //     cin >> wholesaleCost;
    // }

    // cout << "\nEnter the markup percentage: ";
    // cin >> markUp;

    // while (markUp <= 0)
    // {
    //     cout << "\nEnter a valid markup percentage: ";
    //     cin >> markUp;
    // }

    // markUp /= 100;

    // cout << setprecision(2) << fixed << "The items retail price is $" << calcRetail(wholesaleCost, markUp);

//****************************************************************************************************
    // cout << "2.\n";

//     double length, width, area; 
//     int lengthInt, widthInt; 

//     cout << "Enter the rectangles length and width (use a space to seperate the numbers: ";
//     cin >> lengthInt >> widthInt;

//    // Get the rectangle's length.
//     length = getLength(lengthInt); 

//    // Get the rectangle's width.
//     width = getWidth(widthInt);

//    // Get the rectangle's area.
//     area = getArea(length, width);

//    // Display the rectangle's data.
//     displayData(length, width, area);

//****************************************************************************************************
    // cout << "3.\n";

    // findHighest(getSales("Northeast"), getSales("Northwest"), getSales("Southeast"), getSales("Southwest"));

//****************************************************************************************************
    // cout << "4.\n";

    // findLowest(getNumAccidents("north"), getNumAccidents("south"), getNumAccidents("east"), getNumAccidents("west"), getNumAccidents("central"));

//****************************************************************************************************
    // cout << "5.\n";

    // for (int i = 1; i <= 10; i++) //assume i is in seconds
    // {
    //     cout << "In " << i << " seconds. The object fell " << fallingDistance(i) << " meters per second" << endl;
    // }

//****************************************************************************************************
    // cout << "6.\n";

    // double mass, velocity;

    // cout << "What is the mass of the object? ";
    // cin >> mass;
    // cout << "\nWhat is the velocity of the object? \n";
    // cin >> velocity;

    // cout << "The kinetic energy of the object is " << kineticEnergy(mass, velocity) << " meters per second.";

//****************************************************************************************************
    // cout << "7.\n";

    // cout << "Fahrenheit" << "\tCelsius\n";

    // for (int i = 0; i <= 20; i++) //assume i is fn fahrenheit
    // {
    //     cout << i << "\t\t" << setprecision(2) << fixed << convertToCelsius(i) << endl;
    // }

//****************************************************************************************************
    // cout << "8.\n";

    // int toss;

    // cout << "How many times do you want to toss the coin? ";
    // cin >> toss;

    // for (int i = 1; i <= toss; i++)
    // {
    //     coinToss(i);
    // }
    
//****************************************************************************************************
    // cout << "9.\n";

    // int years;
    // double futureValue, annualInterest;

    // cout << "How much money do you want in your account in the future? ";
    // cin >> futureValue;
    // cout << "\nWhat is the annual interest rate? ";
    // cin >> annualInterest;
    // cout << "\nFow how many years do you want the money to sit in your account for? ";
    // cin >> years;

    // annualInterest /= 100;

    // cout << setprecision(2) << fixed;
    // cout << "\nYou need to deposit $" << presentValue(futureValue, annualInterest, years) << " today to have a future value of $" << futureValue;

//****************************************************************************************************
    // cout << "10.\n";

    // int time;
    // double presentValue, monthlyInterest;

    // cout << "Enter your present value amount $";
    // cin >> presentValue;
    // cout << "\nWhat is the annual interest rate? ";
    // cin >> monthlyInterest;
    // cout << "\nFow how many years do you want the money to sit in your account for? ";
    // cin >> time;

    // cout << cout << setprecision(2) << fixed << calcFutureValue(presentValue, monthlyInterest, time) << " today to have a future value of $";

//****************************************************************************************************
    // cout << "11.\n";

    // double score1, score2, score3, score4, score5;

    // //we're only getting the scores here
    // getScore(score1);
    // getScore(score2);
    // getScore(score3);
    // getScore(score4);
    // getScore(score5);

    // //we aren't passing the void function but the scores itself
    // calcAverage(score1, score2, score3, score4, score5);

//****************************************************************************************************
    // cout << "12\n";

    // double score1, score2, score3, score4, score5;

    // getJudgeData(score1);
    // getJudgeData(score2);
    // getJudgeData(score3);
    // getJudgeData(score4);
    // getJudgeData(score5);

    // calcScore(score1, score2, score3, score4, score5);

//****************************************************************************************************
    //cout << "13\n";
    
    // int totalDaysMissed, employeesAmt;

    // employeesAmt = getEmployeeNumber(); //store the returning int in employeesAmt

    // totalDaysMissed = getDaysMissed(employeesAmt); //pass employees amount, and return int in totaldays missed

    // cout << "The average number of days missed was " << calcAvgDaysMissed(totalDaysMissed, employeesAmt) << " days\n";

//****************************************************************************************************
    // cout << "14.\n";

    // int spoolsOrderAmt, spoolsStockAmt, specialChargeAmt, amounts;

    // amounts = getOrderStatus();
    // spoolsStockAmt = getOrderStatus();
    // specialChargeAmt = getOrderStatus();

    //cout << amounts;

    // calcOrder(getOrderStatus());

//****************************************************************************************************
    // cout << "15.\n";

    // string answer;
    // int days;
    // double rate, charges, serviceCharge, outCharges, outServiceCharge;

    // cout << "Were you admitted as an inpatient or outpatient? ";
    // cin >> answer;

    // if (answer == "inpatient")
    // {
    //     do
    //     {
    //         cout << "How many days did you spend in the hospital? ";
    //         cin >> days;
    //         cout << "\nWhat was the daily rate? ";
    //         cin >> rate;
    //         cout << "\nWhat was the hospital medication charges? ";
    //         cin >> charges;
    //         cout << "\nWhat were the charges for the hospital services (lab tests, etc..) ";
    //         cin >> serviceCharge;
    //     }
    //     while (days <= 0 || rate <= 0.0 || charges <= 0.0 || serviceCharge <= 0.0);

    //     cout << "Your hospital bill is $" << setprecision(2) << fixed << calcHospitalCharges(days, rate, charges, serviceCharge);
    // }
    // else if (answer == "outpatient")
    // {
    //     do
    //     {
    //         cout << "\nWhat was the hospital medication charges? ";
    //         cin >> outCharges;
    //         cout << "\nWhat were the charges for the hospital services (lab tests, etc..) ";
    //         cin >> outServiceCharge;
    //     }
    //     while (outCharges <= 0.0 || outServiceCharge <= 0.0);

    //     cout << "Your hospital bill is $" << setprecision(2) << fixed << calcHospitalCharges(outCharges, outServiceCharge);
    // }

//****************************************************************************************************
    // cout << "16.\n";

    // int population, birthRate, deathRate, years;

    // do
    // {
    //     cout << "What is the starting size of the population? ";
    //     cin >> population;
    //     cout << "\nWhat is the annual birth rate? ";
    //     cin >> birthRate;
    //     cout << "\nWHat is the annual death rate? ";
    //     cin >> deathRate;
    //     cout << "\nHow many years into the future do you want to see the population size? ";
    //     cin >> years;

    // } while (population < 2 || birthRate < 0 || deathRate < 0 || years < 1);
    
    // getPopulationSize(population, birthRate, deathRate, years);

//****************************************************************************************************
    // cout << "17.\n";

    // int population, birthRate, deathRate, numYears, moveIn, moveOut;

    // do
    // {
    //     cout << "What is the starting size of the population? ";
    //     cin >> population;
    //     cout << "\nWhat is the annual birth rate? ";
    //     cin >> birthRate;
    //     cout << "\nWhat is the annual death rate? ";
    //     cin >> deathRate;
    //     cout << "\nHow many people typically move into this area per year? ";
    //     cin >> moveIn;
    //     cout << "\nHow many people typically leave this area per year? ";
    //     cin >> moveOut;
    //     cout << "\nHow many years into the future do you want to see the population size? ";
    //     cin >> numYears;

    // } while (population < 2 || birthRate < 0 || deathRate < 0 || numYears < 1 || moveIn < 0 || moveOut < 0);
    
    // getPopulationSize(population, birthRate, deathRate, numYears, moveIn, moveOut);

//****************************************************************************************************
    cout << "18.\n";

    int numRooms;
    double paintPrice, squareFoot;

    numRooms = getRooms();

    squareFoot = getSquareFeet(numRooms);

    paintPrice = getPaintPrice();

    calcJobPrice(numRooms, squareFoot, paintPrice);
    

    return 0;
}





// 1.
double calcRetail (double cost, double percent){
    return (cost * percent) + cost;
}

// 2.
double getLength(int l1){
    return l1;
}

double getWidth(int w1){
    return w1;
}

double getArea(int l1, int w1){
    return l1 * w1;
}

void displayData (int l1, int w1, int a1){
    cout << "The length is: " << l1 << endl;
    cout << "The width is: " << w1 << endl;
    cout << "The area is: " << a1 << endl;
}

// 3. 
double getSales(string divisionName){
    double sales;

    cout << "Enter the quarterly sales figure for the " << divisionName << " division: "; //this will ask 4 times because in main you call getSales 4 times in the findHighest function
    cin >> sales;

    while (sales < 0)
    {
        cout << "The quarterly sales figure should be positive. Enter the sales figure: ";
        cin >> sales;
    }
    
    return sales;
}

void findHighest(double salesNE, double salesNW, double salesSE, double salesSW){
    string divisionName;
    double highestSales;

    if (salesNE > salesSE && salesNE > salesNW && salesNE > salesSW)
	{
		divisionName = "Northeast";
		highestSales = salesNE;
	}
    else if (salesNW > salesNE && salesNW > salesSE && salesNW > salesSW)
	{
		divisionName = "Northwest";
		highestSales = salesNW;
	}
	else if (salesSE > salesNE && salesSE > salesNW && salesSE  > salesSW)
	{
		divisionName = "Southeast";
		highestSales = salesSE;
	}
	else
	{
		divisionName = "Southwest";
		highestSales = salesSW;
	}

    cout << "\nThe " << divisionName << " had the highest sales this quarter: $" << highestSales;
}

// 4.
int getNumAccidents(string region){
    int accidents;

    do 
    {
        cout << "How many automobile accidents were reported in the " << region << endl;
        cin >> accidents;
    }
    while (accidents <= 0);
    
    return accidents;
}

void findLowest (int northAccidents, int southAccidents, int eastAccidents, int westAccidents, int centralAccidents){
    if (northAccidents < southAccidents && northAccidents < eastAccidents && northAccidents < westAccidents && northAccidents < centralAccidents)
    {
        cout << "North had the least number of accidents at " << northAccidents << endl;
    }
    else if (southAccidents < northAccidents && southAccidents < eastAccidents && southAccidents < westAccidents && southAccidents << centralAccidents)
    {
        cout << "South had the least number of accidents at " << southAccidents << endl;
    }
    else if(eastAccidents < northAccidents && eastAccidents < southAccidents && eastAccidents < westAccidents && eastAccidents < centralAccidents)
    {
        cout << "East had the least number of accidents at " << eastAccidents << endl;
    }
    else if (westAccidents < northAccidents && westAccidents < southAccidents && westAccidents < eastAccidents && westAccidents < centralAccidents)
    {
        cout << "West had the least number of accidents at " << westAccidents << endl;
    }
    else
    {
        cout << "Central had the least number of accidents at " << centralAccidents << endl;
    }
}

// 5.
double fallingDistance (int time){
    double distance; //in meters per seconds 
    const double GRAVITY = 9.8; 

    distance = 1.0 / 2.0 * GRAVITY * pow(time, 2);

    return distance; 
}

// 6.
double kineticEnergy(double m1, double v1){

    return 1.0 / 2.0 * m1 * pow(v1, 2);
}

// 7.
double convertToCelsius(int temp){

    return (temp - 32) * (5.0/9.0); 
}

// 8.
void coinToss(int option){
    int min = 1, max = 2, number;
    srand(time(NULL));

    for (int i = 1; i <= option; i++)
    {
        number = (rand()%(max - min + 1) + min);
    }

    if (number == 1)
    {
        cout << "heads\n";
    }
    else if (number == 2)
    {
        cout << "tails\n";
    }
}

// 9.
double presentValue(double fv, double rate, int numOfYears){

    return fv / pow((1+rate), numOfYears);
}

// 10.
double calcFutureValue(double pv, double rate, int numOfYears){

    return pv * pow((1 + rate), numOfYears);
}

// 11.
void getScore(double& grade){

    cout << "What is your test score? ";
    cin >> grade;

    while (grade < 0 || grade > 100)
    {
        cout << "Enter a valid test score: ";
        cin >> grade;  //grade is getting passed to main when we call the function
    }
}

void calcAverage(double num1, double num2, double num3, double num4, double num5){

    if (num1 == findLowest(num1, num2, num3, num4, num5))
    {
        cout << "The average of the four highest scores is ";
        cout << (num2 + num3 + num4 + num5) / 4 << endl;
    }
    else if (num2 == findLowest(num1, num2, num3, num4, num5))
    {
        cout << "The average of the four highest scores is ";
        cout << (num1 + num3 + num4 + num5) / 4 << endl;
    }
    else if (num3 == findLowest(num1, num2, num3, num4, num5))
    {
        cout << "The average of the four highest scores is ";
        cout << (num1 + num2 + num4 + num5) / 4 << endl;
    }
    else if (num4 == findLowest(num1, num2, num3, num4, num5))
    {
        cout << "The average of the four highest scores is ";
        cout << (num1 + num2 + num3 + num5) / 4 << endl;
    }
    else
    {
        cout << "The average of the four highest scores is ";
        cout << (num1 + num2 + num3 + num4) / 4 << endl;
    }
}

int findLowest(double num1, double num2, double num3, double num4, double num5){
    double lowest;

    if (num1 <= num2 && num1 <= num3 && num1 <= num4 && num1 <= num5)
    {
        lowest = num1;
        return num1;
    }
    else if (num2 <= num1 && num2 <= num3 && num2 <= num4 && num2 <= num5)
    {
        lowest = num2;
        return num2;
    }
    else if (num3 <= num1 && num3 <= num2 && num3 <= num4 && num3 <= num5)
    {
        lowest = num3;
        return num3;
    }
    else if (num4 <= num1 && num4 <= num2 && num4 <= num3 && num4 <= num5)
    {
        lowest = num4;
        return num4;
    }
    else 
    {
        lowest = num5;
        return num5;
    }
}

// 12.

void getJudgeData(double& score) //this gets passed to lines 211 to 215
{
    do
    {
        cout << "Enter a score for the performance: ";
        cin >> score; //this is passed to line 462
    }
    while(score < 0 || score > 10);
}

void calcScore(double point1, double point2, double point3, double point4, double point5) //passed to line 217
{
    double lowest, highest; 

    if (point1 == find_Lowest(point1, point2, point3, point4, point5))
    {
        lowest = point1; //gets passed to line 472
    }
    else if (point2 == findLowest(point1, point2, point3, point4, point5))
    {
        lowest = point2;
    }
    else if (point4 == findLowest(point1, point2, point3, point4, point5))
    {
        lowest = point4;
    }
    else if (point4 == findLowest(point1, point2, point3, point4, point5))
    {
        lowest = point4;
    }
    else
    {
        lowest = point5;
    }

    if (point1 == find_Highest(point1, point2, point3, point4, point5))
    {
        highest = point1; //gets passed to line 472
    }
    else if (point2 == find_Highest(point1, point2, point3, point4, point5))
    {
        highest = point2;
    }
    else if (point4 == find_Highest(point1, point2, point3, point4, point5))
    {
        highest = point4;
    }
    else if (point4 == find_Highest(point1, point2, point3, point4, point5))
    {
        highest = point4;
    }
    else
    {
        highest = point5;
    }

    cout << "The average of the 3 scores is ";
    cout << ((point1 + point2 + point3 + point4 + point5) - (highest + lowest)) / 3;

}

int find_Lowest(double num1, double num2, double num3, double num4, double num5) //gets passed to line 476
{
    double lowest;

    if (num1 <= num2 && num1 <= num3 && num1 <= num4 && num1 <= num5)
    {
        lowest = num1;
        return num1; //passed to line 498
    }
    else if (num2 <= num1 && num2 <= num3 && num2 <= num4 && num2 <= num5)
    {
        lowest = num2;
        return num2;
    }
    else if (num3 <= num1 && num3 <= num2 && num3 <= num4 && num3 <= num5)
    {
        lowest = num3;
        return num3;
    }
    else if (num4 <= num1 && num4 <= num2 && num4 <= num3 && num4 <= num5)
    {
        lowest = num4;
        return num4;
    }
    else 
    {
        lowest = num5;
        return num5;
    }
}

int find_Highest(double grade1, double grade2, double grade3, double grade4, double grade5)
{
    double highest;

    if (grade1 >= grade2 && grade1 >= grade3 && grade1 >= grade4 && grade1 >= grade5)
    {
        highest = grade1;
        return grade1;
    }
    else if (grade2 >= grade1 && grade2 >= grade3 && grade2 >= grade4 && grade2 >= grade5)
    {
        highest = grade2;
        return grade2;
    }
    else if (grade3 >= grade1 && grade3 >= grade2 && grade3 >= grade4 && grade3 >= grade5)
    {
        highest = grade3;
        return grade3;
    }
    else if (grade4 >= grade1 && grade4 >= grade2 && grade4 >= grade3 && grade4 >= grade5)
    {
        highest = grade4;
        return grade4;
    }
    else 
    {
        highest = grade5;
        return grade5;
    }
}

// 13.
int getEmployeeNumber(){
    int employeesAmt;

    cout << "How many employees do you have? ";
    cin >> employeesAmt;
    
    while(employeesAmt <= 0)
    {
        cout << "Enter a positive number: ";
        cin >> employeesAmt;
    }

    return employeesAmt;
}

int getDaysMissed(int amount){
    int daysMissed, totalDaysMissed = 0;

    for (int i = 1; i <= amount; i++)
    {      
        cout << "How many days did this employee miss? ";
        cin >> daysMissed;

        while(daysMissed < 0)
        {
            cout << "Enter a positive number: ";
            cin >> daysMissed;
        }

        totalDaysMissed += daysMissed;
    }

    return totalDaysMissed;
}

double calcAvgDaysMissed(int missed, int people){
    double AvgMissed = missed / people;

    return AvgMissed;
}

// 14.                      //come back to this one
int getOrderStatus(){
    int spoolsOrdered, spoolsStock, specialCharge;
    string answer;

    cout << "How many spools are you ordering? ";
    cin >> spoolsOrdered;
    cout << "\nHow many spools are in stock? ";
    cin >> spoolsStock;
    cout << "\nAre there any special shipping and handling chargers (enter yes or no)? ";
    cin >> answer;

    while(spoolsOrdered < 1 || spoolsStock < 0)
    {
        if (spoolsOrdered < 1)
        {
            cout << "\nYou must order at least 1 spool. How many spools would you like to order? ";
            cin >> spoolsOrdered;
        }
        if (spoolsStock < 0)
        {
            cout << "\nYou must a a positive number for the amount of spools in stock. How many spools are in stock? ";
            cin >> spoolsStock;
        }
    }

    if (answer == "yes" || answer == "Yes")
    {
        cout << "\nHow much are the special chargers per spool? ";
        cin >> specialCharge;
    }
    else
    {
        specialCharge = 10;
    }
    return spoolsOrdered;
    return spoolsStock;
    return specialCharge;
}

// 15.
double calcHospitalCharges(int hospDays, double dailyRate, double medCharges, double hospCharges){
    double totalCharges = (hospDays * dailyRate) + medCharges + hospCharges;

    return totalCharges;
}

double calcHospitalCharges(double outPtCharges, double outPtservice){
    double totalCharges = outPtCharges + outPtservice;

    return totalCharges;
}

// 16.
void getPopulationSize(int startingPop, int birth, int death, int amount){
    for (int i = 1; i <= amount; i++)
    {
        int newPop = startingPop + ((birth - death) * i);

        cout << "New population size for Year " << i << " in the future: " << newPop << endl;
    }
}

// 17.
void getPopulationSize(int startPop, int birth, int death, int years, int arrivals, int departures){
    for (int i = 1; i <= years; i++)
    {
        int newPop = startPop + (((birth + arrivals) - (death + departures)) * i);

        cout << "New population size for Year " << i << " in the future: " << newPop << endl;
    }
}

// 18.
int getRooms(){
    int rooms;
    
    do
    {
        cout << "How rooms need to be painted? ";
        cin >> rooms;
        
    } while(rooms < 1);

    return rooms;
}

double getSquareFeet(int roomCount){
    double squareFeet, totalSquareFeet = 0;    

    for (int i = 1; i <= roomCount; i++)
    {
        cout << "\nWhat is the square footage of room " << i << endl;
        cin >> squareFeet;

        while(squareFeet < 0)
        {
            cout << "\nEnter a valid number of square feet: ";
            cin >> squareFeet;
        }
            
        totalSquareFeet += squareFeet;
    }
    
    return totalSquareFeet;
}

double getPaintPrice (){
    double paintPrice;

    cout << "\nHow much is the price of paint per gallon? ";
    cin >> paintPrice;

    while (paintPrice < 10.00)
    {
        cout << "\nEnter a valid cost for paint: ";
        cin >> paintPrice;
    }

    return paintPrice;
}

void calcJobPrice(int roomAmt, double squareFeet, double paintPriceGallon){
    double const standardSF = 110.00, standardHour = 8, hourlyCharge = 25.00;

    double GallonsOfPaint = squareFeet / standardSF;
    int timeOfLabor = GallonsOfPaint * standardHour;
    double costOfPaint = GallonsOfPaint * paintPriceGallon;
    double laborCharges = timeOfLabor * hourlyCharge;
    double totalCost = costOfPaint + laborCharges;

    cout << setprecision(0) << fixed;
    cout << "\nThe number of gallons required is " << GallonsOfPaint << endl;
    cout << "The hours of labor required is " << timeOfLabor << endl;
    cout << setprecision(2) << fixed;
    cout << "The cost of the paint is $" << costOfPaint << endl;
    cout << "The labor charges is $" << laborCharges << endl;
    cout << "The total cost of the paint job is $" << totalCost << endl;
}
