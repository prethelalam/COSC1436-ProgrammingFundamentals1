#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

void number1(){
    int number1, number2;

    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter another number: ";
    cin >> number2;

    if (number1 > number2)
    {
        cout << number1 << " is greater than " << number2;
    }
    else if (number1 < number2)
    {
        cout << number1 << " is less than " << number2;
    }    
    else
    {
        cout << number1 << " and " << number2 << " are equal.\n";
    }
}

void number2(){ 
    int number;

    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    switch(number)
    {
        case 1: cout << "The roman numeral of " << number << " is I";
                break;

        case 2: cout << "The roman numeral of " << number << " is II";
                break;

        case 3: cout << "The roman numeral of " << number << " is III";
                break;

        case 4: cout << "The roman numeral of " << number << " is IV";
                break;

        case 5: cout << "The roman numeral of " << number << " is V";
                break;

        case 6: cout << "The roman numeral of " << number << " is VI";
                break;

        case 7: cout << "The roman numeral of " << number << " is VII";
                break;

        case 8: cout << "The roman numeral of " << number << " is VIII";
                break;

        case 9: cout << "The roman numeral of " << number << " is IX";
                break;

        case 10: cout << "The roman numeral of " << number << " is X";
                break;

        default: cout << "This is an invalid number";
    }
}

void number3(){
    int day, year, month, magicDay;


    cout << "Enter a month (in numeric form), day, and 2 digit year (follow a space after each entry)\n";
    cin >> month >> day >> year;

    magicDay = month * day;

    if (magicDay == year){
        cout << "This date is magic!\n";
    }
    else{
        cout << "This date is not magic\n";
    }
}

void number4(){
    int length1, length2, width1, width2, area1, area2;
    const int MIN_VALUE = 1;

    cout << "Enter a length and a width for a rectangle (called rectangle 1): ";
    cin >> length1 >> width1;
    cout << "\nEnter a length and width for another rectangle (called rectangle 2): ";
    cin >> length2 >> width2;

    area1 = length1 * width1;
    area2 = length2 * width2;

    if (area1 >= MIN_VALUE && area2 >> MIN_VALUE)
    {
        if (area1 > area2){
        cout << "The area of rectangle 1 is bigger than the area of rectangle 2";
        }
        else if (area1 < area2){
        cout << "The area of rectangle 2 is bigger than the area of rectangle 1";
        }
        else {
        cout << "Both rectangles area's are equal";
        }
    }
    else 
    {
        cout << "Your numbers are invalid";
    }
}

void number5(){
    double weight, height, bodyMassIndex;

    cout << "What is your current weight (in LBS)? ";
    cin >> weight;
    cout << "\nWhat is your current height (in inches)? ";
    cin >> height;

    bodyMassIndex = weight * (703/pow(height, 2));

    cout << setprecision(1) << fixed;

    if (bodyMassIndex < 18.5){
        cout << "You are underweight since your BMI is " << bodyMassIndex;
    }
    else if (bodyMassIndex > 18.5  && bodyMassIndex < 25){
        cout << "You are optimal since your BMI is " << bodyMassIndex;
    }
    else if (bodyMassIndex > 25 && bodyMassIndex < 67){
        cout << "You are overweight since your BMI is " << bodyMassIndex;
    }
    else if (bodyMassIndex <= 0 || bodyMassIndex >= 67){
        cout << "The numbers you entered are invalid";
    }
}

void number6(){
    double weight, mass;
    const double MIN_VALUE = 0; 

    cout << "Enter an objects mass in kilograms: ";
    cin >> mass;
    
    weight = mass * 9.8;

    cout << setprecision(2) << fixed;

    if (weight > MIN_VALUE)
    {
        if (weight > 1000){
            cout << "That object is too heavy since it is " << weight << " newtons";
        }
        else if (weight < 10){
            cout << "That object is too light since it is " << weight << " newtons";
        }
        else {
            cout << "That object is neither too heavy or too light since it is " << weight << " newtons";
        }
    }
    else 
    {
        cout << "Your weight is invalid";
    }
}

void number7(){
    double seconds;
    const int SECONDS_PER_MINUTE = 60, SECONDS_PER_HOUR = 3600, SECONDS_PER_DAY = 86400, MIN_VALUE = 0;

    cout << "Enter a number of seconds: ";
    cin >> seconds;

    cout << setprecision(2) << fixed;
    if (seconds > MIN_VALUE)
    {
        if (seconds >= SECONDS_PER_MINUTE && seconds < SECONDS_PER_HOUR)
        {
            cout << seconds << " seconds is " << seconds / SECONDS_PER_MINUTE << " minutes.\n";
        }
        else if (seconds >= SECONDS_PER_HOUR && seconds < SECONDS_PER_DAY)
        {
            cout << seconds << " seconds is " << seconds / SECONDS_PER_HOUR << " hours.\n";
        }
        else if (seconds >= SECONDS_PER_DAY)
        {
            cout << seconds << " seconds is " << seconds / SECONDS_PER_DAY << " days.\n";
        }
        else {
            cout << seconds << " seconds is less than 1 minute.\n";
        }
    }
    else 
    {
        cout << "Please enter a valid number and try again.";
    }
}

