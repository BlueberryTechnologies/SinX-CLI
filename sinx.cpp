#include <iostream>
#include <iomanip>
#include <limits>
#include <stdio.h>
#include <cmath>
#include <sstream>

using namespace std;

void stats(double userNum, int compareInt){
    double timesZero = 0;
    string lessGreater = "";
    
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
    cout << "==================================\n" << userNum << " is " << timesZero << " number(s) away from " << compareInt << "\n" << userNum << " is " << lessGreater << " " << compareInt << "\n==================================" << endl;
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

void help(){
    cout << "Usage: sinx [ --add, -a | --subtract, -s | --divide, -d | --multiply, -m , | --stats, -s ] (num1) (num2)" << endl;
}
void helpAdd(){
    cout << "Usage: sinx [--add | --subtract | --divide | --multiply] (num1) (num2)" << endl;
}

void addNumbers(int firstNum, int secondNum){
    cout << firstNum << " + " << secondNum << " = " << (firstNum + secondNum) << endl;
}
void subtractNumbers(int firstNum, int secondNum){
    cout << firstNum << " - " << secondNum << " = " << (firstNum - secondNum) << endl;
}
void multiplyNumbers(int firstNum, int secondNum){
    cout << firstNum << " * " << secondNum << " = " << (firstNum * secondNum) << endl;
}
void divideNumbers(double firstNum, double secondNum, double specifyRound){
    cout << firstNum << " / " << secondNum << " = " << setprecision(specifyRound) << fixed << (firstNum / secondNum) << setprecision(0) << endl;
}

int main(int argc, char* argv[]) {
  if (argc < 3) {
    help();
    return 1;
  }

  double userEnteredNum1 = atoi(argv[2]);
  double userEnteredNum2 = atoi(argv[3]);
  double specifyRound = 0;


  if (argc == 3) {
    help();
  } else if (string(argv[1]) == "--add" || string(argv[1]) == "-a") {
    addNumbers(userEnteredNum1, userEnteredNum2);
  } else if (string(argv[1]) == "--subtract" || string(argv[1]) == "-s") {
    subtractNumbers(userEnteredNum1, userEnteredNum2);
  } else if (string(argv[1]) == "--divide" || string(argv[1]) == "-d") {
    divideNumbers(userEnteredNum1, userEnteredNum2, specifyRound);
  } else if (string(argv[1]) == "--multiply" || string(argv[1]) == "-m") {
    multiplyNumbers(userEnteredNum1, userEnteredNum2);
  } else if (string(argv[1]) == "--help" || string(argv[1]) == "-h") {
    help();
  } else if (string(argv[1]) == "--stats" || string(argv[1]) == "-st") {
    stats(userEnteredNum1, userEnteredNum2);
  } else {
    cout << "Invalid option: " << argv[3] << endl;
    help();
    return 1;
  }
  return 0;
}