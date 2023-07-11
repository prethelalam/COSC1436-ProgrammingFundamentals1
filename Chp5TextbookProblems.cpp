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

        cout << "How many rooms are in floor " << i << " and how many of them are occupied? (seperate by a space) " << endl;
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
    
    cout << "9. \n";
    number9();
    cout << endl;
    
    // cout << "10. \n";
    // number10();
    // cout << endl;


    return 0;
}