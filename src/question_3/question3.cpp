#include "question3.h"

double get_dna_p_distance(const std::string& dna_one, const std::string& dna_two)
{
    int diff = 0;

    for (int i = 0; i < dna_one.length(); ++i)
    {
        if (dna_one[i] != dna_two[i]) diff++;
    }

    double ratio = double(diff) / dna_one.length();

    return ratio;
}


bool test_config()
{
    return true;
}