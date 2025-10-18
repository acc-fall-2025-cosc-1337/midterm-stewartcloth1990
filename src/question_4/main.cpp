#include "question4.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string rna = transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT");
    cout << "The DNA string 'GATGGAACTTGACTACGTAAATT' converted into an RNA string is: " << rna << endl;

    return 0;
}