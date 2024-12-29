#include <iostream>
using namespace std;

int main()
{
    double earthWeight, weight;
    int planet = 7;
    cout << "Enter the weight on Earth: ";
    cin >> earthWeight;

    cout << " 1. Mercury\n 2. Venus\n 3. Mars\n 4. Jupiter\n 5. Saturn\n 6. Uranus\n 7. Neptune\n"
         << endl;

    cout << "Enter a number for the planet you wants to fight on: " << endl;
    cin >> planet;

    switch (planet)
    {
    case 1:
        if (planet == 1)
        {
            weight = earthWeight * 0.38;
            cout << "In Mercury the weight will be " << weight << endl;
        }
        break;

    case 2:
        if (planet == 2)
        {
            weight = earthWeight * 0.91;
            cout << "In Venus the weight will be " << weight << endl;
            break;
        }

    case 3:
        if (planet == 3)
        {
            weight = earthWeight * 0.38;
            cout << "In Mars the weight will be " << weight << endl;
            break;
        }

    case 4:
        if (planet == 4)
        {
            weight = earthWeight * 2.34;
            cout << "In Jupiter the weight willl be " << weight << endl;
            break;
        }

    case 5:
        if (planet == 5)
        {
            weight = earthWeight * 1.06;
            cout << "In Saturn the weight will be " << weight << endl;
            break;
        }

    case 6:
        if (planet == 6)
        {
            weight = earthWeight * 0.92;
            cout << "In Uranus the weight will be " << weight << endl;
            break;
        }

    case 7:
        if (planet == 7) {
            weight = earthWeight * 1.19;
            cout << "In Neptune the weight will be " << weight << endl;
            break;
        }

    default:
        cout << "Invalid input" << endl;
        break;
    }

    return 0;
}
