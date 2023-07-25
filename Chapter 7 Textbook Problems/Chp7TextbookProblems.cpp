#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// global variables
// 5.
const int ROWS = 3, COLS = 5;

// 6.
const int ROW = 3, COL = 30;

// 8. 
const int ROW_LO = 3, COL_LO = 3;

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

// 4.
void displayNumbers(int[], int, int);

// 5.
double getUserInput(int[ROWS][COLS]);
double getAvg(double);
void getLowest(int[ROWS][COLS]);
void getHighest(int[ROWS][COLS]);

// 6.
void createFileAndStoreInfo(char[ROW][COL]);
void juneWeatherCount(char[ROW][COL]);
void julyWeatherCount(char[ROW][COL]);
void augWeatherCount(char[ROW][COL]);
int findMostRainyMonth(char[ROW][COL]);

// 7.
void storeInfo(int[], int);
double getArrayTotal(int[], int);
int getArrayHighest(int[], int);
int getArrayLowest(int[], int);

// 8.
void determineMagicSquare(int[ROW_LO][COL_LO]);

// 9.
void getHours(int[], int[], double[], int);
void calcWages(int[], double[], double[], int);
void displayIDWages(int[], double[], int);

// 10.
void getStudentAns(char[], int);
void getResults(char[], char[], int);

// 11.
void storeStudentAnswers(char[], int);
void storeCorrectAnswers(char[], int);
void compareResults(char[], char[], int);

// 12.              //come back too
void getStudentNames(string[], int);
void getTestScores(string[], double[], int, int);


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
    // cout << "3.\n";

    // const int ARRAY_SIZE = 5;
    // int totalSales, highest, lowest;

    // string salsaNames[ARRAY_SIZE] = {"mild", "medium", "sweet", "hot", "zesty"};
    // int salsaSales[ARRAY_SIZE];

    // getSales(salsaNames, salsaSales, ARRAY_SIZE);

    // totalSales = getTotal(salsaSales, ARRAY_SIZE);

    // //here you're storing the i integer in highest
    // highest = largestSales(salsaSales, ARRAY_SIZE);

    // lowest = smallestSales(salsaSales, ARRAY_SIZE);


    // cout << "Total number of jars sold is " << totalSales << endl;

    // //here you are reading the salsaName in the i integer that is stored in highest
    // cout << "The salsa that sold the most was " << salsaNames[highest] << endl;
    // cout << "The salsa that sold the least was " << salsaNames[lowest] << endl;

//***************************************************************************************************
    // cout << "4.\n";

    // const int CONDITION = 2, ARRAY_SIZE = 5;

    // int numbers[ARRAY_SIZE] = {1, 2, 3, 4, 5};

    // displayNumbers(numbers, ARRAY_SIZE, CONDITION);
    
//***************************************************************************************************
    // cout << "5.\n";

    // int monkeyData[ROWS][COLS];

    // double total = getUserInput(monkeyData);

    // double average = getAvg(total);

    // cout << "The average amount of food eaten per day by the whole family of monkeys is " << average << endl;

    // getLowest(monkeyData);
    // getHighest(monkeyData);

//***************************************************************************************************
    // cout << "6.\n";
    
    // char weatherReport[ROW][COL];
    // int rainyMonth;

    // createFileAndStoreInfo(weatherReport);
    // juneWeatherCount(weatherReport);
    // julyWeatherCount(weatherReport);
    // augWeatherCount(weatherReport);

    // rainyMonth = findMostRainyMonth(weatherReport);

    // if (rainyMonth == 0)
    // {
    //     cout << "\nThe most rainy month was June" << endl;
    // }
    // else if(rainyMonth == 1)
    // {
    //     cout << "\nThe most rainy month was July" << endl;
    // }
    // else if(rainyMonth == 2)
    // {
    //     cout << "\nThe most rainy month was August" << endl;
    // }

//***************************************************************************************************
    // cout << "7.\n";

    // const int ARRAY_SIZE = 12;
    // int numbers[ARRAY_SIZE];
    // double total;
    // int highest, lowest;

    // storeInfo(numbers, ARRAY_SIZE);

    // total = getArrayTotal(numbers, ARRAY_SIZE);
    // highest = getArrayHighest(numbers, ARRAY_SIZE);
    // lowest = getArrayLowest(numbers, ARRAY_SIZE);


    // cout << "\nThe total of the numbers in the array is " << total << endl;
    // cout << "The average of the numbers in the array is " << total / ARRAY_SIZE << endl;
    // cout << "The highest number in the array is " << numbers[highest] << endl;
    // cout << "The lowest number in the array is " << numbers[lowest] << endl;

