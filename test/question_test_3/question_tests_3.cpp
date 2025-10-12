#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("get_dna_p_distance computes correct p-distance", "[get_dna_p_distance]") {
	SECTION("Test case a") {
		std::string dna1 = "GAGCCTACTAACGGGAT";
		std::string dna2 = "CATCGTAATGACGGCCT";
		double expected = 0.4118;
		double result = get_dna_p_distance(dna1, dna2);
		REQUIRE(Approx(result).margin(0.0001) == expected);
	}

	SECTION("Test case b") {
		std::string dna1 = "GAGCCTACTAACGGGAT";
		std::string dna2 = "GATCGTAATGACGGCCT";
		double expected = 0.3529;
		double result = get_dna_p_distance(dna1, dna2);
		REQUIRE(Approx(result).margin(0.0001) == expected);
	}
}