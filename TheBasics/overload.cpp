#include <iostream>
#include <string>
using namespace std;

void print(int i);
void print(string s);

int main()
{
    print("Barcelona");
    return 0;
}

void print(int i)
{
    cout << i;
}
void print(string s)
{
    cout << s;
}