//***************************************************************************************************
    // cout << "8.\n";

    // int magicSquare[ROW_LO][COL_LO] = {{4, 9, 2},
    //                                     {3, 5, 7},
    //                                     {8, 1, 6}};

    // determineMagicSquare(magicSquare);

//***************************************************************************************************
    // cout << "9.\n";

    // const int ARRAY_SIZE = 7;
    // int empID[ARRAY_SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    // int hours[ARRAY_SIZE];
    // double payRate[ARRAY_SIZE];
    // double wages[ARRAY_SIZE];

    // getHours(empID, hours, payRate, ARRAY_SIZE);
    // calcWages(hours, payRate, wages, ARRAY_SIZE);
    // displayIDWages(empID, wages, ARRAY_SIZE);

//***************************************************************************************************
    // cout << "10.\n";

    // const int ARRAY_SIZE = 20;
    // char correctAns[ARRAY_SIZE] = {'a', 'd', 'b', 'b', 'c', 'b', 'a', 'b', 'c', 'd', 'a', 'c', 'd', 'b', 'd', 'c', 'c', 'a', 'd', 'b'};
    // char studentsAns[ARRAY_SIZE];

    // getStudentAns(studentsAns, ARRAY_SIZE);
    // getResults(studentsAns, correctAns, ARRAY_SIZE);

//***************************************************************************************************
    // cout << "11.\n";

    // const int ARRAY_SIZE = 20;
    // char studentAns[ARRAY_SIZE];
    // char correctAns[ARRAY_SIZE];

    // storeStudentAnswers(studentAns, ARRAY_SIZE);
    // storeCorrectAnswers(correctAns, ARRAY_SIZE);
    // compareResults(studentAns, correctAns, ARRAY_SIZE);

//***************************************************************************************************
    cout << "12.\n";

    const int ARRAY_SIZE = 5;
    const int TEST_ARRAY_SIZE = 4;

    string studentNames[ARRAY_SIZE];
    double testScores[TEST_ARRAY_SIZE];
    //char studentGrade[ARRAY_SIZE];

    //pass studentNames, array size, test scores, and test array size
    //have a nested for loop
    

    getStudentNames(studentNames, ARRAY_SIZE);
    getTestScores(studentNames, testScores, ARRAY_SIZE, TEST_ARRAY_SIZE);
    
    //average = getTestScores(student1Score, TEST_ARRAY_SIZE);

    

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

// 4.
void displayNumbers(int nums[], int size, int test){
    for (int i = 0; i < size; i++)
    {
        if(nums[i] > test)
        {
            cout << nums[i] << endl;
        }
    }
}

// 5.
double getUserInput(int data[ROWS][COLS]){
    double total = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            do
            {
                cout << "How many pounds of food did monkey " << i + 1 << " eat on day " << j + 1 << ": ";
                cin >> data[i][j];  
            }
            while(data[i][j] < 0);
            

            total += data[i][j];
        }
        cout << endl;
    }

    return total;
}

double getAvg(double total){
    double average;
    
    average = total / 5.0;

    return average;
}

void getLowest(int nums[ROWS][COLS]){
    int lowest = 0, lowest2 = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (nums[i][j] < nums[lowest][lowest2])
            {
                lowest = i;
                lowest2 = j;
            }
        }
    }

    cout << "The least amount of food eaten that week was " << nums[lowest][lowest2] << " pounds" << endl;
}

void getHighest(int nums[ROWS][COLS]){
    int highest = 0, highest2 = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (nums[i][j] > nums[highest][highest2])
            {
                highest = i;
                highest2 = j;
            }
        }
    }
    cout << "The most amount of food eaten that week was " << nums[highest][highest2] <<  " pounds" << endl;
}

// 6.
void createFileAndStoreInfo(char report[ROW][COL]){
    ifstream inputFile;

    inputFile.open("RainOrShine.txt");

    if(inputFile)
    {
        cout << "\nFile is open. Reading from file will begin.\n";
    }
    else
    {
        cout << "File did not open.";
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            inputFile >> report[i][j];
        }
    }
    inputFile.close();
}

