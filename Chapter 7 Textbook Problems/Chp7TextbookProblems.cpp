#include <iostream>
#include <string>

using namespace std;

// global variables


// function prototypes
// 1.
void getSmallestAndLargestValues(int[], int);

// 2. 
double calcMonthlyRain(double [], int, double);
void getHighestRain(double [], int);
void getLowestRain(double[], int);

// 3.
void getSales(string[], int[], int);
int getTotal(int[], int);
int largestSales(int[], int);
int smallestSales(int[], int);


// main
int main(){
    // cout << "1.\n";

    // const int ARRAY_SIZE = 10;
    // int numbers[ARRAY_SIZE];

    // cout << "This program will determine the smallest and largest number in the list you provide\n";

    // for (int index = 0; index < ARRAY_SIZE; index++)
    // {
    //     cout << "Enter #" << index + 1 << ": ";
    //     cin >> numbers[index];
    // }
    
    // getSmallestAndLargestValues(numbers, ARRAY_SIZE);

//***************************************************************************************************
    // cout << "2.\n";

    // const int ARRAY_SIZE = 12;
    // double rainfall[ARRAY_SIZE];
    // double yearlyTotal = 0;
    // double highest, lowest;

    // for(int i = 0; i < ARRAY_SIZE; i++)
    // {
    //     do
    //     {
    //         cout << "Enter the total rainfall for month " << i + 1 << ": ";
    //         cin >> rainfall[i];
    //     } 
    //     while(rainfall[i] < 0);

    //     yearlyTotal += rainfall[i];
    // }

    // cout << "The yearly rainfall is " << yearlyTotal << " inches" << endl;
    // cout << "The average rainfall per month is " << calcMonthlyRain(rainfall, ARRAY_SIZE, yearlyTotal) << " inches" << endl;
    // getHighestRain(rainfall, ARRAY_SIZE);
    // getLowestRain(rainfall, ARRAY_SIZE);

//***************************************************************************************************
    cout << "3.\n";

    const int ARRAY_SIZE = 5;
    int totalSales, highest, lowest;

    string salsaNames[ARRAY_SIZE] = {"mild", "medium", "sweet", "hot", "zesty"};
    int salsaSales[ARRAY_SIZE];

    getSales(salsaNames, salsaSales, ARRAY_SIZE);

    totalSales = getTotal(salsaSales, ARRAY_SIZE);

    //here you're storing the i integer in highest
    highest = largestSales(salsaSales, ARRAY_SIZE);

    lowest = smallestSales(salsaSales, ARRAY_SIZE);


    cout << "Total number of jars sold is " << totalSales << endl;

    //here you are reading the salsaName in the i integer that is stored in highest
    cout << "The salsa that sold the most was " << salsaNames[highest] << endl;
    cout << "The salsa that sold the least was " << salsaNames[lowest] << endl;

    return 0;
}


// functions

// 1.
void getSmallestAndLargestValues(int num[], int size){
    int highest = num[0];
    int lowest = num[0];

    for (int i = 0; i < size; i++) //i can start at 1 since num[0] is already the highest
    {
        if (num[i] > highest)
        {
            highest = num[i];
        }
    }
    for (int i = 0; i < size; i ++) //i can start at 1 since num[0] is already the highest
    {
        if (num[i] < lowest)
        {
            lowest = num[1];
        }
    }

    cout << "The highest number in your list is " << highest << endl;
    cout << "The lowest number in your list is " << lowest << endl;
}

// 2.
double calcMonthlyRain(double rain[], int size, double yearRain){
    double monthlyRain = yearRain / size;

    return monthlyRain; 
}

void getHighestRain(double rainFall[], int size){
    double highest = rainFall[0];
    int i;

    for (i = 0; i < size; i++)
    {
        if (rainFall[i] > highest)
        {
            highest = rainFall[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (rainFall[i] == highest)
        {
            cout << "Month " << i + 1 << " had the highest rainfall at " << highest << " inches" << endl;
        }
    }
}

void getLowestRain(double rain[], int size){
    double lowest = rain[0];
    int i;

    for (i = 0; i < size; i++)
    {
        if (rain[i] < lowest)
        {
            lowest = rain[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (rain[i] == lowest)
        {
            cout << "Month " << i + 1 << " had the lowest rainfall at " << lowest << " inches" << endl;
        }
    }
}

// 3.
void getSales(string names[], int sales[], int size){
    for (int i = 0; i < size; i++)
    {
        do
        {
            cout << "How many jars were sold for " << names[i] << " salsa? ";
            cin >> sales[i];
        }
        while (sales[i] < 0);
    }
    for (int i = 0; i < size; i++)
    {
        cout << names[i] << " salsa sold " << sales[i] << " jars.\n";
    }
}
int getTotal(int salsaSales[], int size){
    int totalSales = 0;

    for (int i = 0; i < size; i++)
    {
        totalSales += salsaSales[i];
    }

    return totalSales;
}
int largestSales(int salsaSold[], int size){
    int highest = 0;

    for (int i = 0; i < size; i++)
    {
        if (salsaSold[i] > salsaSold[highest])
        {
            highest = i; //so since you cant return an array, but you can return an i integer
        }
    }
    return highest;
}
int smallestSales(int salsaSold[], int size){
    int smallest = 0;

    for (int i = 0; i < size; i++)
    {
        if (salsaSold[i] < salsaSold[smallest])
        {
            smallest = i;
        }
    }
    return smallest;
}