void number8(){
    string color1, color2;

    cout << "Enter a color to mix. either red blue or yellow. ";
    cin >> color1;
    cout << "\nEnter a 2nd color to mix with the first color. ";
    cin >> color2;

    if (color1 == "red" && color2 == "blue"){
        cout << "you get purple";
    }
    else if (color1 == "blue" && color2 == "yellow"){
        cout << "you get green";
    }
    else if (color1 == "red" && color2 == "yellow"){
        cout << "you get orange";
    }
    else if (color1 == color2){
        cout << "you get " << color1;
    } 
    else {
        cout << "can't mix these colors";
    }
}

void number9(){
    const double PENNY = 0.01, NICKLE = 0.05, DIME = 0.10, QUARTER = 0.25, DOLLAR = 1.00;
    int numPennies, numNickles, numDimes, numQuarters;
    double total;

    cout << "Let's play a change-counting game.\n\n";
    cout << "Enter the number of coins needed to make exactly one dollar.\n\n";

    cout << "Enter the number of pennies: ";
    cin >> numPennies;

    cout << "Enter the number of nickels: ";
    cin >> numNickles;

    cout << "Enter the number of dimes: ";
    cin >> numDimes;

    cout << "Enter the number of quarters: ";
    cin >> numQuarters;

    total = (numPennies * PENNY) + (numNickles * NICKLE) + (numDimes * DIME) + (numQuarters * QUARTER);

    if (total > DOLLAR)
        cout << "\nSorry, that's more than one dollar.\n";
    else if (total < DOLLAR)
        cout << "\nSorry, that's less than one dollar.\n";
    else 
        cout << "\nCongratulations! You win!\n";
}

void number10(){ 
    int month, year;
    int janDays, marDays, mayDays, julyDays, augDays, octDays, decDays; //months with 31 days
    int febDays = 28, aprilDays, juneDays, septDays, novDays; //months with 30 days
    janDays = marDays = mayDays = julyDays = augDays = octDays = decDays = 31;
    aprilDays = juneDays = septDays = novDays = 30;

    cout << "Please enter a month (1 - 12): ";
    cin >> month;
    cout << "\nEnter a year: ";
    cin >> year;

    switch(month){
        case 1: cout << "January has " << janDays << " days.\n";
                break;

        case 2: cout << "February has " << febDays << " days.\n";
                break;

        case 3: cout << "March has " << marDays << " days.\n";
                break;

        case 4: cout << "April has " << aprilDays << " days.\n";
                break;

        case 5: cout << "May has " << mayDays << " days.\n";
                break;

        case 6: cout << "June has " << juneDays << " days.\n";
                break;

        case 7: cout << "July has " << julyDays << " days.\n";
                break;

        case 8: cout << "August has " << augDays << " days.\n";
                break;

        case 9: cout << "September has " << septDays << " days.\n"; 
                break;

        case 10: cout << "October has " << octDays << " days.\n";
                break;

        case 11: cout << "November has " << novDays << " days.\n";
                break;

        case 12: cout << "December has " << decDays << " days.\n";
                break;

        default: cout << "Enter a valid number.\n";
    }

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            cout << year << " is a leap year.\n";
        }
        else
        {
            cout << year << " is not a leap year.\n";
        }
    }
    else if (year % 100 != 0)
    {
        if (year % 4 == 0)
        {
            cout << year << " is a leap year.\n";
        }
        else
        {
            cout << year << " is not a leap year.\n";
        }
    }
    else
    {
        cout << year << " is not a leap year.\n";
    }
}

void number11(){
    unsigned seed = time(0);
    srand(seed); 

    int numerator = rand() % 1000 - 1;
    int denominator = rand() % 1000 - 1;
    int guess;

    cout << setw(4) << numerator << endl;
    cout << "+" << denominator << endl;
    cout << "----\n";
    cin >> guess;

    int answer = numerator + denominator;

    if (guess == answer)
    {
        cout << "Congratulations, the answer is correct!\n";
    }
    else
    {
        cout << "The answer is incorrect, here is the correct answer " << answer << endl;
    }
}

