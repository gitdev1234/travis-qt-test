#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"


TEST_CASE("Test case 1") {
    REQUIRE(1==1);
    //REQUIRE(2==1); // this will fail the build process
}
