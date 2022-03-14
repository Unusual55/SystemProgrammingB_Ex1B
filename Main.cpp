#include "mat.hpp"
#include <string>
#include <cctype>
#include <iostream>
using namespace std;
using namespace ariel;

int main(int argc, char const *argv[])
{
    cout<<ariel::mat(9, 7, '*', '@');
    return 0;
}
