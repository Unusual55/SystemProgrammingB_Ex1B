#ifndef Mat_H
#define Mat_H
#include <string>
using namespace std;
namespace ariel
{
    //This function is a generator of mat using the input arguments
    string mat(int n, int m, char a, char b);
    //This function check if the input is valid
    void inputCheck(int row, int col, char a, char b);
    //This constant is the upper bound of printable characters
    const int UpperBound=126;
    //This constant is the lower bound of printable characters
    const int LowerBound=33;
}; // namespace name

#endif