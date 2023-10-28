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
//    printf("Ans: %s\n", (num % base < 10)? to_string(num % base).c_str() :
//    to_string((char)(num % base + 55)).c_str());
//    char c = (num % base < 10)? to_string(num % base).c_str() :
//            to_string((char)(num % base + 55)).c_str();
    (num % base < 10)? out << num % base: out << static_cast<char>(num % base + 55);
}