void juneWeatherCount(char reportJune[ROW][COL])
{
    int juneCountR = 0, juneCountC = 0, juneCountS = 0;

    for (int i = 0; i <= 0; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if(reportJune[i][j] == 'R')
            {
                juneCountR++;
            }
            else if(reportJune[i][j] == 'C')
            {
                juneCountC++;
            }
            else if (reportJune[i][j] == 'S')
            {
                juneCountS++;
            }
        }
    }

    cout << "\nJune had " << juneCountR << " rainy days" << endl;
    cout << "June had " << juneCountC << " cloudy days" << endl;
    cout << "June had " << juneCountS << " sunny days" << endl;
}
    
void julyWeatherCount(char julyReport[ROW][COL])
{
    int julyCountR = 0, julyCountC = 0, julyCountS = 0;

    for (int i = 1; i <= 1; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if(julyReport[i][j] == 'R')
            {
                julyCountR++;
            }
            else if(julyReport[i][j] == 'C')
            {
                julyCountC++;
            }
            else if (julyReport[i][j] == 'S')
            {
                julyCountS++;
            }
        }
    }

    cout << "\nJuly had " << julyCountR << " rainy days" << endl;
    cout << "July had " << julyCountC << " cloudy days" << endl;
    cout << "July had " << julyCountS << " sunny days" << endl;
}

void augWeatherCount(char augReport[ROW][COL])
{
    int augCountR = 0, augCountC = 0, augCountS = 0;

    for (int i = 2; i <= 2; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if(augReport[i][j] == 'R')
            {
                augCountR++;
            }
            else if(augReport[i][j] == 'C')
            {
                augCountC++;
            }
            else if (augReport[i][j] == 'S')
            {
                augCountS++;
            }
        }
    }

    cout << "\nAugust had " << augCountR << " rainy days" << endl;
    cout << "August had " << augCountC << " cloudy days" << endl;
    cout << "August had " << augCountS << " sunny days" << endl;
}

int findMostRainyMonth(char rainyMonth[ROW][COL]){
    int highest1 = 0;
    
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if(rainyMonth[0][j] > rainyMonth[i][j])
            {
                highest1 = 0;
            }
            else if(rainyMonth[1][j] > rainyMonth[i][j])
            {
                highest1 = 1;
            }
            else if(rainyMonth[1][j] > rainyMonth[i][j])
            {
                highest1 = 2;
            }
        }
    }
    return highest1;
}

// 7.
void storeInfo(int nums[], int size){
    ifstream inputFile;

    inputFile.open("numbers.txt");

    if(inputFile)
    {
        cout << "\nFile is open. Reading from file will begin.\n";
    }
    else
    {
        cout << "File did not open.";
    }
    for (int i = 0; i < size; i++)
    {
        inputFile >> nums[i];
    }

    inputFile.close();
}

double getArrayTotal(int list[], int size){
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += list[i];
    }

    return total;
}

int getArrayHighest(int array[], int size){
    int highest = 0;

    for(int i = 0; i < size; i++)
    {
        if(array[i] > array[highest])
        {
            highest = i;
        }
    }
    return highest;
}

int getArrayLowest(int array[], int size){
    int lowest = 0;

    for(int i = 0; i < size; i++)
    {
        if(array[i] < array[lowest])
        {
            lowest = i;
        }
    }
    return lowest;
}

// 8.
void determineMagicSquare(int array[ROW_LO][COL_LO]){
    int value1 = 0, value2 = 0, value3 = 0, value4 = 0, value5 = 0, value6 = 0, value7, value8;

    for(int i = 0; i < ROW_LO; i++)
    {
        for(int j = 0; j < COL_LO; j++)
        {
            if (i == 0)
            {
                value1 += array[i][j];
            }
            else if (i == 1)
            {
                value2 += array[i][j];
            }
            else if (i == 2)
            {
                value3 += array[i][j];
            }
        }
    }
    for(int i = 0; i < COL_LO; i++)
    {
        for(int j = 0; j < ROW_LO; j++)
        {
            if (i == 0)
            {
                value4 += array[i][j];
            }
            else if (i == 1)
            {
                value5 += array[i][j];
            }
            else if (i == 2)
            {
                value6 += array[i][j];
            }
        }
    }

    if (array[0][0] + array[1][1] + array[2][2] == value1)
    {
        value7 = array[0][0] + array[1][1] + array[2][2];
    }
    if (array[0][2] + array[1][1] + array[2][0] == value1)
    {
        value8 = array[0][2] + array[1][1] + array[2][0];
    }

    if (value1 == value2 && value1 == value3 && value1 == value4 && value1 == value5 && value1 == value6 && value1 == value7 && value1 == value8)
    {
        cout << "This array is a Lo Shu Magic Square" << endl;
    }
    else 
    {
        cout << "This array is not a Lo Shu Magic Square" << endl;
    }
}

