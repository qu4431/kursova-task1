#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
int Calculator::asd (double a, double b)
{
    return a / b + 0.5;
}int Calculator::qwe (double a, double b)
{
    return a * b * 0.5;
}