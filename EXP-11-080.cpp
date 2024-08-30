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
