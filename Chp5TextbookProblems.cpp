#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

void number1(){
    int value, total = 0;

    do
    {
        cout << "Enter a positive integer value: ";
        cin >> value;
    }
    while (value <= 0); 

    for (int i = 1; i <= value; i++)
    {
        cout << total << "+" << i << "=";
        total += i;

        cout << total << endl;
    }
}

void number2(){
// come back to
}

void number3(){
    const double OCEAN_RISE = 1.5, MAX_YEARS = 25;
    double total = 0;

    cout << "years\t\t" << "ocean level rise (in mL)\n";
    cout << "----------------------------------------\n";

    for (int i = 1; i <= MAX_YEARS; i++)
    {
        total = OCEAN_RISE * i;

        cout << i << "\t\t" << total << endl;
    }
}

void number4(){
    const double CALORIES_BURNED = 3.6, MAX_TIME = 30;
    double total = 0;

    cout << "minutes\t\t" << "calories burned\n";
    cout << "----------------------------------\n";

    for (int i = 0; i <= MAX_TIME; i += 5)
    {
        total = CALORIES_BURNED * i;

        cout << i << "\t\t" << total << endl;
    }
}

void number5(){  
    double MEMBERSHIP_FEE = 2500, INCREASE = 0.04, YEARS = 6;

    cout << "years\t\t" << "projected rates\n";
    cout << "----------------------------------\n";
    cout << setprecision(2) << fixed;

    for (int i = 0; i <= YEARS; i++)
    {
        MEMBERSHIP_FEE = ((MEMBERSHIP_FEE * (INCREASE)) + MEMBERSHIP_FEE); 

        cout << i << "\t\t$" << MEMBERSHIP_FEE << endl;
    }
}

void number6(){
    double speed, hours;

    do {
        cout << "How fast was your vehicle going (in MPH)? ";
        cin >> speed;
        cout << "\nHow many hours did you travel?";
        cin >> hours; 
    }
    while (speed <= 0 || hours < 1);

    cout << "Hours\t\t" << "Distance Travelled (in miles)\n";
    cout << "---------------------------------------------\n";
    
    for (int i = 0; i <= hours; i++)
    {
        double distance;

        distance = (speed * i);

        cout << i << "\t\t" << distance << endl;
    }
}

void number7(){
    double salary = 0.01;
    int days;
    int total;

    cout << "How many days are you working? ";
    cin >> days;

    while (days < 1)
    {
        cout << "Please enter a valid number of days: ";
        cin >> days;
    }

    cout << "Days\t\t" << "Salaries\n";
    cout << "---------------------------------------------\n";
    cout << setprecision(2) << fixed;

    for (int i = 1; i <= days; i++)
    {
        salary *= 2; 
        total = salary * i * 2;

        cout << i << "\t\t$" << salary << endl;

        
    }

    //need to put total below 
    total = (salary * 2) * days; 
    cout << "Total\t\t$" << total << endl;
    
}

