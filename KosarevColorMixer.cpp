//  Sergei Kosarev
// Assignment Color Mixer

#include <iostream>

using namespace std;

int main()
{
    string color1, color2;
    cout << "Enter the two primary colors: ";
    cin >> color1 >> color2;
    if ((((color1 == "red") && (color2 == "blue")) || ((color1 == "blue") && (color2 == "red")))) {
        cout << "you get purple" << endl;
    } else if (((color1 == "red") && (color2 == "yellow")) || ((color1 == "yellow") && (color2 == "red"))) {
        cout << "you get orande" << endl;
    } else if (((color1 == "blue") && (color2 == "yellow")) || ((color1 == "yellow") && (color2 == "blue"))) {
        cout << "you get green" << endl;
    } else
        cout << "invalid color" << endl;
    return 0;
}