// 9.
void getHours(int ID[], int hour[], double pay[], int size){
    for (int i = 0; i < size; i++)
    {
        do
        {
            cout << "For employee " << ID[i] << " enter the number of hours worked and the pay rate: ";
            cin >> hour[i] >> pay[i];
        }
        while (hour[i] < 0 || pay[i] < 15.00);
        
    }
}

void calcWages(int hours[], double pay[], double wage[], int size){
    for (int i = 0; i < size; i++)
    {
        wage[i] = hours[i] * pay[i];
    }
}

void displayIDWages(int num[], double wages[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << "Employee #" << num[i] << " gross wage is $" << wages[i] << endl;
    }
}

// 10. 
void getStudentAns(char studentResponse[], int size){
    cout << "Select either a, b, c, or d for an answer choice.\n";

    for (int i = 0; i < size; i++)
    {
        do
        {
        cout << i + 1 << ". ";
        cin >> studentResponse[i];
        }
        while (studentResponse[i] != 'a' && studentResponse[i] != 'b' && studentResponse[i] != 'c' && studentResponse[i] != 'd');
    }
}
void getResults(char studentAnswer[], char correctAnswer[], int size){
    int counter = 0, count = 0;

    for(int i = 0; i < size; i++)
    {
        if(studentAnswer[i] != correctAnswer[i])
        {
            cout << i + 1 << " is incorrect." << endl;
            count++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if(studentAnswer[i] == correctAnswer[i]) 
        {
            counter++;
        }
    }
    cout << "You got " << count << " answers incorrect.\n";
    cout << "You got " << counter << " answers correct.\n";
}

// 11.
void storeStudentAnswers(char answer[], int size){
    ifstream inputFile;

    inputFile.open("StudentAnswers.txt");

    if(inputFile)
    {
        cout << "\nFile is open. Reading the students answers now.\n";
    }
    else
    {
        cout << "File did not open.";
    }
    for (int i = 0; i < size; i++)
    {
        inputFile >> answer[i];
    }

    inputFile.close();
}
void storeCorrectAnswers(char correct[], int size){
    ifstream inputFile;

    inputFile.open("CorrectAnswers.txt");

    if(inputFile)
    {
        cout << "\nFile is open. Reading the correct answers now.\n";
    }
    else
    {
        cout << "File did not open.";
    }
    for (int i = 0; i < size; i++)
    {
        inputFile >> correct[i];
    }

    inputFile.close();
}
void compareResults(char student[], char correct[], int size){
    int count = 0, counter = 0;

    for(int i = 0; i < size; i++)
    {
        if(student[i] != correct[i])
        {
            cout << i + 1 << ". " << student[i] << " is incorrect. The correct answer is " << correct[i] << endl; 
            count++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if(student[i] == correct[i]) 
        {
            counter++;
        }
    }
    cout << "You got " << count << " answers incorrect.\n";

    if ((counter / 20.00) * 100 >= 70)
    {
        cout << "You passed the exam by getting " << (counter / 20.00) * 100 << "% correct.";
    }
    else
    {
        cout << "You failed the exam by getting " << (counter / 20.00) * 100 << "% correct.";
    }
}

// 12.
void getStudentNames(string name[], int size){
    for(int i = 0; i < size; i++)
    {
        cout << "Enter student " << i + 1 << " name: ";
        cin >> name[i];
    }
}
void getTestScores(string names[], double scores[], int nameSize, int scoreSize){
    double total = 0;
    double average;

    for(int i = 0; i < nameSize; i++)
    {
        cout << "Enter " << names[i] << "'s test score for ";

        for(int i = 0; i < scoreSize; i++)
        {
            cout << "test " << i + 1 << ": ";
            cin >> scores[i]; 
        }

        total += scores[i];
        average = total / 4.0;

        scores[i] = average;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << scores[i] << endl;
    }
}