void number8(){
    unsigned seed = time(0);
    srand(seed); 
    double numerator = rand() % 1000 - 1;
    double denominator = rand() % 1000 - 1;
    double guess; 
    int option;

    while (option != 5)
    {
        cout << "Which mathematical operation would you like? Select from the options below.\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Divison\n";
        cout << "5. Quit\n";
        cin >> option;
    
    
        while (option <= 0 || option > 5)
        {
            cout << "\nError, enter a valid selection.\n";
            cout << "Which mathematical operation would you like? Select from the options below.\n";
            cout << "1. Addition\n";
            cout << "2. Subtraction\n";
            cout << "3. Multiplication\n";
            cout << "4. Divison\n";
            cout << "5. Quit\n";
            cin  >> option;
        }
            switch (option)
            {
                case 1:
                {
                    cout << setw(4) << numerator << endl;
                    cout << "+" << denominator << endl;
                    cout << "----\n";
                    cin >> guess;

                    double sum = numerator + denominator;

                    if (guess == sum)
                    {
                        cout << "Congratulations, the answer is correct!\n";
                    }
                    else
                    {
                        cout << "The answer is incorrect, here is the correct answer " << sum << endl;
                    }
                    break;
                }
                    
                case 2:
                {
                    cout << setw(4) << numerator << endl;
                    cout << "-" << denominator << endl;
                    cout << "----\n";
                    cin >> guess;

                    int difference = numerator - denominator;

                    if (guess == difference)
                    {
                        cout << "Congratulations, the answer is correct!\n";
                    }
                    else
                    {
                        cout << "The answer is incorrect, here is the correct answer " << difference << endl;
                    }
                        break;
                }
                    
                case 3:
                {
                    cout << setw(4) << numerator << endl;
                    cout << "*" << denominator << endl;
                    cout << "----\n";
                    cin >> guess;

                    double product = numerator * denominator;

                    if (guess == product)
                    {
                        cout << "Congratulations, the answer is correct!\n";
                    }
                    else
                    {
                        cout << "The answer is incorrect, here is the correct answer " << product << endl;
                    }
                        break;
                }
                    
                case 4:
                {
                    cout << setw(4) << numerator;
                    cout << " / " << denominator << endl;
                    cout << "-----------\n";
                    cin >> guess;

                    double quotient = numerator / denominator;

                    if (guess == quotient)
                    {
                        cout << "Congratulations, the answer is correct!\n";
                    }
                    else
                    {
                        cout << "The answer is incorrect, here is the correct answer " << quotient << endl;
                    }
                        break;
                }

                default: 
                    break;
            }
    }   
}

void number9(){
    double floors, rooms, occupied;

    do{
    cout << "How many floors does the hotel have? ";
    cin >> floors;
    }
    while (floors < 1);

    for (int i = 1; i <= floors; i++)
    {
        if (i == 13) //this is how you skip the 13 iteration
        {
            continue;
        }

        cout << "How many rooms are in floor " << i 
            << " and how many of them are occupied? (seperate by a space) " << endl;
        cin >> rooms >> occupied;

        while (rooms < 10)
        {
            cout << "Enter a valid amount of rooms: ";
            cin >> rooms;
        }
        
    }

    rooms *= floors;
    occupied *= floors;

    cout << setprecision(0) << fixed;
    cout << "\nThe hotel has " << rooms << " rooms." << endl;
    cout << "The hotel has " << occupied << " occupied rooms." << endl;
    cout << "The hotel has " << (occupied / rooms) * 100 << "% of rooms being occupied." << endl;
    cout << "The hotel has " << rooms - occupied << " unoccupied rooms." << endl;
}

void number10(){
    int years, months = 12;
    double rainfall, total = 0.0;

    cout << "How many years of rainfall are you wanting to average: ";
    cin >> years;

    while (years <= 0)
    {
        cout << "Please enter a vaid number of years. ";
        cin >> years;
    }

    for (int i = 1; i <= years; i++)
    {
        for (int j = 1; j <= months; j++)
        {
            cout << "How many inches of rainfall was there for month " << j << endl;
            cin >> rainfall;

                while (rainfall < 0)
                {
                    cout << "Enter a valid number for rainfall in inches for month " << j << endl;
                    cin >> rainfall;
                }

            total += rainfall;
        }
    }

    cout << years * months << " months rainfall was collected for.\n";
    cout << "The total inches of rainfall was " << total << endl;
    cout << "The average rainfall per month for the entire period was " 
         << (total / (years * months)) << " inches" << endl;
}

void number11(){
    int startingNumber, days;
    double increase;

    cout << "What is the starting number of organisms? ";
    cin >> startingNumber;

    while (startingNumber < 2)
    {
        cout << "Enter a valid starting number: ";
        cin >> startingNumber;
    }

    cout << "\nWhat is the organisms daily population increase as a percentage? ";
    cin >> increase;

    while (increase <= 0)
    {
        cout << "Enter a valid increase percentage: ";
        cin >> increase;
    }

    cout << "\nHow many days will the organism multiply? ";
    cin >> days;

    while (days < 1)
    {
        cout << "Enter a valid number of days: ";
        cin >> days;
    }
    
    cout << "\nDays\t\t" << "Population\n";
    cout << "----------------------------------\n";

double total = 0.0;

    for (int i = 0; i <= days; i++)
    {
        //startingNumber += startingNumber; //starting number = starting number + starting number

        total += startingNumber;

        cout << i << "\t\t" << (total * (increase / 100)) + total << endl;

        
        //total += startingNumber;
    }
}