void number12(){
    int units;
    const double DISCOUNT20 = 0.20, DISCOUNT30 = 0.30, DISCOUNT40 = 0.40, DISCOUNT50 = 0.50, price = 99;
    const double MIN_VALUE = 0;
    double totalCost;
    
    cout << "How many are you going to purchase today? ";
    cin >> units;
    cout << setprecision(2) << fixed;

    if (units > MIN_VALUE){
        if (units < 10)
        {
            cout << "Please purchase more units to get a discount.\n";
        }
        else if (units >= 10 && units <= 19)
        {
        totalCost = (price - (price * DISCOUNT20)) * units;

        cout << "Total cost is $" << totalCost << endl;
        }
        else if(units >= 20 && units <= 49)
        {
        totalCost = (price - (price * DISCOUNT30)) * units;

        cout << "Total cost is $" << totalCost << endl;
        }
        else if(units >= 50 && units <= 99)
        {
        totalCost = (price - (price * DISCOUNT40)) * units;

        cout << "Total cost is $" << totalCost << endl;
        }
        else if(units >= 100)
        {
        totalCost = (price - (price * DISCOUNT50)) * units;

        cout << "Total cost is $" << totalCost << endl;
        }
    }
    else
    {
        cout << "Enter a valid number of units.";
    }
}

void number13(){
    int books, points = 0;

    cout << "How many books have you purchased this month? ";
    cin >> books;

    if (books > -1)
    {
        if (books == 0){
            cout << "You have earned " << points << " points";
        }
        else if (books == 1){
            points += 5;
            cout << "You have earned " << points << " points";
        }
        else if (books == 2){
            points += 15;
            cout << "You have earned " << points << " points";
        }
        else if (books == 3){
            points += 30;
            cout << "You have earned " << points << " points";
        }
        else if (books >= 4){
            points += 60;
            cout << "You have earned " << points << " points";
        }
    }
    else
    {
        cout << "Enter a valid number of books purchased.\n";
    }
}

void number14(){
    double balance;
    const double MONTH_FEE = 10, BALANCE_FEE = 15;
    int checksWritten;

    cout << "What is your beginning balance? ";
    cin >> balance;
    cout << "\nHow many checks have you written? ";
    cin >> checksWritten;

    cout << setprecision(2) << fixed;

    if (balance >= 400)
    {
        if (checksWritten < 20){
            cout << "Your monthly express is $" <<  MONTH_FEE + (0.10 * checksWritten) << endl;
        }
        else if (checksWritten >= 20 && checksWritten <= 39){
            cout << "Your monthly express is $" <<  MONTH_FEE + (0.08 * checksWritten) << endl;
        }
        else if (checksWritten >= 40 && checksWritten <= 59){
            cout << "Your monthly express is $" <<  MONTH_FEE + (0.06 * checksWritten) << endl;
        }
        else if (checksWritten >= 60){
            cout << "Your monthly express is $" <<  MONTH_FEE + (0.04 * checksWritten) << endl;
        }
    }
    else if (balance >= 0 && balance < 400)
    {
        if (checksWritten < 20){
            cout << "Your monthly express is $" <<  MONTH_FEE + BALANCE_FEE + (0.10 * checksWritten) << endl;
        }
        else if (checksWritten >= 20 && checksWritten <= 39){
            cout << "Your monthly express is $" <<  MONTH_FEE + BALANCE_FEE + (0.08 * checksWritten) << endl;
        }
        else if (checksWritten >= 40 && checksWritten <= 59){
            cout << "Your monthly express is $" <<  MONTH_FEE + BALANCE_FEE + (0.06 * checksWritten) << endl;
        }
        else if (checksWritten >= 60){
            cout << "Your monthly express is $" <<  MONTH_FEE + BALANCE_FEE + (0.04 * checksWritten) << endl;
        }
    }
    else{
        cout << "URGENT MESSAGE: ACCOUNT IS OVERDRAWN!\n";
    }
}

