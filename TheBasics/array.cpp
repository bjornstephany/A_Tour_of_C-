#include <iostream>
using namespace std;

int main()
{

}

void copy_fct()
{
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10];

    for (auto i = 0; i != 10; i++)
        v2[i] = v1[i];
}

void print()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for (auto x:v)
        cout << x << "\n"; //for every element of v, place a copy in x and print it
}

void incremenet()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for (auto& x:v) // In a declaration, & means "referenc to"
        ++x;
}
