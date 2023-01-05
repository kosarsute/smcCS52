//
//  main.cpp
//  CS52
//
//  Created by SERGEI KOSAREV on 1/3/23.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); // setting seed of random number generator
    int randomNumber = rand(); // random number
    // throw dices
     int dice1 = rand() % 6 + 1;
     int dice2 = rand() % 6 + 1;
     int dice3 = rand() % 6 + 1;
     
     // show dices
     cout << "Dice 1: " << dice1 << endl;
     cout << "Dice 2: " << dice2 << endl;
     cout << "Dice 3: " << dice3 << endl;

    int a = 7;
    int b = 5;
    int sum = a + b;
    int diff = a - b;
    float floatQuotient = static_cast<float> (a) / b;
    
    cout << "sum: " << sum << endl;
    cout << "diff " << diff << endl;
    cout << "quotient (int) " << floatQuotient << endl;
    int c = 3;
    int result = a + b * c;
    cout << "result: " << result << endl;
    int result2 = (a + b) * c;
    cout << "result 2: " << result2 << endl;
    double quotient = 4.918774;
     cout << quotient << endl;                    // 4.91877
     cout << setprecision(5) << quotient << endl; // 4.9188
     cout << setprecision(4) << quotient << endl; // 4.919
     cout << setprecision(3) << quotient << endl; // 4.92
     cout << setprecision(2) << quotient << endl; // 4.9
     cout << setprecision(1) << quotient << endl; // 5
    float x = 5 / 2.00;
    cout << x << endl;
return 0;
}
