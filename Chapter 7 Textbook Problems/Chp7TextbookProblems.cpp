#include <iostream>

using namespace std;

// global variables


// function parameters
// 1.
void getSmallestAndLargestValues(int[], int);

// 2.           //finish tom
double calcMonthlyRain(double [], int, double);
void getHighestRain(double [], int, int);
void getLowestRain(double[], int, int);



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
    cout << "2.\n";

    const int ARRAY_SIZE = 12;
    double rainfall[ARRAY_SIZE];
    double yearlyTotal = 0;
    double highest, lowest;
    int &subscript;


    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        do
        {
            cout << "Enter the total rainfall for month " << i + 1 << ": ";
            cin >> rainfall[i];
        } 
        while(rainfall[i] < 0);

        yearlyTotal += rainfall[i];
    }

    

    cout << "The yearly rainfall is " << yearlyTotal << endl;
    cout << "The average rainfall per month is " << calcMonthlyRain(rainfall, ARRAY_SIZE, yearlyTotal) << endl;

    getHighestRain(rainfall, ARRAY_SIZE, subscript);
    getLowestRain(rainfall, ARRAY_SIZE, subscript);



    return 0;
}


// functions

// 1.
void getSmallestAndLargestValues(int num[], int size){
    int highest = num[0];
    int lowest = num[0];

    for (int i = 0; i < size; i++) //i can start at 1 since num[0] is already the highest
    {
        if (num[i] >  num[0])
        {
            highest = num[i];
        }
    }
    for (int i = 0; i < size; i ++) //i can start at 1 since num[0] is already the highest
    {
        if (num[i] < num[0])
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

void getHighestRain(double rainFall[], int size, int &element){
    double highest = rainFall[0];
    int i;

    for (i = 0; i < size; i++)
    {
        if (rainFall[i] > rainFall[0])
        {
            highest = rainFall[i];
        }
    }

    cout << "Month " << rainFall[i] << " had the highest rainfall at " << highest << endl;
}

void getLowestRain(double rain[], int size, int &element){
    double lowest = rain[0];
    int i;
    element = 0;

    for (i = 0; i < size; i++)
    {
        if (rain[i] < rain[0])
        {
            lowest = rain[i];
            element = i;
        }
    }

    cout << "Month " << rain[i] << " had the lowest rainfall at " << lowest << endl;
}