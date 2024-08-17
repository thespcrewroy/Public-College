/*----------------------------------------------------------------*
*	Author: Swapnil Roy                                           *
*	Write a program that reads the wind-tunnel test data and then *
*	allows the user to enter a flight-path angle. If the angle is *
*	within the bounds of the data set, the program should then    *
*	uselinear interpolation to compute the corresponding		  *
*	coefficient of lift.								          */

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    // Read the data file
    ifstream file("data.txt");
    vector<double> angles, coefficients;
    double angle, coefficient;
    while (file >> angle >> coefficient) {
        angles.push_back(angle);
        coefficients.push_back(coefficient);
    }

    // Get the flight-path angle from the user
    double inputAngle;
    cout << "Enter the flight-path angle in degrees: ";
    cin >> inputAngle;

    // Check if the input angle is within the bounds of the data set
    if (inputAngle < angles.front() || inputAngle > angles.back()) {
        cout << "The input angle is out of bounds." << endl;
        return 1;
    }

    // Find the indices of the angles bracketing the input angle
    size_t i = 0;
    while (angles[i] < inputAngle) {
        i++;
    }
    size_t j = i - 1;

    // Linearly interpolate the coefficient of lift
    double coeff = coefficients[j] + (coefficients[i] - coefficients[j]) * (inputAngle - angles[j]) / (angles[i] - angles[j]);

    // Display the result
    cout << "The coefficient of lift at " << inputAngle << " degrees is " << coeff << "." << endl;

    return 0;
}
