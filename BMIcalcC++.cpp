// BMIcalcC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void main()
{
  //BMI calculator
	//weight (Lbs)/height(ft)
	//Underweight <18.5
	//Normal Weight 18.5-24.9
	//Overweight >25

	float weight, height, bmi;
	cout << "Enter your weight (in pounds) and your height (in inches): ";
	cin >> weight >> height;
	bmi = (weight / (height * height))*703;
	if (bmi<18.5) {
		cout << "You are underweight. Your BMI is: ";
		cout << bmi;

	}
	else if (bmi > 25){
		cout << "You are overweight. Your BMI is: ";
		cout << bmi;
		}
		else{
			cout << "You are in the normal weight range. Your BMI is: ";
			cout << bmi;
		}



	cout << "\nThanks!";




	system("pause>0");
	}