void number15(){
    const double PRICE_2KG = 1.10, PRICE_2KG_6KG = 2.20, PRICE_6KG_10KG = 3.70, PRICE_10KG_20KG = 4.80; //price per 500 miles
    const int RATE_PER_MILES = 500;
    const int MIN_WEIGHT = 0, MAX_WEIGHT = 20, MIN_DISTANCE = 10, MAX_DISTANCE = 3000;
    int weight, distance;

    cout << "How much does your package weight in kg? ";
    cin >> weight;
    cout << "\nHow many miles does your package need to be shipped? ";
    cin >> distance;
    cout << setprecision(2) << fixed;

    if (weight > MIN_WEIGHT && weight <= MAX_WEIGHT && distance > MIN_DISTANCE && distance < MAX_DISTANCE)
    {
        if (weight <= 2)
        {
            cout << "The price of your shipment is $" << (PRICE_2KG / RATE_PER_MILES) * distance;
        }
        else if (weight > 2 && weight <= 6)
        {
            cout << "The price of your shipment is $" << (PRICE_2KG_6KG / RATE_PER_MILES) * distance;
        }
        else if (weight > 6 && weight <= 10)
        {
            cout << "The price of your shipment is $" << (PRICE_6KG_10KG / RATE_PER_MILES) * distance;
        }
        else if (weight > 10 && weight <= 20)
        {
            cout << "The price of your shipment is $" << (PRICE_10KG_20KG / RATE_PER_MILES) * distance;
        }
    }
    else if (weight < MIN_WEIGHT || weight > MAX_WEIGHT || distance < MIN_DISTANCE || distance > MAX_DISTANCE)
    {
        cout << "We will not ship this package.";
    }
}

void number16(){
    string name1, name2, name3;
    double time1, time2, time3;
    const double MIN_VALUE = 0;

    cout << "What is your name and how long did it take you to finish the race? ";
    cin >> name1 >> time1;
    cout << "\nWhat is your name and how long did it take you to finish the race? ";
    cin >> name2 >> time2;
    cout << "\nWhat is your name and how long did it take you to finish the race? ";
    cin >> name3 >> time3;

    if (time1 > MIN_VALUE && time2 > MIN_VALUE && time3 > MIN_VALUE)
    {
        if (time1 > time2 && time2 > time3)
        {
            cout << name1 << " is first.\n";
            cout << name2 << " is second.\n";
            cout << name3 << " is third.\n";
        }
        else if (time1 > time3 && time3 > time2){
            cout << name1 << " is first.\n";
            cout << name3 << " is second.\n";
            cout << name2 << " is third.\n";
        }
        else if (time2 > time1 && time1 > time3){
            cout << name2 << " is first.\n";
            cout << name1 << " is second.\n";
            cout << name3 << " is third.\n";
        }
        else if (time2 > time3 && time3 > time1){
            cout << name2 << " is first.\n";
            cout << name3 << " is second.\n";
            cout << name1 << " is third.\n";
        }
        else if (time3 > time1 && time1 > time2){
            cout << name3 << " is first.\n";
            cout << name1 << " is second.\n";
            cout << name2 << " is third.\n";
        }
        else if (time3 > time2 && time2 > time1){
            cout << name3 << " is first.\n";
            cout << name2 << " is second.\n";
            cout << name1 << " is third.\n";
        }
    }
    else
    {
        cout << "Enter a valid time.";
    }
}

void number17(){
    string name, date1, date2, date3;
    double vault1, vault2, vault3;
    const double MIN_HEIGHT = 2.0, MAX_HEIGHT = 5.0;

    cout << "What is your name? ";
    cin >> name;
    cout << "\nWhat are the three dates of your best vaults? ";
    cin >> date1 >> date2 >> date3;
    cout << "\nHow high in meters did you vault on those three dates? ";
    cin >> vault1 >> vault2 >> vault3;

    if (vault1 >= MIN_HEIGHT && vault1 <= MAX_HEIGHT && vault2 >= MIN_HEIGHT && vault2 <= MAX_HEIGHT && vault3 >= MIN_HEIGHT && vault3 <= MAX_HEIGHT)
    {
        if (vault1 > vault2 && vault2 > vault3)
        {
            cout << date1 << " is first at " << vault1 << " meters.\n";
            cout << date2 << " is second at " << vault2 << " meters.\n";
            cout << date3 << " is third at " << vault3 << " meters.\n";
        }
        else if (vault1 > vault3 && vault3 > vault2){
            cout << date1 << " is first at " << vault1 << " meters.\n";
            cout << date3 << " is second at " << vault3 << " meters.\n";
            cout << date2 << " is third at " << vault2 << " meters.\n";
        }
        else if (vault2 > vault1 && vault1 > vault3){
            cout << date2 << " is first at " << vault2 << " meters.\n";
            cout << date1 << " is second at " << vault1 << " meters.\n";
            cout << date3 << " is third at " << vault3 << " meters.\n";
        }
        else if (vault2 > vault3 && vault3 > vault1){
            cout << date2 << " is first at " << vault2 << " meters.\n";
            cout << date3 << " is second at " << vault3 << " meters.\n";
            cout << date1 << " is third at " << vault1 << " meters.\n";
        }
        else if (vault3 > vault1 && vault1 > vault2){
            cout << date3 << " is first at " << vault3 << " meters.\n";
            cout << date1 << " is second at " << vault1 << " meters.\n";
            cout << date2 << " is third at " << vault2 << " meters.\n";
        }
        else if (vault3 > vault2 && vault2 > vault1){
            cout << date3 << " is first at " << vault3 << " meters.\n";
            cout << date2 << " is second at " << vault2 << " meters.\n";
            cout << date1 << " is third at " << vault1 << " meters.\n";
        }
    }
    else
    {
        cout << "Enter a valid height.";
    }
}

