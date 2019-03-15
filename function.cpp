/*
  FUNCTION AND FUNCTION CALL
    Functions are a very useful method of grouping complicated lines of code together. Suppose a program has several thousand lines of code, reading the program from top to
	bottom would be difficult. Luckily for us, we can use a function to group together lines of codes that perform a specific function. This is to isolate code from one area to
	another and prevent generating bugs which are difficult to trace. By partitioning code into functions, our program becomes easily readable by fellow programmers reading and
	debugging your code. Functions also isolate variables from other parts of the code, allowing you to reuse variable names. A variable initialized inside a function will only
	exist inside that function.
		C++, Java and C programming make use of a special function called main(). 'main()' pertains to your home function; it is where the function starts. Other programming
	languages such as Python does not make use of main(). When the program is run, the main function is called first. For other functions, we require a function prototype.
		A function prototype is a header file placed on top of the program that declares the name as a function. They follow the syntax 'type name(args)' where type refers to its
	data type (int, double, void, etc.), name is the name of the function and args as the input arguments to the function. You must declare all input arguments in the functions
	prototype to avoid generating an error. Once the function prototype has been declared, you can generate your function inside of the program.
		Generating a function follows the same syntax as a function header but only this time you can declare names for your input arguments. To obtain a value from a function,
	use a return statement. The return statement takes the output of a particular function, enabling it to be used by other functions.
		Function call means to allow the function to execute its lines of code. This can be done by simply calling the name of the function (and assigning its input arguments if (
	neccesary) or assigning a variable to a function call (as shown below).

@auth siege
@init 03/06/19
*/

#include <iostream>

double summer(double, double);
double difference(double, double);
double multiplier(double, double);
double divider(double, double);
void display(double, double, double, double);

int main() {
	double val1, val2, sum, dif, prod, quo;
	std::cout << "Enter val1: ";
	std::cin >> val1;
	std::cout << "Enter val2: ";
	std::cin >> val2;

	sum = summer(val1, val2);
	dif = difference(val1, val2);
	prod = multiplier(val1, val2);
	quo = divider(val1, val2);

	display(sum, dif, prod, quo);
}

double summer(double x, double y) {
	double z;
	z = x + y;
	return z;
}

double difference(double x, double y) {
	double z;
	z = x - y;
	return z;
}

double multiplier(double x, double y) {
	double z;
	z = x * y;
	return z;
}

double divider(double x, double y) {
	double z;
	z = x / y;
	return z;
}

void display(double ans1, double ans2, double ans3, double ans4) {
	std::cout << "----------------------------------------------------------\n";
	std::cout << "val1 + val2 = " << ans1 << "\n";
	std::cout << "val1 - val2 = " << ans2 << "\n";
	std::cout << "val1 * val2 = " << ans3 << "\n";
	std::cout << "val1 / val2 = " << ans4 << "\n";
	std::cout << "                 END TRANSMISSION" << "\n";
	std::cout << "----------------------------------------------------------\n";
}
