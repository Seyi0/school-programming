#include <iostream>

using namespace std;

int main() {
  // Declare variables
  float celsius, fahrenheit;

  // Get temperature in Celsius from user
  cout << "Enter the temperature in Celsius: ";
  cin >> celsius;

  // Convert Celsius to Fahrenheit
  fahrenheit = (celsius * 9.0) / 5.0 + 32;

  // Print the temperature in Fahrenheit
  cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;

  // Get temperature in Fahrenheit from user
  cout << "Enter the temperature in Fahrenheit: ";
  cin >> fahrenheit;

  // Convert Fahrenheit to Celsius
  celsius = (fahrenheit - 32) / 1.8;

  // Print the temperature in Celsius
  cout << "The temperature in Celsius is: " << celsius << endl;

  return 0;
}