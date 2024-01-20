
#include <iostream>
using namespace std;

//program for cargo

void price(float cargo);

int main()
{
    float cargo;
    cout << "Enter the  number of cargo: ";
    cin >> cargo;

    price(cargo);
}

void price(float cargo)
{
    float ton, percentBus, percentTruck, percentTrain, price;
    int countbus = 0;
    int counttruck = 0;
    int counttrain = 0;
    int countton = 0;

cout << "Enter the tons : "; 

    for (int x = 1; x <= cargo; x++)
    {
        cin >> ton;

        if (ton <= 3)
        {
            countbus = countbus + ton;
        }

        if (ton > 3 && ton <= 11)
        {
            counttruck = counttruck + ton;
        }

        if (ton > 11)
        {
            counttrain = counttrain + ton;
        }

        countton = countton + ton;
    }

    percentBus = (countbus * 100) / countton;
    percentTruck = (counttruck * 100) / countton;
    percentTrain = (counttrain * 100) / countton;

    price = ((countbus * 200) + (counttruck * 175) + (counttrain * 120)) / countton;

    cout << price << endl;
    cout << percentBus << "%" << endl;
    cout << percentTruck << "%" << endl;
    cout << percentTrain << "%" << endl;
}
