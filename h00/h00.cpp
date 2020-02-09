/**
 *  @author Justin Moorehead
 *  @date 1-28-20 (Semester is OK)
 *  @file h00.cpp
 */
#include <iostream>
#include <string>
using namespace std;

string STUDENT = "jmoorehead1";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here
    // Write your code here

    cout << STUDENT << " starter code." << endl;

    cout << "Enter ounces per box of cereal: ";
    double ouncesPerBox;
    cin >> ouncesPerBox;
    double weightInTons = ouncesPerBox / 35273.92;
    double boxesPerTon = 1 / weightInTons;

    cout << "[" << weightInTons << ", " << boxesPerTon << "]" << endl;

    return 0;
}

