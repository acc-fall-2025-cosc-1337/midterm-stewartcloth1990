#include "question4.h"
#include <string>

using namespace std;

string transcribe_dna_into_rna(const string& dna)
{
    string rna = dna;

    for (char& c : rna)
    {
        if (c == 'T')
        {
            c = 'U';
        }
    }
    return rna;
}


//
bool test_config()
{
    return true;
}