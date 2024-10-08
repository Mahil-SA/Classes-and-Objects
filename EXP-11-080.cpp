//Experiment 11 - To study and implement classes and objects.
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

//Program 1 (Defining a class.)
#include<iostream>
using namespace std;
class Car
{
    public:
    string make = "Mahindra";
    string model = "XUV 700";
    int year = 2024;
};
int main()
{
    Car myCar;
    cout<<"Car Details: "<<myCar.make<<" " <<myCar.model<<" ("<<myCar.year<<")"<<endl;
    return 0;
}

//Output
/*
Car Details: Mahindra XUV 700 (2024)
*/

//Program 2 (Function/Method inside a class.)
#include<iostream>
using namespace std;
class College
{
    public:
    string collegename = "Symbiosis Institute of Technology";
    string city = "Pune";
    int batch = 2023;
    void displayInfo()
    {
        College myCollege;
        cout<<"College Details: "<<myCollege.collegename<<" " <<myCollege.city<<" ("<<myCollege.batch<<")"<<endl;
    }
};
int main()
{
    College myCollege;
    myCollege.displayInfo();
    return 0;
}

//Output
/*
College Details: Symbiosis Institute of Technology Pune (2023)
*/

//Program 3 (Concept of Public and Private Variables in Class)
#include<iostream>
using namespace std;
class Rectangle
{
    public:
    double length;
    double width;
    public:
    void setDimensions(double len, double wid)
    {
        cout<<"Enter the length of the rectangle: ";
        cin>>len;
        cout<<"Enter the width of the rectangle: ";
        cin>>wid;
        length = len;
        width = wid;
    }
    double calculateArea()
    {
        return length * width;
    }
};
int main()
{
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);
    cout<<"Area: "<<
    rect.calculateArea()<<endl;
    return 0;
}

//Output
/*
Enter the length of the rectangle: 3.1
Enter the width of the rectangle: 2.05
Area: 6.355
*/

//Program 4 (Write code for class for the given main program and output.)
#include<iostream>
using namespace std;
class Car
{
    public:
    string make;
    string model;
    int year;
    void userInput()
    {
        cout<<"Enter make of the car: ";
        cin>>make;
        cout<<"Enter model of the car: ";
        cin>>model;
        cout<<"Enter manufacture year of the car: ";
        cin>>year;
    }
    void displayInfo()
    {
        cout<<"Car Details: "<<make<<" " <<model<<" ("<<year<<")"<<endl;
    }
};
int main()
{
    Car myCar;
    myCar.userInput();
    myCar.displayInfo();
    return 0;
};

//Output
/*
Enter make of the car: Hyundai
Enter model of the car: Creta
Enter manufacture year of the car: 2016
Car Details: Hyundai Creta (2016)
*/