void number18(){
    double calories, gramsOfFat, CaloriesPerFat = 9, caloriesFromFat; 

    cout << "How many calories and grams of fat are in the food: ";
    cin >> calories >> gramsOfFat;

    caloriesFromFat = ((gramsOfFat * CaloriesPerFat) / calories) * 100;

    cout << setprecision(2) << fixed;

    if (calories > 0 && gramsOfFat < calories && gramsOfFat > 0)
    {
        if (caloriesFromFat <= 30)
        {
            cout << "The food is low in fat.";
        }
        else
        {
            cout << "The food is high in fat.";
        }
    }
    else
    {
        cout << "Either calories or grams of fat were incorrectly entered.";
    }
}

void number19(){
    double wavelength;

    cout << "What is the wavelength of the electromagnetic wave in meters? (Enter the exponent amont of 1 x 10^-#) ";
    cin >> wavelength;

    if (wavelength <= 0 && wavelength > -2)
    {
        cout << "This is a radio wave.";
    }
    else if (wavelength <= -2 && wavelength > -3)
    {
        cout << "This is a microwave.";
    }
    else if (wavelength <= -3 && wavelength > -7)
    {
        cout << "This is a infrared.";
    }
    else if (wavelength <= -7 && wavelength > -11)
    {
        cout << "This is a x-ray.";
    }
    else if (wavelength <= -11)
    {
        cout << "This is a gamma ray.";
    }
}

void number20(){
    char medium;
    double feet;
    const double AIR = 1100, WATER = 4900, STEEL = 16400;

    cout << "What medium will be used to travel: air, water, or steel? (enter a for air, w for water, or s for steel) ";
    cin >> medium;
    cout << "\nHow far will you be traveling in feet? ";
    cin >> feet;
    cout << setprecision(4) << fixed;

    if (medium == 'a' || medium == 'w' || medium == 's')
    { 
        if (feet > 0){
            switch(medium)
            {
            case 'a': 
                if (feet > AIR){
                    cout << "It will take you " << 1 * (feet / AIR) << " feet per second.";
                }
                else {
                    cout << "It will take you " << 1 / (AIR / feet) << " feet per second.";
                } 
                    break;

            case 'w': 
                if (feet > WATER){
                    cout << "It will take you " << 1 * (feet / WATER) << " feet per second.";
                }
                else {
                    cout << "It will take you " << 1 / (WATER / feet) << " feet per second.";
                } 
                    break;

            case 's': 
                if (feet > STEEL){
                    cout << "It will take you " << 1 * (feet / STEEL) << " feet per second.";
                }
                else {
                    cout << "It will take you " << 1 / (STEEL / feet) << " feet per second.";
                } 
                    break;
            }
        }
        else
        {
            cout << "Please enter a valid distance.";
        }
    }
    else 
    {
        cout << "Please enter a valid medium.";
    }
}

void number21(){
    char medium;
    double seconds;
    const double CARBON_DIOXIDE = 258.0, AIR = 331.5, HELIUM = 972.0, HYDROGEN = 1270.0;

    cout << "What medium will be used to travel: carbon dioxide, air, helium, hydrogen? (enter c for carbon dioxide, a for air, h for helium, d for hydrogen) ";
    cin >> medium;
    cout << "\nHow many seconds did it take to travel in this medium from its source to the location it was detected at? ";
    cin >> seconds;
    cout << setprecision(4) << fixed;

    if (medium == 'c' || medium == 'a' || medium == 'h' || medium == 'd') 
    {
        if (seconds > 0 && seconds < 30)
        {
            switch(medium)
            {
            case 'c': cout << "The source was " << CARBON_DIOXIDE * seconds << " meters away from the detection location";
                        break;

            case 'a': cout << "The source was " << AIR * seconds << " meters away from the detection location";
                        break;

            case 'h': cout << "The source was " << HELIUM * seconds << " meters away from the detection location";
                        break;

            case 'd': cout << "The source was " << HYDROGEN * seconds << " meters away from the detection location";
                        break;
            }
        }
        else{
            cout << "Please enter a valid time.";
        }
    }
    else 
    {
        cout << "Please enter a valid medium.";
    }
}

