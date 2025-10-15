#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("transcribe_dna_into_rna returns correct RNA sequence") {
	std::string dna = "GATGGAACTTGACTACGTAAATT";
	std::string expected_rna = "GAUGGAACUUGACUACGUAAAUU";
	REQUIRE(transcribe_dna_into_rna(dna) == expected_rna);
}