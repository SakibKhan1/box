/*
Author: Sakib Khan 
Course: CSCI-135
Instructor: Tong Yi
Assignment: Box
Makes rectangular box with asterisks
given user input of both width and height.
*/

#include <iostream>
using namespace std;
int main()
{
    int width, height;
    cout << "Input width ";
    cin >> width;
    cout << "Input height ";
    cin >> height;
    cout << "Shape: " << endl;
    for (int i=0; i < height; i++) //nested for loop 
    {
        for (int j=0; j < width; j++) 
        {
            cout << "*"; //symbol made for block
        }
        cout << endl;
    }
    return 0;
}
