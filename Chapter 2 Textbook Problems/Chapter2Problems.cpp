/*  Chapter 2 Programming Challenges
    Written by Prethel Alam
    06/15/2023
*/

#include <iostream>
using namespace std;

void Number1(){
    int number1 = 50, number2 = 100, total;

    total = number1 + number2;

    cout << total << endl;
}

void Number2(){
    double percent = 0.58, profit, sales = 8600000;

    profit = sales * percent;

    cout << profit << endl;
}

void Number3(){
    double purchase = 95, stateTax = 0.04, countyTax = 0.02, totalSalesTax, countyTaxTotal, stateTaxTotal;

    stateTaxTotal = purchase * stateTax;
    countyTaxTotal = purchase * countyTax;
    totalSalesTax = stateTaxTotal + countyTaxTotal;

    cout << totalSalesTax << endl;
}

void Number4(){
    double tax = 0.0675, mealPrice = 88.67, tip = .20, subtotal, totalBill;

    subtotal = (mealPrice * tax) + mealPrice;
    totalBill = (subtotal * tip) + subtotal;

    cout << mealPrice << endl;
    cout << mealPrice * tax << endl;
    cout << subtotal * tip << endl;
    cout << totalBill << endl;
}

void Number5(){
    double sum = 28 + 32 + 37 + 24 + 33, average;

    average = sum / 5;

    cout << average << endl; 
}

void Number6(){
    double payAmount = 2200.0, payPeriods = 26, annualPay;

    annualPay = payAmount * payPeriods;

    cout << annualPay << endl;
}

void Number7(){
    double oceanRise = 1.5, year5Rise, year7Rise, year10Rise;

    year5Rise = oceanRise * 5;
    year7Rise = oceanRise * 7;
    year10Rise = oceanRise * 10;

    cout << year5Rise << endl;
    cout << year7Rise << endl;
    cout << year10Rise << endl;
}

void Number8(){
    double item1Price = 15.95, item2Price = 24.95, item3Price = 6.95, item4Price = 12.95, item5Price = 3.95, subtotal, total;

    subtotal = item1Price + item2Price + item3Price + item4Price + item5Price;
    total = (subtotal * 0.07) + subtotal;

    cout << total << endl;
}

void Number9(){
    cout << sizeof(char) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
}

void Number10(){
    int MPG = 375 / 15;

    cout << MPG << endl;
}

void Number11(){
    double gallons = 20, townMPG = 23.5, highwayMPG = 28.9, distanceTown, distanceHighway;

    distanceTown = gallons * townMPG;
    distanceHighway = gallons * highwayMPG;

    cout << distanceTown << endl;
    cout << distanceHighway << endl;
}

void Number12(){
    double acreOfLand = 43650, squareFeet = 391876, acrePerSqaureFeet;

    acrePerSqaureFeet = squareFeet / acreOfLand;

    cout << acrePerSqaureFeet << endl;
}

void Number13(){
    double cost = 14.96, sellingPrice;

    sellingPrice = (cost * 0.35) + cost;

    cout << sellingPrice << endl;
}

void Number14(){
    cout << "Prethel Alam\n" << "1234 Canyon Dr.\n" << "1234567891\n" << "Computer Science\n";
}

void Number15(){
    cout <<"     *     " << endl;
    cout <<"    ***    " << endl;
    cout <<"   *****   " << endl;
    cout <<"  *******  " << endl;
}

void Number16(){
    cout <<"     *     " << endl;
    cout <<"    ***    " << endl;
    cout <<"   *****   " << endl;
    cout <<"  *******  " << endl;
    cout <<"   *****   " << endl;
    cout <<"    ***    " << endl;
    cout <<"     *     " << endl;
}

void Number17(){
    double share = 750, stockPrice = 35.00, commission = 0.02;

    cout << stockPrice << endl;
    cout << stockPrice * commission << endl;
    cout << (stockPrice * commission) + stockPrice << endl;
}

void Number18(){
    double oneOrMore = 0.15, citrus = 0.58;

    cout << 16500 * oneOrMore << endl;
    cout << (16500 * oneOrMore) * citrus << endl;
}

void Number19(){
    double newYorkTemp = 85, denverTemp = 88, phoenixTemp = 106;

    cout << (newYorkTemp * 0.02) + newYorkTemp << endl;
    cout << (denverTemp * 0.02) + denverTemp << endl;
    cout << (phoenixTemp * 0.02) + phoenixTemp << endl;
}

void Number20(){
    cout << 1200.00 / 340.00 << endl;
}

int main() {
    Number1();
    cout << "\n";

    Number2();
    cout << "\n";

    Number3();
    cout << "\n";

    Number4();
    cout << "\n";

    Number5();
    cout << "\n";

    Number6();
    cout << "\n";

    Number7();
    cout << "\n";

    Number8();
    cout << "\n";

    Number9();
    cout << "\n";

    Number10();
    cout << "\n";

    Number11();
    cout << "\n";

    Number12();
    cout << "\n";

    Number13();
    cout << "\n";

    Number14();
    cout << "\n";

    Number15();
    cout << "\n";

    Number16();
    cout << "\n";

    Number17();
    cout << "\n";

    Number18();
    cout << "\n";

    Number19();
    cout << "\n";

    Number20();
    
    return 0;
}