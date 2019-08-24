#include <iostream>

using namespace std;

typedef int RGB;

struct Car
{
    string ownerName;
    string brand;
    string name;
    string plate_id;
    float price;
    int highestSpeed;
    char rgbBlue;
    char rgbGreen;
    char rgbRed;
};

int main()
{
    int a;
    cout << "count of cars: ";
    cin >> a;
    Car* car = new Car[a];

    //Car car;

        for (int i=0;i<a;i++) {
        cout << " Owner #" << i + 1 << " Name: ";
        cin >> car[i].ownerName;

        cout << " Owner #" << i + 1 << " Car's Brand: ";
        cin >> car[i].brand;

        cout << " Owner #" << i + 1 << " Car's Price: ";
        cin >> car[i].price;

        cout << " Owner #" << i + 1 << " Car's Plate ID: ";
        cin >> car[i].plate_id;

        cout << " Owner #" << i + 1 << " Car's Highest Speed: ";
        cin >> car[i].highestSpeed;

        cout << "\n\r";
        cout << "\n\r";

    }

    cout << " ---------------------------------------------------------------- " << endl;

    for ( int i = 0 ; i < a ; i++ ) {
        cout << " Owner #" << i + 1 << " Name: " << car[i].ownerName << endl;
        cout << " Owner #" << i + 1 << " Car's Brand: " << car[i].brand << endl;
        cout << " Owner #" << i + 1 << " Car's Price: " << car[i].price << endl;
        cout << " Owner #" << i + 1 << " Car's Plate ID: " << car[i].plate_id << endl;
        cout << " Owner #" << i + 1 << " Car's Highest Speed: " << car[i].highestSpeed << endl;
        cout << "\n\r";
        cout << "\n\r";
    }

    delete[] car;

    return 0;
}
