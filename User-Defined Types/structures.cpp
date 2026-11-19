#include <iostream>
using namespace std;

struct Vector {
    double* elem; //pointer to elements
    int size; //number of elements
};

void vector_init(Vector& v, int s) // initialize a vector
{
    v.elem = new double[s]; // allocate an array of s doubles
    v.size = s;
};

double read_and_sum(int s)
{
    Vector v;
    vector_init(v,s);

    for (int i = 0; i != s; i++)
        cin >> v.elem[i];
        double sum = 0;
        for (int i = 0; i != s; i++)
            sum += v.elem[i];
        return sum;
}

void f(Vector v, Vector& rv, Vector* pv)
{
    int i1 = v.size; // access through name
    int i2 = rv.size; // access through reference
    int i3 = pv -> size; // access through pointer
}
