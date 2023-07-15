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
void getScore(int);
void calcAverage();
int findLowest();


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
    cout << "11.\n";

    int score;

    getScore(score);



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
void getScore(int number){


    cout << "What is your test score? ";
    cin >> number;
}

void calcAverage(){

}

int findLowest(){

}