void number12(){
    double fahrenheit, celsius;

    cout << "Temperature" << "\t\tCelsius\t\t\t" << "Fahrenheit\n";
    cout << "----------------------------------------------------------\n";

    for (int i = 0; i <= 20; i++)
    {
        fahrenheit = (9.0/5.0 * i) + 32;
        celsius = (i - 32) * (5.0/9.0); 

        cout << setprecision(2) << fixed;
        cout << i << "\t\t\t" << celsius << "\t\t\t" << fahrenheit << endl;
        cout << endl;
    }
}

void number13(){
    int number, greatest, least;

    cout << "Enter an integer: ";
    cin >> number;

    greatest = number; //need an initial number to begin the comparison
    least = number;

    cout << "\nEnter a series of numbers. Enter -99 when you're finished entering your series of numbers:\n";

    while (number != -99)
    {
        cin >> number;

        if (number != -99)
        {
            if (number > greatest)
            {
                greatest = number;
            }
            if (number < least)
            {
                least = number;
            }
        }
    }

    cout << "The greatest number is " << greatest << endl;
    cout << "The least number is " << least << endl;
}

void number14(){
    int students;
    string names, first, last;

    cout << "How many students are in the class? ";
    cin >> students;

    while (students < 1 || students > 25)
    {
        cout << "How many students are in the class? ";
        cin >> students;
    }

    cout << "Enter the name of a student: ";
    cin >> names;

    first = last = names;

    for (int i = 1; i < students; i++)
    {
        cout << "enter the name of a student: ";
        cin >> names;

        if (names < first)
        {
            first = names;
        }
        if (names > last)
        {
            last = names;
        }
    }

    cout << "The first student in line is " << first << endl;
    cout << "the last student in line is " << last << endl;
}

void number15(){ //finish
    int number;
    double grossPay, stateTax, federalTax, FICA_Withholdings;

    while(true)
    {
        cout << "Enter your employee number: ";
        cin >> number;

        if (number == 0)
        {
            break;
        }

        cout << "\nEnter your gross pay: ";
        cin >> grossPay;
        cout << "\nEnter your state tax: ";
        cin >> stateTax;
        cout << "\nEnter your federal tax: ";
        cin >> federalTax;
        cout << "\nEnter your FICA withholdings: ";
        cin >> FICA_Withholdings;
    }

    cout << "Gross pay: $" << grossPay << endl;
    cout << "Gross pay: $" << grossPay << endl;
}




int main(){
    // cout << "1. \n";
    // number1();
    // cout << endl;

    // cout << "2. \n";
    // number2();           //come back to this one
    // cout << endl;

    // cout << "3. \n";
    // number3();
    // cout << endl;

    // cout << "4. \n";
    // number4();
    // cout << endl;

    // cout << "5. \n";
    // number5();
    // cout << endl;

    // cout << "6. \n";
    // number6();
    // cout << endl;

    // cout << "7. \n";
    // number7();               //come back to this one
    // cout << endl;

    // cout << "8. \n";
    // number8();
    // cout << endl;
    
    // cout << "9. \n";
    // number9();
    // cout << endl;
    
    // cout << "10. \n";
    // number10();
    // cout << endl;

    // cout << "11. \n";
    // number11();                         //come back 
    // cout << endl;

    // cout << "12. \n";
    // number12();
    // cout << endl;

    // cout << "13. \n";
    // number13();
    // cout << endl;

    // cout << "14. \n";
    // number14();
    // cout << endl;

    cout << "15. \n";
    number15();
    cout << endl;

    return 0;
}