//  File name: main.cpp
//  Programmer: Cynthia Simon
//  Course: Prorgramming Fundamentals II (COSC 1337)
//  Professor: Isaac K. Gang
//  Institution: Texas A&M University-Commerce

//  Problem: Arrays and Strings
//  Due date: 4/15/19

#include <iostream>
using namespace std;

int main()
{
    char letter;
    int sum = 0;
    
    cout << "Enter a telephone number expressed in letters" << "that outputs the corresponding number in digits." << endl;
    
    while (cin>>(letter) && sum <7)
    {
        if (letter != ' ' && letter >= 'a' && letter <= 'z' && letter>= 'A' && letter <= 'Z' ) sum++;
        if (letter > 'Z' && letter > 'z')
        {
            letter = letter - 32;
        }
        if (sum == 4)
        {
            cout << "-";
        }
        switch (letter)
        {
            case 'a':
            case 'b':
            case 'c':
                cout << "2";
                break;
            case 'd':
            case 'e':
            case 'f':
                cout << "3";
                break;
            case 'g':
            case 'h':
            case 'i':
                cout << "4";
                break;
            case 'j':
            case 'k':
            case 'l':
                cout << "5";
                break;
            case 'm':
            case 'n':
            case 'o':
                cout << "6";
                break;
            case 'p':
            case 'q':
            case 'r':
            case 's':
                cout << "7";
                break;
            case 't':
            case 'u':
            case 'v':
                cout << "8";
                break;
            case 'w':
            case 'x':
            case 'y':
            case 'z':
                cout << "9";
                cout << "\n";
                
                break;
                
            case 'A':
            case 'B':
            case 'C':
                cout << "2";
                break;
            case 'D':
            case 'E':
            case 'F':
                cout << "3";
                break;
            case 'G':
            case 'H':
            case 'I':
                cout << "4";
                break;
            case 'J':
            case 'K':
            case 'L':
                cout << "5";
                break;
            case 'M':
            case 'N':
            case 'O':
                cout << "6";
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                cout << "7";
                break;
            case 'T':
            case 'U':
            case 'V':
                cout << "8";
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                cout << "9";
                cout << "\n";
                
                break;
                
            default:
            cout << "Invalid input." << endl;}
        }
        
}

