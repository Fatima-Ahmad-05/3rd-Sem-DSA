#include <iostream>
#include "utilities.h"
using namespace std;


int main() {

    int num1;//prompt user to enter 2 numbers
    int num2;
    cout << "add("<<num1<<","<<num2<<")==5: " << (add(num1,num2) == 5 ? "PASS" : "FAIL") << endl;
    return 0;
}
