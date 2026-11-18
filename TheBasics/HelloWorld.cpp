#include <iostream> // or more modern: import std;

int main()
{
    std::cout << "Hello, World!\n";
    print_square(1.2345);
}

using namespace std;

double square(double x)
{
    return x*x;
}

void print_square(double x)
{
    cout << "The sqaure of " << x << "is " << square(x) << "\n";
}
