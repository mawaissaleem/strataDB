#include <catch2/catch_test_macros.hpp>
#include "./../include/add_number.hpp"

// test case
// TEST_CASE("name", "tag")
// tag is like the group of test it belongs
TEST_CASE("Addition function works","[maths]")
{
REQUIRE(add_numbers(2.0,3.0)==5.0);
}
