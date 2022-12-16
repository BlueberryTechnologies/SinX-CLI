#include <iostream>
#include <iomanip>
#include <limits>
#include <stdio.h>
#include <cmath>
using namespace std;

class SinX{
public:
    void userStartMenu(){
        cout << "Option 1: Number Stats" << endl;
        cout << "Option 2: Add 2 numbers" << endl;
        cout << "======================" << endl;
    }
    void numberStats(){
        double userNum = 0, finalNum = 0, timesZero = 0, compareInt = 0;
        string lessGreater = "";
        cout << "Please enter a number: "; // Asks the user to enter a number
        cin >> userNum; // The user enters a number here and sets it to userNum variable
        cout << "Please enter the number you wish to compare it with: ";
        cin >> compareInt;
        
        /* Compare Math */
        if (userNum > compareInt){
            for (int i = userNum; i>compareInt; i--){
                timesZero++;
            }
            lessGreater = "greater than";
        }else if (userNum < compareInt){
            for (int i = userNum; i<compareInt; i++){
                timesZero++;
            }
            lessGreater = "less than";
        }else if (userNum == compareInt){
            lessGreater = "equal to";
        }
        cout << "\n\n==================================\nNUMBER STATS OF: " << userNum << " and " << compareInt << endl;
        cout << "==================================\n" << userNum << " is " << timesZero << " numbers away from " << compareInt << "\n" << userNum << " is " << lessGreater << " " << compareInt << "\n==================================" << endl;
        /* Calculate Math*/
        
        int calculateNumsAddition = 0;
        int calculateNumsSubtraction = 0;
        int calculateNumsMulti = 0;
        double calculateNumsDivi = 0;
        int calculateNumsMod = 0;

        calculateNumsAddition = userNum + compareInt;
        calculateNumsSubtraction = userNum - compareInt;
        calculateNumsMulti = userNum * compareInt;
        calculateNumsDivi = userNum / compareInt;
        calculateNumsMod = (int) userNum % (int) compareInt;

        cout << "(+) The sum of " << userNum << " and " << compareInt << " is: " << calculateNumsAddition << endl;
        cout << "(-) The difference of " << userNum << " and " << compareInt << " is: " << calculateNumsSubtraction << endl;
        cout << "(*) The product of " << userNum << " and " << compareInt << " is: " << calculateNumsMulti << endl;
        cout << "(/) The quotient of " << userNum << " and " << compareInt << " is: " << setprecision(3) << fixed << calculateNumsDivi << setprecision(0) << endl;
        cout << "(%) " << userNum << " modulus " << compareInt << " is: " << calculateNumsMod << "\n==================================" << endl;

        // End of the program
        
        cout << endl << endl;

    }
    void addNumbers(){
        int numOfNums = 0;
        int number1 = 0;
        int number2 = 0;
        int switchChoice = 0;

        cout << "Enter first number:\n> ";
        cin >> number1;
        cout << "Enter second number:\n> ";
        cin >> number2;
        cout << "What would you like to do with these numbers?:\n" << endl;
        cout << "1) Add the 2 numbers together." << endl;
        cout << "2) Subtract the 2 numbers together." << endl;
        cout << "3) Divide the 2 numbers together." << endl;
        cout << "4) Multiply the 2 numbers together." << endl;
        cout << "> ";
        cin >> switchChoice;
        switch(switchChoice){
            case 1:
                cout << "======================" << endl;
                cout << "> " << number1 << " + " << number2 << " = " << number1+number2 << endl;
                cin.ignore();
                cout << "> Press enter to continue";
                cin.get();
                break;
            default:
                cout << "======================" << endl;
                cout << "That command wasn't valid. Good day." << endl;
                break;
        }
        
    }
    void userChoice(int choice){
        switch(choice){
            case 1:
                cout << "======================" << endl;
                numberStats();
                break;
            case 2:
                cout << "======================" << endl;
                addNumbers();
                break;
            default:
                cout << "======================\nThat was not a valid option! Good day." << endl;
        }
    }
};

int main(){
    SinX sinxClass;
    int optionChoice = 0;
    cout << "===================" << endl;
    cout << "= Welcome to SinX =" << endl;
    cout << "===================" << endl;
    cout << endl;
    cout << "Please pick an option:" << endl << endl;
    sinxClass.userStartMenu();
    cout << "> ";
    cin >> optionChoice;
    sinxClass.userChoice(optionChoice);
    cin.ignore();
    cout << "> Press enter to continue";
    cin.get();
}