void number22(){
    int temperature;
    const int OXYGEN_FREEZE = -362, OXYGEN_BOIL = -306, ALC_FREEZE = -173, MERCURY_FREEZE = -38, WATER_FREEZE = 32, ALC_BOIL = 172, WATER_BOIL = 212, MERCURY_BOIL = 676;

    cout << "Enter a temperature: ";
    cin >> temperature;

    if (temperature <= OXYGEN_FREEZE)
    {
        cout << "Oxygen will freeze\n";
        cout << "Mercury will freeze\n";
        cout << "Ethyl alcohol will freeze\n";
        cout << "Water will freeze\n";
    }
    else if (temperature > OXYGEN_FREEZE && temperature < OXYGEN_BOIL)
    {
        cout << "Mercury will freeze\n";
        cout << "Ethyl alcohol will freeze\n";
        cout << "Water will freeze\n";
    }
    else if (temperature >= OXYGEN_BOIL && temperature <= ALC_FREEZE)
    {
        cout << "Ethyl alcohol will freeze\n";
        cout << "Mercury will freeze\n";
        cout << "Water will freeze\n";
        cout << "Oxygen will boil\n";
    }
    else if (temperature > ALC_FREEZE && temperature <= MERCURY_FREEZE)
    {
        cout << "Mercury will freeze\n";
        cout << "Water will freeze\n";
        cout << "Oxygen will boil\n";
    }
    else if (temperature > MERCURY_FREEZE && temperature <= WATER_FREEZE)
    {
        cout << "Water will freeze\n";
        cout << "Oxygen will boil\n";
    }
    else if (temperature > WATER_FREEZE && temperature < ALC_BOIL)
    {
        cout << "Oxygen will boil\n";
    }
    else if (temperature >= ALC_BOIL && temperature < WATER_BOIL)
    {
        cout << "Ethyl alcohol will boil\n";
        cout << "Oxygen will boil\n";
    }
    else if (temperature >= WATER_BOIL && temperature < MERCURY_BOIL)
    {
        cout << "Ethyl alcohol will boil\n";
        cout << "Water will boil\n";
        cout << "Oxygen will boil\n";
    }
    else if (temperature >= MERCURY_BOIL)
    {
        cout << "Ethyl alcohol will boil\n";
        cout << "Water will boil\n";
        cout << "Oxygen will boil\n";
        cout << "Mercury will boil\n";
    }
    
}

void number23(){
    int choice, radius, width, length, height, base;
    double area;
    const double PI = 3.14159;

    cout << "Geometry Calculator\n";
    cout << "\t 1. Calculate the area of a circle\n";
    cout << "\t 2. Calculate the area of a rectangle\n";
    cout << "\t 3. Calculate the area of a triangle\n";
    cout << "\t 4. Quit\n";
    cout << "\t Enter your choice (1-4): ";
    cin >> choice;

    if (choice >= 1 && choice <= 4)
    {
        switch(choice)
        {
        case 1: 
                cout << "What is the radius of the circle? ";
                cin >> radius;

                    if (radius > 0)
                    {
                        area = PI*(pow(radius, 2));

                        cout << area;
                    }
                    else
                    {
                        cout << "Enter a valid radius";
                    }

                break;

        case 2: 
                cout << "What is the length and width of the rectangle? ";
                cin >> length >> width;

                    if (length > 0 && length > 0)
                    {
                        area = length * width;

                        cout << area;
                    }
                    else
                    {
                        cout << "Enter a valid length and width";
                    }

                break;

        case 3: 
                cout << "What is the length of the triangle's base and height? ";
                cin >> base >> height;

                    if (base > 0 && height > 0)
                    {
                        area = base * height * 0.5;

                        cout << area;
                    }
                    else
                    {
                        cout << "Enter a valid base and height";
                    }

                break;

        case 4: 
                break;
        }
    }
    else
    {
        cout << "Enter a valid selection.";
    }
}

