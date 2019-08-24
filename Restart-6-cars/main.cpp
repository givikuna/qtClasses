#include <iostream>

using namespace std;

struct Car
{
    string m_brand;
    float m_highestSpeed;
    float m_price;
    char m_type;
};

struct SportsCar : public Car {
  //
};
struct SUV : public Car {
  //
};
struct Sedan : public Car {
  //
};
struct Hatchback : public Car {
  //
};

int main()
{
    Car car;
    cout << " Car Type: Sports Car(s), SUV (u), Sedan (e), Hatchback (h): ";
    cin >> car.m_type;

    if (car.m_type == 's') {
        SportsCar sportscar;

        cout << " Sports Car's Brand: ";
        cin >> sportscar.m_brand;
        cout << " Sports Car's Highest Speed: ";
        cin >> sportscar.m_highestSpeed;
        cout << " Sports Car's Price: ";
        cin >> sportscar.m_price;
        cout << "---------------" << endl;
        cout << " Sports Car's Brand: " << sportscar.m_brand << endl;
        cout << " Sports Car's Highest Speed: " << sportscar.m_highestSpeed << endl;
        cout << " Sports Car's Price: " << sportscar.m_price << endl;
    }
    if (car.m_type == 'S') {
        SportsCar sportscar;

        cout << " Sports Car's Brand: ";
        cin >> sportscar.m_brand;
        cout << " Sports Car's Highest Speed: ";
        cin >> sportscar.m_highestSpeed;
        cout << " Sports Car's Price: ";
        cin >> sportscar.m_price;
        cout << "---------------" << endl;
        cout << " Sports Car's Brand: " << sportscar.m_brand << endl;
        cout << " Sports Car's Highest Speed: " << sportscar.m_highestSpeed << endl;
        cout << " Sports Car's Price: " << sportscar.m_price << endl;
    }
    if (car.m_type == 'u') {
        SUV SUV;

        cout << " SUV's Brand: ";
        cin >> SUV.m_brand;
        cout << " SUV's Highest Speed: ";
        cin >> SUV.m_highestSpeed;
        cout << " SUV's Price: ";
        cin >> SUV.m_price;
        cout << "---------------" << endl;
        cout << " SUV's Brand: " << SUV.m_brand << endl;
        cout << " SUV's Highest Speed: " << SUV.m_highestSpeed << endl;
        cout << " SUV's Price: " << SUV.m_price << endl;
    }
    if (car.m_type == 'U') {
        SUV SUV;

        cout << " SUV's Brand: ";
        cin >> SUV.m_brand;
        cout << " SUV's Highest Speed: ";
        cin >> SUV.m_highestSpeed;
        cout << " SUV's Price: ";
        cin >> SUV.m_price;
        cout << "---------------" << endl;
        cout << " SUV's Brand: " << SUV.m_brand << endl;
        cout << " SUV's Highest Speed: " << SUV.m_highestSpeed << endl;
        cout << " SUV's Price: " << SUV.m_price << endl;
    }
    if (car.m_type == 'e') {
        Sedan Sedan;

        cout << " Sedan's Brand: ";
        cin >> Sedan.m_brand;
        cout << " Sedan's Highest Speed: ";
        cin >> Sedan.m_highestSpeed;
        cout << " Sedan's Price: ";
        cin >> Sedan.m_price;
        cout << "---------------" << endl;
        cout << " Sedan's Brand: " << Sedan.m_brand << endl;
        cout << " Sedan's Highest Speed: " << Sedan.m_highestSpeed << endl;
        cout << " Sedan's Price: " << Sedan.m_price << endl;
    }
    if (car.m_type == 'E') {
        Sedan Sedan;

        cout << " Sedan's Brand: ";
        cin >> Sedan.m_brand;
        cout << " Sedan's Highest Speed: ";
        cin >> Sedan.m_highestSpeed;
        cout << " Sedan's Price: ";
        cin >> Sedan.m_price;
        cout << "---------------" << endl;
        cout << " Sedan's Brand: " << Sedan.m_brand << endl;
        cout << " Sedan's Highest Speed: " << Sedan.m_highestSpeed << endl;
        cout << " Sedan's Price: " << Sedan.m_price << endl;
    }
    if (car.m_type == 'h') {
        Hatchback Hatchback;

        cout << " Hatchback's Brand: ";
        cin >> Hatchback.m_brand;
        cout << " Hatchback's Highest Speed: ";
        cin >> Hatchback.m_highestSpeed;
        cout << " Hatchback's Price: ";
        cin >> Hatchback.m_price;
        cout << "---------------" << endl;
        cout << " Hatchback's Brand: " << Hatchback.m_brand << endl;
        cout << " Hatchback's Highest Speed: " << Hatchback.m_highestSpeed << endl;
        cout << " Hatchback's Price: " << Hatchback.m_price << endl;
    }
    if (car.m_type == 'H') {
        Hatchback Hatchback;

        cout << " Hatchback's Brand: ";
        cin >> Hatchback.m_brand;
        cout << " Hatchback's Highest Speed: ";
        cin >> Hatchback.m_highestSpeed;
        cout << " Hatchback's Price: ";
        cin >> Hatchback.m_price;
        cout << "---------------" << endl;
        cout << " Hatchback's Brand: " << Hatchback.m_brand << endl;
        cout << " Hatchback's Highest Speed: " << Hatchback.m_highestSpeed << endl;
        cout << " Hatchback's Price: " << Hatchback.m_price << endl;
    }



    return 0;
}
