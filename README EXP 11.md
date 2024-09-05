# Classes and Objects
This repository contains experiments 11 which are related to the classes and objects in C++.

# Classes and Objects
# EXPERIMENT 9:
## Aim: 
To study and implement classes and objects.
## Theory: 
In C++, classes are blueprints for creating objects, encapsulating data and functions. A class defines attributes (data members) and behaviors (methods) that its objects will have. Objects are instances of classes, each with its own set of attribute values. For example, a `Car` class might have attributes like `color` and `speed`, and methods like `accelerate()`. Creating an object of `Car` allows you to work with specific cars and their behaviors.
~~~
CODE:

//Program 1 (Defining a class.)
#include<iostream>
using namespace std;
class Car
{
    public:
    string make = "Hyundai";
    string model = "Creta";
    int year = 2016;
};
int main()
{
    Car myCar;
    cout<<"Car Details: "<<myCar.make<<" " <<myCar.model<<" ("<<myCar.year<<")"<<endl;
    return 0;
}

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
~~~

# Conclusion
In C++ we have learnt what are classes and how to define them.

# Outputs

## Program 1 (Defining a class.)
![image](https://github.com/user-attachments/assets/0847aa69-470b-4cbd-9f46-9408864c4a3e)

## Program 2 (Function/Method inside a class.) 
![image](https://github.com/user-attachments/assets/80039e37-fd29-4568-a7d6-fb5088e118e6)

## Program 3 (Concept of Public and Private Variables in Class.)
![image](https://github.com/user-attachments/assets/2f9ab474-f9ed-4ff7-a918-46f396a3e2da)

## Program 4 (Question)
![image](https://github.com/user-attachments/assets/239edffd-3dd1-44f4-85d1-b1bbee6d2af3)
