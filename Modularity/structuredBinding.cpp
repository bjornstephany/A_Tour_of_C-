#include <iostream>
using namespace std;

struct Entry {
    string name;
    int value;
};

Entry read_entry(istream& is)
{
    string s;
    int i;
    is >> s >> i;
    return {s,i};
}

auto e = read_entry(cin);

cout << "{" << e.name << "," << e.value << "}\n"; 