void number24(){
    float startTime, minutes, cost;
    const float MAX_TIME = 23.59, RATE_PER_MINUTE_0_TO_5 = 0.05, RATE_PER_MINUTE_7_TO_9 = 0.45, RATE_PER_MINUTE_19_TO_23 = 0.20;
    

    cout << "What is the start time of the call? Enter as HH.MM ";
    cin >> startTime;
    cout << "\nHow many minutes long was the call? Enter as MM.SS ";
    cin >> minutes;
    cout << setprecision(2) << fixed;

    if (startTime <= MAX_TIME && startTime >= 0)
    {
        if (startTime >= 0.00 && startTime <= 6.59)
        {
            if (minutes < 1.00)
            {
                cost = (RATE_PER_MINUTE_0_TO_5 / 60) * (minutes * 100);

                cout << "The cost of this call is $" << cost << endl;
            }
            else if (minutes >= 1.00)
            {
                cost = (RATE_PER_MINUTE_0_TO_5 / 60) * (60 * minutes);

                cout << "The cost of this call is $" << cost << endl;
            }
        }
        else if (startTime >= 7.00 && startTime <= 19.00)
        {
            if (minutes < 1.00)
            {
                cost = (RATE_PER_MINUTE_7_TO_9 / 60) * (minutes * 100);

                cout << "The cost of this call is $" << cost << endl;
            }
            else if (minutes >= 1.00)
            {
                cost = (RATE_PER_MINUTE_7_TO_9 / 60) * (60 * minutes);

                cout << "The cost of this call is $" << cost << endl;
            }
        }
        else if (startTime >= 19.01 && startTime <= 23.59)
        {
            if (minutes < 1.00)
            {
                cost = (RATE_PER_MINUTE_19_TO_23 / 60) * (minutes * 100);

                cout << "The cost of this call is $" << cost << endl;
            }
            else if (minutes >= 1.00)
            {
                cost = (RATE_PER_MINUTE_19_TO_23 / 60) * (60 * minutes);

                cout << "The cost of this call is $" << cost << endl;
            }
        }
    }
    else
    {
        cout << "Input a valid start time or number of minutes.";
    }
}

void number25(){
    char package;
    double gigabytes, bill;
    const double A_COST = 39.99, B_COST = 59.99, C_COST = 69.99;

    cout << "What package did you purchase (a, b, c) and how many gigabytes were used? ";
    cin >> package >> gigabytes;
    cout << setprecision(2) << fixed;

    if (package == 'a' || package == 'b' || package == 'c')
    {
        if (package == 'a')
        {
            if (gigabytes <= 4.0)
            {
                cout << "Your monthly bill is $" << A_COST << endl;
            }
            else if (gigabytes > 4.0)
            {
                cout << "Your monthly bill is $" << A_COST + ((gigabytes - 4) * 10) << endl;
            }
        }
        else if (package == 'b')
        {
            if (gigabytes <= 8.0)
            {
                cout << "Your monthly bill is $" << B_COST << endl;
            }
            else if (gigabytes > 8.0)
            {
                cout << "Your monthly bill is $" << B_COST + ((gigabytes - 8) * 5) << endl;
            }
        }
        else if (package == 'c')
        {
            cout << "Your monthly bill is $" << C_COST << endl;
        }
    }
    else
    {
        cout << "Please enter a valid package.";
    }
}

void number26(){
    char package;
    double gigabytes, bill;
    const double A_COST = 39.99, B_COST = 59.99, C_COST = 69.99;

    cout << "What package did you purchase (a, b, c) and how many gigabytes were used? ";
    cin >> package >> gigabytes;
    cout << setprecision(2) << fixed;

    if (package == 'a' || package == 'b' || package == 'c')
    {
        if (package == 'a')
        {
            if (gigabytes <= 4.0)
            {
                cout << "Your monthly bill is $" << A_COST << endl;
                cout << "By purchasing package a instead of package b, you saved $" << B_COST - A_COST << endl;
            }
            else if (gigabytes > 4.0 && gigabytes < 6.0)
            {
                cout << "Your monthly bill is $" << A_COST + ((gigabytes - 4) * 10) << endl;
                cout << "By purchasing package a instead of package b, you saved $" << B_COST - (A_COST + ((gigabytes - 4) * 10)) << endl;
            }
            else 
            {
                cout << "Your monthly bill is $" << A_COST + ((gigabytes - 4) * 10) << endl;
            }
        }
        else if (package == 'b')
        {
            if (gigabytes <= 8.0)
            {
                cout << "Your monthly bill is $" << B_COST << endl;
                cout << "By purchasing package b instead of package c, you saved $" << C_COST - B_COST << endl;
            }
            else if (gigabytes > 8.0 && gigabytes < 10.0)
            {
                cout << "Your monthly bill is $" << B_COST + ((gigabytes - 8) * 5) << endl;
                cout << "By purchasing package b instead of package c, you saved $" << C_COST - (B_COST + ((gigabytes - 8) * 5)) << endl;
            }
            else
            {
                cout << "Your monthly bill is $" << B_COST + ((gigabytes - 8) * 5) << endl;
            }
        }
        else if (package == 'c')
        {
            cout << "Your monthly bill is $" << C_COST << endl;
        }
    }
    else
    {
        cout << "Please enter a valid package.";
    }
}

