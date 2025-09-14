#include <iostream>
#include "utilities.h"
using namespace std;


int main() {

    int num1;//prompt user to enter 2 numbers
    int num2;
    cout << "adding("<<num1<<","<<num2<<")==5: " << (add(num1,num2) == 5 ? "PASS" : "FAIL") << endl;
    cout<<"Subtracting ("<<num1<<","<<num2<<")==5:"<<(subtract(num1,num2) == 5 ? "PASS" : "FAIL") << endl;//new function
    return 0;
}
