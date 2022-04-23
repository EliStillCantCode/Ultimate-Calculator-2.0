#include <iostream>
#include <chrono>
#include <thread>

double x;
double y;
double higher;
double lower;
double depth;
char check;
char groupCheck;
char negative = 'n';
char positive = 'y';

int main() {
	using namespace std::this_thread;     // sleep_for, sleep_until
	using namespace std::chrono_literals; // ns, us, ms, s, h, etc.

	system("Color 0A");

	do //keep asking until user is certain of their values
	{
		system("CLS"); //clear screen
		std::cout << "Hey! Welcome to Ultimate Calculator 2.0! What's your first value? ";
		std::cin >> x;
		std::cout << "\nAwesome! ^^ What's the second value? ";
		std::cin >> y;
		std::cout << "\nYou inputed, " << x << " and " << y << ". Are you sure? Y/N? ";
		std::cin >> check;
	} while (check == negative);

	if (x > y)
	{
		higher = x;
		lower = y;
	}

	if (y > x)
	{
		higher = y;
		lower = x;
	}

	double add = x + y; // group 1
	double subtractX = x - y; //
	double subtractY = y - x; //
	double multiply = x * y; //
	double divideX = x / y; //
	double divideY = y / x; //

	double mAverage = (x + y) / 2; /// group 2
	double difference = higher - lower; ///
	double range = (higher - lower) + 1; ///

	double xSquared = x * x; //// group 3
	double ySqaured = y * y; ////
	double sumSquared = (x + y) * 2; ////
	double productSquared = (x * y) * (x * y); ////
	double quoSquared = (higher / lower) * (higher / lower); ////

	double xCubed = x * x * x; /////// group 4
	double yCubed = y * y * y; ///////
	double sumCubed = (x + y) * 3; ///////
	double productCubed = (x + y) * (x + y) * (x + y); ///////
	double quoCubed = (higher / lower) * (higher / lower) * (higher / lower); ///////

	double volume = x * y * depth; ////// group 5

	double piX = x * 3.14159265358979323846264338327950288419716939937510; ///// group 6
	double piY = y * 3.14159265358979323846264338327950288419716939937510; /////


	sleep_for(1s);
	system("CLS");
	system("Color 8");
	std::cout << ".";
	sleep_for(1s);
	std::cout << ".";
	sleep_for(1s);
	std::cout << ".";
	sleep_for(1s);

	do
	{
		system("CLS");
		system("Color C");
		std::cout << "Value 1: " << x << "	Value 2: " << y;
		std::cout << "\n\n\nGroup One;	#1/6\n\n\n";
		std::cout << "Added/Sum: " << add << "\n\n";
		std::cout << "Value 1 from Value 2: " << subtractX << "\n\n";
		std::cout << "Value 2 from Value 1: " << subtractY << "\n\n";
		std::cout << "Multiplied/Product: " << multiply << "\n\n";
		std::cout << "Value 1 divided by Value 2: " << divideX << "\n\n";
		std::cout << "Value 2 divided by Value 1: " << divideY << "\n\n";
		std::cout << "Ready to continue? Type Y and press ENTER! ";
		std::cin >> groupCheck;
	} while (groupCheck != positive);

	do
	{
		system("CLS");
		system("Color 6");
		std::cout << "Value 1: " << x << "	Value 2: " << y;
		std::cout << "\n\n\nGroup Two;	#2/6\n\n\n";
		std::cout << "Mean Average: " << mAverage << "\n\n";
		std::cout << "Range: " << range << "\n\n";
		std::cout << "Difference: " << difference << "\n\n";
		std::cout << "Ready to continue? Type Y and press ENTER! ";
		std::cin >> groupCheck;
	} while (groupCheck != positive);

	do
	{
		system("CLS");
		system("Color B");
		std::cout << "Value 1: " << x << "	Value 2: " << y;
		std::cout << "\n\n\nGroup Three;	#3/6\n\n\n";
		std::cout << "Value 1 Squared: " << xSquared << "\n\n";
		std::cout << "Value 2 Squared: " << ySqaured << "\n\n";
		std::cout << "Sum Squared: " << sumSquared << "\n\n";
		std::cout << "Product Squared: " << productSquared << "\n\n";
		std::cout << "Value1/Value2 Squared: " << quoSquared << "\n\n";
		std::cout << "Ready to continue? Type Y and press ENTER! ";
		std::cin >> groupCheck;
	} while (groupCheck != positive);

	do
	{
		system("CLS");
		system("Color 9");
		std::cout << "Value 1: " << x << "	Value 2: " << y;
		std::cout << "\n\n\nGroup Four;	#4/6\n\n\n";
		std::cout << "Value 1 Cubed: " << xCubed << "\n\n";
		std::cout << "Value 2 Cubed: " << yCubed << "\n\n";
		std::cout << "Sum Cubed: " << sumCubed << "\n\n";
		std::cout << "Product Cubed: " << productCubed << "\n\n";
		std::cout << "Value1/Value2 Cubed: " << quoCubed << "\n\n";
		std::cout << "Ready to continue? Type Y and press ENTER! ";
		std::cin >> groupCheck;
	} while (groupCheck != positive);

	system("CLS");
	system("Color F");
	std::cout << "Input a depth ^^: ";
	std::cin >> depth;
	volume = x * y * depth;

	do
	{
		system("CLS");
		system("Color D");
		std::cout << "Value 1: " << x << "	Value 2: " << y;
		std::cout << "\n\n\nGroup Five;	#5/6\n\n\n";
		std::cout << "Volume from inputs: " << volume << "\n\n";
		std::cout << "Ready to continue? Type Y and press ENTER! ";
		std::cin >> groupCheck;
	} while (groupCheck != positive);

	do
	{
		system("CLS");
		system("Color 5");
		std::cout << "Value 1: " << x << "	Value 2: " << y;
		std::cout << "\n\n\nGroup Six;	#6/6\n\n\n";
		std::cout << "Value 1 x Pi: " << piX << "\n\n";
		std::cout << "Value 2 x Pi: " << piY << "\n\n";
		std::cout << "Ready to continue? Type Y and press ENTER! ";
		std::cin >> groupCheck;
	} while (groupCheck != positive);

	return(0);
}