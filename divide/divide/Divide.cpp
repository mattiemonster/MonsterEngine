#include <iostream>

#define newLine() std::cout << std::endl;
#define log(x) std::cout << x << std::endl;

// Calculate answer
double calculate(double a, double b)
{
	return a / b;
}

// Print the answer
void printans(double ans)
{
	std::cout << "The answer is: " << ans << std::endl;
	system("PAUSE");
}

// Retrieve values to divide.
void retrieve()
{
	double a, b, ans;
	a = 0, b = 0, ans = 0; // Set both values to 0.
	std::printf("First number: ");
	std::cin >> a;
	std::printf("Second number: ");
	std::cin >> b;
	ans = calculate(a, b);
	printans(ans);
}

int main()
{
	std::cout << "Divide Program" << std::endl;
	retrieve();
}