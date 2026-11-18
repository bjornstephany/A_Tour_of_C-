#include <iostream>
using namespace std;
bool accept();

int main()
{
    accept();
}

bool accept()
{
    cout << "Do you want to proceed ( y / n) ?\n";
    char answer = 0;
    cin >> answer;

    switch(answer)
    {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "You must answer y or n ! I've taken that as a no";
            return false;
    }
}
