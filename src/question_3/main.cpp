#include "question3.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    std::string dna_one;
    std::string dna_two;
    double p_distance;

    p_distance = get_dna_p_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT");

    cout << "\n" << "The p-distance of the strings 'GAGCCTACTAACGGGAT' and 'CATCGTAATGACGGCCT' is " <<  p_distance << "\n" "\n";

    return 0;
}