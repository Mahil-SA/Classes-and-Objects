# Classes and Objects
This repository contains experiments 11 which are related to the classes and objects in C++.

# Pointers
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
        cout<<"Car Details: "<<myCollege.collegename<<" " <<myCollege.city<<" ("<<myCollege.batch<<")"<<endl;
    }
};
int main()
{
    College myCollege;
    myCollege.displayInfo();
    return 0;
}
~~~

# Conclusion
In C++ we have learnt what are classes and how to define them.

# Outputs

## Program 1 (Defining a class.)
![image](https://github.com/user-attachments/assets/0847aa69-470b-4cbd-9f46-9408864c4a3e)

## Program 2 (Function/Method inside a class.) 
![image](https://github.com/user-attachments/assets/80039e37-fd29-4568-a7d6-fb5088e118e6)
