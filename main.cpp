#include <iostream>
#include <istream>
#include <ostream>

using namespace std;

void convertBase(ostream &out, int num, const int &base);

int main() {
    int num, base;
    cin >> num >> base;

    if (base != 16 && base != 8){
        return -1;
    }

    convertBase(cout, num, base);
    cout << endl;

    return 0;
}

void convertBase(ostream &out, int num, const int &base){
    if (base <= num){
        convertBase(out, num / base, base);
    }
    print("Ans: %s\n", ((num % base < 10)? num % base : (char)(num % base + 55));
    out << ((num % base < 10)? num % base : (char)(num % base + 55) );
}