void number27(){
    string answer;

    cout << "I notice you're having wifi connection issues.\n";
    cout << "Try rebooting the computer and try to connect. ";
    cout << "Did that fix the problem? ";
    cin >> answer;

    if (answer == "no")
    {
        cout << "\nReboot the router and try to connect. ";
        cout << "Did that fix the problem? ";
        cin >> answer;

            if (answer == "no")
            {
                cout << "\nMake sure the cables between the router and modem are plugged in firmly. ";
                cout << "Did that fix the problem? ";
                cin >> answer;

                    if (answer == "no")
                    {
                        cout << "\nMove the router to a new location. ";
                        cout << "Did that fix the problem? ";
                        cin >> answer;

                            if (answer == "no")
                            {
                                cout << "\nGet a new router.";
                            }
                    }
            }
    }
}

void number28(){
    string vegetarianAnswer, veganAnswer, glutenAnswer;

    cout << "Is anyone in your party a vegetarian? ";
    cin >> vegetarianAnswer;
    cout << "\nIs anyone in your party a vegan? ";
    cin >> veganAnswer;
    cout << "\nIs anyone in your party gluten-free? ";
    cin >> glutenAnswer;

    if (vegetarianAnswer == "no" && veganAnswer == "no" && glutenAnswer == "no")
    {
        cout << "Here are your restaurant choices:\n";
        cout << "\tJoe's Gourmet Burgers\n";
    }
    else if (vegetarianAnswer == "yes" && veganAnswer == "no" && glutenAnswer == "no")
    {
        cout << "Here are your restaurant choices:\n";
        cout << "\tMain Street Pizza Company\n";
        cout << "\tCorner Cafe\n";
        cout << "\tMama's Fine Italian\n";
        cout << "\tThe Chef's Kitchen\n";
    }
    else if (vegetarianAnswer == "no" && veganAnswer == "yes" && glutenAnswer == "no" 
            || vegetarianAnswer == "yes" && veganAnswer == "yes" && glutenAnswer == "yes"
            || vegetarianAnswer == "no" && veganAnswer == "yes" && glutenAnswer == "yes"
            || vegetarianAnswer == "yes" && veganAnswer == "yes" && glutenAnswer == "no")
    {
        cout << "Here are your restaurant choices:\n";
        cout << "\tCorner Cafe\n";
        cout << "\tThe Chef's Kitchen\n";
    }
    else if (vegetarianAnswer == "no" && veganAnswer == "no" && glutenAnswer == "yes"
            || vegetarianAnswer == "yes" && veganAnswer == "no" && glutenAnswer == "yes")
    {
        cout << "Here are your restaurant choices:\n";
        cout << "\tMain Street Pizza Company\n";
        cout << "\tCorner Cafe\n";
        cout << "\tThe Chef's Kitchen\n";
    }
}

int main(){
    // cout << "1. \n";
    // number1();
    // cout << "\n"; 

    // cout << "2. \n";
    // number2();
    // cout << "\n"; 

    // cout << "3. \n";
    // number3();
    // cout << "\n"; 

    // cout << "4. \n";
    // number4();
    // cout << "\n"; 

    // cout << "5. \n";
    // number5();
    // cout << "\n"; 

    // cout << "6. \n";
    // number6();
    // cout << "\n"; 

    // cout << "7. \n";
    // number7();
    // cout << "\n"; 

    // cout << "8. \n";
    // number8();
    // cout << "\n"; 

    // cout << "9. \n";
    // number9();
    // cout << "\n";

    cout << "10. \n";
    number10();
    cout << "\n";                

    // cout << "11. \n";
    // number11();
    // cout << "\n";

    // cout << "12. \n";
    // number12();
    // cout << "\n";

    // cout << "13. \n";
    // number13();
    // cout << "\n";

    // cout << "14. \n";
    // number14();
    // cout << "\n";

    // cout << "15. \n";
    // number15();
    // cout << "\n";

    // cout << "16. \n";
    // number16();
    // cout << "\n";

    // cout << "17. \n";
    // number17();
    // cout << "\n";

    // cout << "18. \n";
    // number18();
    // cout << "\n";

    // cout << "19. \n";
    // number19();
    // cout << "\n";

    // cout << "20. \n";
    // number20();
    // cout << "\n";

    // cout << "21. \n";
    // number21();
    // cout << "\n";

    // cout << "22. \n";
    // number22();             
    // cout << "\n";

    // cout << "23. \n";
    // number23();
    // cout << "\n";

    // cout << "24. \n";
    // number24();
    // cout << "\n";

    // cout << "25. \n";
    // number25();
    // cout << "\n";

    // cout << "26. \n";
    // number26();
    // cout << "\n";

    // cout << "27. \n";
    // number27();
    // cout << "\n";

    // cout << "28. \n";
    // number28();
    // cout << "\n";

    return 0;
}